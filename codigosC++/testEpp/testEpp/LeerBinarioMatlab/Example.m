%% Ejemplo de uso de FromControlCenter.
% IMPORTANTE: ./private/BinaryFileToArray debe estar la carpeta del script.

% Mostrar en hexadeximal
% previousFormat = get(0, 'format');
%format 'hex';

% Importar y mostrar datos %

% uint16p32 representa n�meros de 16 bits SIN signo, rellenados hasta tener
% 32 bits
%a = FromControlCenter('data.txt', 'uint16p32');
% Mostrar primeros 5 n�meros
%display 'Hexadecimal'
%disp(a(1:5))

% Volver al formato de n�mero anterior
%format(previousFormat)

% Mostrar primeros 5 n�meros
%display 'Sin signo'
%disp(a(1:5))

% int16p32 representa n�meros de 16 bits CON signo, rellenados hasta tener
% 32 bits
b = FromControlCenter('myfile2.txt', 'int16');

% Mostrar primeros 5 n�meros
display 'Con signo'
disp(b(1:5))

stairs(b)
