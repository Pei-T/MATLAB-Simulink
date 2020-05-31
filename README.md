# MATLAB-Simulink
项目中用到MATLAB和Simulink的地方。平时项目中会大量使用MATLAB&simulink。我将往期代码贴出来，供大家交流。
本文档为文件注释。

MaxonMotorModel.slx Maxon电机动力学模型。用传递函数建立的电机模型，参数来自maxon电机手册。

MaxonStateSpace.slx	Maxon电机动力学模型。用状态空间法建立的电机模型，参数来自maxon电机手册。

V0nihe.m	参数拟合。在 中有一个常量无法直接测量。所以我采用拟合法求得。具体做法是估计一个大概值，然后根据实验数据，拟合出最适合的参数。需要配套函数VoniheFun.m。

VoniheFun.m	V0拟合配套函数

gravityLoad.slx	重力负载，简单常用的负载，验证我的驱动系统。

stiffnessTrace.slx	刚度跟踪系统，可变刚度弹性元件的刚度各种系统。

variableStiffnessJoint.slx	可变刚度弹性关节模型

//variableStiffnessSystem.slx	整个可变刚度系统，包括动力源，负载，和中间连接
