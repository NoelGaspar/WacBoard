close all;
clear all;
clc;

M=csvread('./Scope03/scope_8.csv',2,0);
t=M(:,1);
p=M(:,6);
trigger=M(:,5);
figure(1)
plot(t,p);
title('W\_fcn F_2(z), CSBx!=cte, \Delta Vin = 0.375V')
ylabel('\Delta V_{out} [V]');
xlabel('t [s]');
grid;
% axis([0 15e-7 -1 1.5]);%para 0
axis([-0.2e-5 14e-5 -1 0.6]);%para 6
% axis([-0.2e-6 1.5e-6 -0.1 .5]);%para 3




% K=-4;
% N=size(t,1);
% pulso=zeros(N,1);
% pulso2=zeros(N,1);
% pp=zeros(N,1);
% 
% for i=1:N
%  if(40+i<N)   
%     pp(i)=sum(p(i:40+i))/40;
%  end
% end
% 
% for i=1:size(t,1)
%     aux=floor(i/40);
%     if(mod(aux,2) ==0)
%         pulso(i)=1;
%     end
% end
% 
% 
% for i=1:size(t,1)
%    if(i-K>0 && i-K<size(t,1))
%        pulso2(i)=pulso(i-K);
%    end
% end
% 
% % plot(t,pp,'Color','b');hold on;
% % p0lot(t, pulso2, 'Color', 'r'); hold off;
% % sn=pulso2.*p;
% % figure(2)
% % plot(t, sn);
    