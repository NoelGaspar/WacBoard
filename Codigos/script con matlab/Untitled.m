fileX=fopen('script2.scr','w');
for i=1:50;
    aux=i+50;
    fprintf(fileX,'name p$%d', aux);
    fprintf(fileX,' B%d',i);
    fprintf(fileX,';\n');
end
fclose(fileX);