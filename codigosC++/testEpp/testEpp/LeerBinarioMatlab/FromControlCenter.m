function [ linearData ] = FromControlCenter( filePath, format )
%FromControlCenter imports a text file comming from Cypress Control Center
%   Imports a text file with the format given by 'The transfer File-IN'
%   button of Cypress control center.
%   Parameters:
%       filePath; The path to the text file.
%       format; Which format use to interpret the text file, options;
%           uint32/default: Unsigned integer 32 bits
%           uint16:         Unsigned integer 16 bits
%           uint16p32:      Unsigned integer 16 bits, filled to reach 32
%           int32/default:  Signed integer 32 bits
%           int16:          Signed integer 16 bits
%           int16p32:       Signed integer 16 bits, filled to reach 32
    
    % Check machine endianness
    endianness = 'little';
    if(typecast(uint8([0, 1]), 'uint16') > 1) endianness = 'big'; end
    
    f = fopen(filePath);
    
    if ~exist('format','var'), format='default'; end
    
    if(strcmp(format, 'default') || strcmp(format, 'uint32') || strcmp(format, 'int32'))
        data = BinaryFileToArray(f, 4);
    elseif(strcmp(format, 'uint16') || strcmp(format, 'int16'))
        data = BinaryFileToArray(f, 2);
    elseif(strcmp(format, 'uint16p32') || strcmp(format, 'int16p32'))
        format = format(1:(length(format) - 3));
        data = BinaryFileToArray(f, 4);
        data = data(:, 1:2);
    else
        fclose(f);
        error('prog:input', 'Format option "%s" not recognized.', format);
    end
    
    fclose(f);
    if(strcmp(endianness, 'little')) data = fliplr(data); end
    data = data';
    linearData = typecast(data(:), format);

end

