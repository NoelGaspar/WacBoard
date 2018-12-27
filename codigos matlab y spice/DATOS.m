%%DATOS
close all;
clear all;
clc

Vicm=0.6:0.1:1.2;
Vocm=0.6:0.1:1.2;

limit_vocm_p=[1.13,1.27,1.425,1.55,1.56,1.56,1.56 ];
limit_vocm_m=[-1.15,-1.28,-1.45,-1.56,-1.56,-1.56,-1.56];
limit_vicm_p=[1.55,1.54,1.54,1.55,1.547,1.56,1.55];
limit_vicm_m=[-1.57,-1.54,-1.55,-1.55,-1.56,-1.57,-1.55];
figure(1)
plot(Vocm,limit_vocm_p,'r');
title('V_{o,max} vs V_{ocm}, \Delta V_{in} > 0');
xlabel('vocm');
ylabel('V_{o,max}');
grid;
figure(2)
plot(Vocm,limit_vocm_m,'r');
title('V_{o,max} vs V_{ocm}, \Delta V_{in} < 0');
xlabel('vocm');
ylabel('V_{o,max}');
grid;
figure(3)
plot(Vicm,limit_vicm_p,'r');
title('V_{o,max} vs V_{icm}, \Delta V_{in} > 0');
xlabel('vicm');
ylabel('V_{o,max}');
grid;
axis([0.6 1.2 0 2]);
figure(4)
plot(Vicm,limit_vicm_m,'r');
title('V_{o,max} vs V_{icm}, \Delta V_{in} < 0');
xlabel('vicm');
ylabel('V_{o,max}');
axis([0.6 1.2 -2 0]);
grid;