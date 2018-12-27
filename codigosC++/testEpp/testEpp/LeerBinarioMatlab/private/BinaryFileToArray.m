function [ result ] = BinaryFileToArray(fileId, numberOfColumns)
%BinaryFileToArray Reads a binary file and fills a matrix column-wise
%   Parameters:
%       fileId; A handler to a file
%       numberOfColumns; number of columns of the resulting matrix

rows = 0;

readResult = fread(fileId, [1, numberOfColumns]);
result = uint8(readResult);
while (size(readResult, 2) > 0)
    rows = rows + 1;
    if(rows > size(result, 1)) result = repmat(result, [2, 1]); end
    result(rows, :) = readResult;
    readResult = fread(fileId, [1, numberOfColumns]);
end

result = result(1:rows, :);

end

