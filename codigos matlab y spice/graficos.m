close all
clear all
clc

fileID=fopen('prueba.txt');
c=textscan(fileID,'%s');
n=size(c{1},1);
g=c{1,1};
for i=1:n
    b(i)=str2num(cell2mat(g(i)));
end

figure(1)
plot(b)
title('adc02 rampa 20Kh 1.8vpp');
xlabel('n Samples');
ylabel('amplitud[bites]');
 axis([0 50 -0.4e4 0.6e4]);
fclose(fileID);