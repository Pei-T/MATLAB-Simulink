clc;clear;
%v0通过拟合，最合适的是1.95e4
v=21195;
src=xlsread('E:\MATLAB\stffness.xlsx');
num=src(:,1:1);
pos=src(:,2:2);
torque=src(:,3:3);
degree=pos';
y=-torque';
kv=107.8;kt=706*17.75e-3;p0=0.101325;%v0=21195*1.5
% p1=v0*p0/(v0-degree*kv);
% p2=v0*p0/(v0+degree*kv);
% fun = @(r)exp(-d*r)-y;
fun=@(v0)kt*(v0*p0./(v0-degree.*kv)-v0*p0./(v0+degree.*kv))-y;
[result]=lsqnonlin(fun,v);
plot(degree,y,degree,kt*(result*p0./(result-degree*kv)-result*p0./(result+degree*kv)),degree,kt*(21195*p0./(21195-degree*kv)-21195*p0./(21195+degree*kv)),'g');