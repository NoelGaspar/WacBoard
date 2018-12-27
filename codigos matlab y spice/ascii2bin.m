function t=ascii2bin(a)
aux=a(1)*2^3+a(2)*2^2+a(3)*2^1+a(4)*2^0;
if(aux>=10)
       t=aux+87;
else
    t=aux+48;
end
end