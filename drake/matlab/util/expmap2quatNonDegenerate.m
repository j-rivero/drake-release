function [q,dq,ddq] = expmap2quatNonDegenerate(in1,th)
%EXPMAP2QUATNONDEGENERATE
%    [Q,DQ,DDQ] = EXPMAP2QUATNONDEGENERATE(IN1,TH)

%    This function was generated by the Symbolic Math Toolbox version 6.0.
%    20-Apr-2015 14:11:58

v1 = in1(1,:);
v2 = in1(2,:);
v3 = in1(3,:);
t2 = th.*(1.0./2.0);
t3 = 1.0./th;
t4 = sin(t2);
t5 = v1.^2;
t6 = cos(t2);
q = [t6;t3.*t4.*v1;t3.*t4.*v2;t3.*t4.*v3];
if nargout > 1
    t7 = 1.0./th.^3;
    t8 = t4.*2.0;
    t10 = t6.*th;
    t9 = t8-t10;
    t11 = th.^2;
    t12 = t4.*t11.*2.0;
    t13 = v2.^2;
    t14 = v3.^2;
    t15 = t5.*t6.*th;
    t16 = t12+t15-t4.*t5.*2.0;
    t17 = 1.0./th.^5;
    t18 = t4.*t5.*t11;
    t19 = t5.*t6.*th.*6.0;
    t20 = t4.*t11.*4.0;
    t40 = t6.*t11.*th.*2.0;
    t21 = t18+t19+t20-t40-t4.*t5.*1.2e1;
    t22 = 1.0./th.^4;
    t23 = t9.*t22.*v1.*v2.*(3.0./2.0);
    t24 = 1.0./th.^2;
    t34 = t4.*t24.*v1.*v2.*(1.0./4.0);
    t25 = t23-t34;
    t26 = t6.*th.*6.0;
    t27 = t4.*t11;
    t39 = t4.*1.2e1;
    t28 = t26+t27-t39;
    t29 = t4.*t24.*v1.*v3.*(1.0./4.0);
    t52 = t9.*t22.*v1.*v3.*(3.0./2.0);
    t30 = t29-t52;
    t31 = t7.*t9.*v1.*v2.*(1.0./4.0);
    t32 = t6.*t13.*th;
    t33 = t12+t32-t4.*t13.*2.0;
    t35 = t3.*t25.*v1;
    t47 = t7.*t9.*v2.*(1.0./2.0);
    t36 = t35-t47;
    t37 = t3.*t25.*v2;
    t54 = t7.*t9.*v1.*(1.0./2.0);
    t38 = t37-t54;
    t41 = t4.*t11.*1.2e1;
    t42 = t4.*t11.*t13;
    t43 = t6.*t13.*th.*6.0;
    t44 = t20-t40+t42+t43-t4.*t13.*1.2e1;
    t45 = t4.*t24.*v2.*v3.*(1.0./4.0);
    t55 = t9.*t22.*v2.*v3.*(3.0./2.0);
    t46 = t45-t55;
    t48 = t7.*t9.*v1.*v3.*(1.0./4.0);
    t49 = t7.*t9.*v2.*v3.*(1.0./4.0);
    t50 = t6.*t14.*th;
    t51 = t12+t50-t4.*t14.*2.0;
    dq = reshape([t3.*t4.*v1.*(-1.0./2.0),t7.*t16.*(1.0./2.0),t7.*t9.*v1.*v2.*(-1.0./2.0),t7.*t9.*v1.*v3.*(-1.0./2.0),t3.*t4.*v2.*(-1.0./2.0),t7.*t9.*v1.*v2.*(-1.0./2.0),t7.*t33.*(1.0./2.0),t7.*t9.*v2.*v3.*(-1.0./2.0),t3.*t4.*v3.*(-1.0./2.0),t7.*t9.*v1.*v3.*(-1.0./2.0),t7.*t9.*v2.*v3.*(-1.0./2.0),t7.*t51.*(1.0./2.0)],[4, 3]);
end
if nargout > 2
    t56 = t7.*t9.*v3.*(1.0./2.0);
    t53 = -t56-t3.*t30.*v1;
    t57 = -t47-t3.*t46.*v3;
    t58 = t4.*t11.*t14;
    t59 = t6.*t14.*th.*6.0;
    t61 = t4.*t14.*1.2e1;
    t60 = t20-t40+t58+t59-t61;
    ddq = reshape([t7.*t16.*(-1.0./4.0),t17.*v1.*(t18+t19+t41-t4.*t5.*1.2e1-t6.*t11.*th.*6.0).*(-1.0./4.0),t36,t53,t31,t36,t17.*t44.*v1.*(-1.0./4.0),t17.*t28.*v1.*v2.*v3.*(-1.0./4.0),t48,t53,t17.*t28.*v1.*v2.*v3.*(-1.0./4.0),t17.*t60.*v1.*(-1.0./4.0),t31,t17.*t21.*v2.*(-1.0./4.0),t38,t17.*t28.*v1.*v2.*v3.*(-1.0./4.0),t7.*t33.*(-1.0./4.0),t38,t17.*v2.*(t41+t42+t43-t4.*t13.*1.2e1-t6.*t11.*th.*6.0).*(-1.0./4.0),t7.*t9.*v3.*(-1.0./2.0)-t3.*t46.*v2,t49,t17.*t28.*v1.*v2.*v3.*(-1.0./4.0),-t56-t3.*t46.*v2,t17.*t60.*v2.*(-1.0./4.0),t48,t17.*t21.*v3.*(-1.0./4.0),t17.*t28.*v1.*v2.*v3.*(-1.0./4.0),t7.*t9.*v1.*(-1.0./2.0)-t3.*t30.*v3,t49,t17.*t28.*v1.*v2.*v3.*(-1.0./4.0),t17.*t44.*v3.*(-1.0./4.0),t57,t7.*t51.*(-1.0./4.0),-t54-t3.*t30.*v3,t57,t17.*v3.*(t41+t58+t59-t61-t6.*t11.*th.*6.0).*(-1.0./4.0)],[12, 3]);
end
