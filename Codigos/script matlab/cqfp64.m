close all
clc

b=6.985;


f=fopen('cqfn.scr','w');
% x=-1*b+0.985;
% y=-1*b-1.2;
% for i=1:16
% fprintf(f,'smd 1.4 x 0.4  R90 (%2.3f %2.3f);\n',x,y);
% x=x+0.8;
% end
% fclose(f);

% x=1*b+1.2;
% y=-1*b+0.985;
% for i=1:16
% fprintf(f,'smd 1.4 x 0.4 (%2.3f %2.3f);\n',x,y);
% y=y+0.8;
% end
% fclose(f);

% x=1*b-0.985;
% y=1*b+1.2;
% for i=1:16
% fprintf(f,'smd 1.4 x 0.4  R90 (%2.3f %2.3f);\n',x,y);
% x=x-0.8;
% end
% fclose(f);

x=-1*b-1.2;
y=1*b-0.985;
for i=1:16
fprintf(f,'smd 1.4 x 0.4 (%2.3f %2.3f);\n',x,y);
y=y-0.8;
end
fclose(f);
