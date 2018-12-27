close all;
clear all;
clc;


val=0;          %variable para el valor
time=0;       %variable para el tiempo que tendra ese valor
ptr=1;          %puntero para indicar desde cuando tendra ese valor
k=0;            %indice para indicar que columna estamos trabajando
A=zeros(32,16); %variable con los datos

fid=fopen('test.txt','r');
tline=fgets(fid);               %vemos para q indice estamos trabajando
while ischar(tline)
posc=find(tline==';');    
k=str2num(tline(3:posc-1));          
tline=fgets(fid);   %vemos q valor
while (~strcmp(tline(1:3),'end'))
    val=str2num(tline(3));
    tline=fgets(fid);               %vemos por cuanto tiempo
    posc=find(tline==';');          
    time=str2num(tline(2:posc-1));
    
    for i=ptr:ptr+time-1
        if(i>33)
            break;
        end
        A(i,k)=val;
    end
        ptr=ptr+time;
        if(ptr>33)
            break;
        end
    tline=fgets(fid); 
end
ptr=1;
tline=fgets(fid);
end

fclose(fid);
fid_out=fopen('exit.list','w');
fprintf(fid_out,'%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n',A');
fclose(fid_out);
printHexMem(A);