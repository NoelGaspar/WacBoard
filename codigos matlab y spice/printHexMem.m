function P = printHexMem(A)
n=size(A,1);
P=zeros(32,4);
for i=1:n
t1=ascii2bin(A(i,1:4));
t2=ascii2bin(A(i,5:8));
t3=ascii2bin(A(i,9:12));
t4=ascii2bin(A(i,13:16));
P(i,:)=[t1,t2,t3,t4];
end
fid=fopen('../codigosC++/testEpp/testEpp/tex_output.txt','w+');
for i=1:n
fprintf(fid,'%c%c %c%c\n',P(i,:));
end
fclose(fid);

end