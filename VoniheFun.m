function result = VoniheFun(v0)
%UNTITLED2 此处显示有关此函数的摘要
%   此处显示详细说明
    src=xlsread('E:\MATLAB\stffness.xlsx');
    num=src(:,1:1);
    pos=src(:,2:2);
    torque=src(:,3:3);
%     syms v0 p0 degree kv p1 p2 kt t k e;
    degree=pos';
    y=-torque';
    kv=107.8;kt=706*17.75e-3;p0=0.101325;%v0=21195*1.5
    p1=v0*p0./(v0-degree.*kv);
    p2=v0*p0./(v0+degree.*kv);
    result=kt.*(p1-p2)-y;
end

