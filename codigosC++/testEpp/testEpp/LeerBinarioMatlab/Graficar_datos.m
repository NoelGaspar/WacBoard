clc, clear all, close all

a = FromControlCenter('data.txt', 'uint16p32');
qq = 25;
q1 = qq*24+16+1;
q2 = (qq+1)*24+16;
stem(a(q1:q2))
ylim([ 0 2^(16)])
%ylim([ min(a(1:q)) max(a(1:q)) ])

format 'long';
disp(a)
n = double(max(a(1000:32612)) - min(a(1000:32612)))
n/2^(15)