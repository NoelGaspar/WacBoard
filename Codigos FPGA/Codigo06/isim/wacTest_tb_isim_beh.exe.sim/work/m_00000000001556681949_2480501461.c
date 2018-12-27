/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Wac/Google Drive/Memoria/Codigos FPGA/Codigo06/adcCtrl2.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {2U, 0U};
static int ng5[] = {31, 0};
static int ng6[] = {32, 0};
static int ng7[] = {28, 0};
static unsigned int ng8[] = {3U, 0U};
static int ng9[] = {15, 0};
static int ng10[] = {2, 0};
static int ng11[] = {14, 0};
static int ng12[] = {3, 0};
static int ng13[] = {13, 0};
static int ng14[] = {4, 0};
static int ng15[] = {12, 0};
static int ng16[] = {5, 0};
static int ng17[] = {11, 0};
static int ng18[] = {6, 0};
static int ng19[] = {10, 0};
static int ng20[] = {7, 0};
static int ng21[] = {9, 0};
static int ng22[] = {8, 0};



static void Initial_46_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(47, ng0);

LAB2:    xsi_set_current_line(48, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3272);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(49, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3432);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);
    xsi_set_current_line(50, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 3752);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3592);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);
    xsi_set_current_line(52, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2952);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 12);

LAB1:    return;
}

static void Always_74_1(char *t0)
{
    char t8[8];
    char t32[8];
    char t39[8];
    char t55[8];
    char t63[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;

LAB0:    t1 = (t0 + 5880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 7936);
    *((int *)t2) = 1;
    t3 = (t0 + 5912);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(75, ng0);

LAB5:    xsi_set_current_line(76, ng0);
    t4 = (t0 + 4712);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 4712);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB17;

LAB14:    if (t20 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t8) = 1;

LAB17:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(111, ng0);

LAB64:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 4232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2232U);
    t6 = *((char **)t5);
    memset(t8, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB68;

LAB65:    if (t20 != 0)
        goto LAB67;

LAB66:    *((unsigned int *)t8) = 1;

LAB68:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB71:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 4072);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB75;

LAB72:    if (t20 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t8) = 1;

LAB75:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB76;

LAB77:    xsi_set_current_line(123, ng0);

LAB80:    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB78:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 3272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB82;

LAB81:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB82;

LAB85:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB84;

LAB83:    *((unsigned int *)t8) = 1;

LAB84:    t10 = (t8 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB86;

LAB87:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 3272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB91;

LAB90:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB91;

LAB94:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB92;

LAB93:    memset(t32, 0, 8);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t10) != 0)
        goto LAB97;

LAB98:    t24 = (t32 + 4);
    t16 = *((unsigned int *)t32);
    t17 = *((unsigned int *)t24);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB99;

LAB100:    memcpy(t63, t32, 8);

LAB101:    t91 = (t63 + 4);
    t61 = *((unsigned int *)t91);
    t64 = (~(t61));
    t65 = *((unsigned int *)t63);
    t66 = (t65 & t64);
    t70 = (t66 != 0);
    if (t70 > 0)
        goto LAB114;

LAB115:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 3272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB121;

LAB118:    if (t20 != 0)
        goto LAB120;

LAB119:    *((unsigned int *)t8) = 1;

LAB121:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB122;

LAB123:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 3272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB129;

LAB126:    if (t20 != 0)
        goto LAB128;

LAB127:    *((unsigned int *)t8) = 1;

LAB129:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB130;

LAB131:    xsi_set_current_line(155, ng0);

LAB134:    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4072);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB132:
LAB124:
LAB116:
LAB88:
LAB20:
LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(77, ng0);

LAB13:    xsi_set_current_line(78, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 8, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4232);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 12, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB16:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(86, ng0);

LAB21:    xsi_set_current_line(87, ng0);
    t23 = ((char*)((ng2)));
    t24 = (t0 + 4392);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 1, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4232);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 12, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 4072);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB25;

LAB22:    if (t20 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t8) = 1;

LAB25:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(96, ng0);

LAB30:    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB28:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 3272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB32;

LAB31:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB32;

LAB35:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB33;

LAB34:    t10 = (t8 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4072);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB38:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 3272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB42;

LAB39:    if (t20 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t8) = 1;

LAB42:    memset(t32, 0, 8);
    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t10) != 0)
        goto LAB45;

LAB46:    t24 = (t32 + 4);
    t34 = *((unsigned int *)t32);
    t35 = (!(t34));
    t36 = *((unsigned int *)t24);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB47;

LAB48:    memcpy(t63, t32, 8);

LAB49:    t91 = (t63 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t63);
    t95 = (t94 & t93);
    t96 = (t95 != 0);
    if (t96 > 0)
        goto LAB61;

LAB62:    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB63:    goto LAB20;

LAB24:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(90, ng0);

LAB29:    xsi_set_current_line(91, ng0);
    t23 = (t0 + 3272);
    t24 = (t23 + 56U);
    t30 = *((char **)t24);
    t31 = ((char*)((ng3)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 32, t30, 8, t31, 32);
    t33 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t33, t32, 0, 0, 8, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t6);
    t15 = (t14 >> 0);
    t16 = (t15 & 1);
    *((unsigned int *)t5) = t16;
    t7 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 1, 0LL);
    goto LAB28;

LAB32:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB34;

LAB33:    *((unsigned int *)t8) = 1;
    goto LAB34;

LAB36:    xsi_set_current_line(102, ng0);
    t23 = ((char*)((ng3)));
    t24 = (t0 + 4072);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 1, 0LL);
    goto LAB38;

LAB41:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB42;

LAB43:    *((unsigned int *)t32) = 1;
    goto LAB46;

LAB45:    t23 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB46;

LAB47:    t30 = (t0 + 3272);
    t31 = (t30 + 56U);
    t33 = *((char **)t31);
    t38 = ((char*)((ng5)));
    memset(t39, 0, 8);
    t40 = (t33 + 4);
    t41 = (t38 + 4);
    t42 = *((unsigned int *)t33);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = *((unsigned int *)t40);
    t46 = *((unsigned int *)t41);
    t47 = (t45 ^ t46);
    t48 = (t44 | t47);
    t49 = *((unsigned int *)t40);
    t50 = *((unsigned int *)t41);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t48 & t52);
    if (t53 != 0)
        goto LAB53;

LAB50:    if (t51 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t39) = 1;

LAB53:    memset(t55, 0, 8);
    t56 = (t39 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t39);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t56) != 0)
        goto LAB56;

LAB57:    t64 = *((unsigned int *)t32);
    t65 = *((unsigned int *)t55);
    t66 = (t64 | t65);
    *((unsigned int *)t63) = t66;
    t67 = (t32 + 4);
    t68 = (t55 + 4);
    t69 = (t63 + 4);
    t70 = *((unsigned int *)t67);
    t71 = *((unsigned int *)t68);
    t72 = (t70 | t71);
    *((unsigned int *)t69) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB58;

LAB59:
LAB60:    goto LAB49;

LAB52:    t54 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB53;

LAB54:    *((unsigned int *)t55) = 1;
    goto LAB57;

LAB56:    t62 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB57;

LAB58:    t75 = *((unsigned int *)t63);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t63) = (t75 | t76);
    t77 = (t32 + 4);
    t78 = (t55 + 4);
    t79 = *((unsigned int *)t77);
    t80 = (~(t79));
    t81 = *((unsigned int *)t32);
    t82 = (t81 & t80);
    t83 = *((unsigned int *)t78);
    t84 = (~(t83));
    t85 = *((unsigned int *)t55);
    t86 = (t85 & t84);
    t87 = (~(t82));
    t88 = (~(t86));
    t89 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t89 & t87);
    t90 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t90 & t88);
    goto LAB60;

LAB61:    xsi_set_current_line(106, ng0);
    t97 = ((char*)((ng3)));
    t98 = (t0 + 3912);
    xsi_vlogvar_wait_assign_value(t98, t97, 0, 0, 1, 0LL);
    goto LAB63;

LAB67:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB68;

LAB69:    xsi_set_current_line(113, ng0);
    t23 = ((char*)((ng3)));
    t24 = (t0 + 4392);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 1, 0LL);
    goto LAB71;

LAB74:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB75;

LAB76:    xsi_set_current_line(118, ng0);

LAB79:    xsi_set_current_line(119, ng0);
    t23 = (t0 + 3272);
    t24 = (t23 + 56U);
    t30 = *((char **)t24);
    t31 = ((char*)((ng3)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 32, t30, 8, t31, 32);
    t33 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t33, t32, 0, 0, 8, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 3272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t6);
    t15 = (t14 >> 0);
    t16 = (t15 & 1);
    *((unsigned int *)t5) = t16;
    t7 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 1, 0LL);
    goto LAB78;

LAB82:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB84;

LAB86:    xsi_set_current_line(129, ng0);

LAB89:    xsi_set_current_line(130, ng0);
    t23 = ((char*)((ng2)));
    t24 = (t0 + 4072);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 1, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB88;

LAB91:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB93;

LAB92:    *((unsigned int *)t8) = 1;
    goto LAB93;

LAB95:    *((unsigned int *)t32) = 1;
    goto LAB98;

LAB97:    t23 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB98;

LAB99:    t30 = (t0 + 3272);
    t31 = (t30 + 56U);
    t33 = *((char **)t31);
    t38 = ((char*)((ng5)));
    memset(t39, 0, 8);
    t40 = (t33 + 4);
    if (*((unsigned int *)t40) != 0)
        goto LAB103;

LAB102:    t41 = (t38 + 4);
    if (*((unsigned int *)t41) != 0)
        goto LAB103;

LAB106:    if (*((unsigned int *)t33) < *((unsigned int *)t38))
        goto LAB104;

LAB105:    memset(t55, 0, 8);
    t56 = (t39 + 4);
    t19 = *((unsigned int *)t56);
    t20 = (~(t19));
    t21 = *((unsigned int *)t39);
    t22 = (t21 & t20);
    t25 = (t22 & 1U);
    if (t25 != 0)
        goto LAB107;

LAB108:    if (*((unsigned int *)t56) != 0)
        goto LAB109;

LAB110:    t26 = *((unsigned int *)t32);
    t27 = *((unsigned int *)t55);
    t28 = (t26 & t27);
    *((unsigned int *)t63) = t28;
    t67 = (t32 + 4);
    t68 = (t55 + 4);
    t69 = (t63 + 4);
    t29 = *((unsigned int *)t67);
    t34 = *((unsigned int *)t68);
    t35 = (t29 | t34);
    *((unsigned int *)t69) = t35;
    t36 = *((unsigned int *)t69);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB111;

LAB112:
LAB113:    goto LAB101;

LAB103:    t54 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB105;

LAB104:    *((unsigned int *)t39) = 1;
    goto LAB105;

LAB107:    *((unsigned int *)t55) = 1;
    goto LAB110;

LAB109:    t62 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB110;

LAB111:    t42 = *((unsigned int *)t63);
    t43 = *((unsigned int *)t69);
    *((unsigned int *)t63) = (t42 | t43);
    t77 = (t32 + 4);
    t78 = (t55 + 4);
    t44 = *((unsigned int *)t32);
    t45 = (~(t44));
    t46 = *((unsigned int *)t77);
    t47 = (~(t46));
    t48 = *((unsigned int *)t55);
    t49 = (~(t48));
    t50 = *((unsigned int *)t78);
    t51 = (~(t50));
    t82 = (t45 & t47);
    t86 = (t49 & t51);
    t52 = (~(t82));
    t53 = (~(t86));
    t57 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t57 & t52);
    t58 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t58 & t53);
    t59 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t59 & t52);
    t60 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t60 & t53);
    goto LAB113;

LAB114:    xsi_set_current_line(135, ng0);

LAB117:    xsi_set_current_line(136, ng0);
    t97 = ((char*)((ng2)));
    t98 = (t0 + 4072);
    xsi_vlogvar_wait_assign_value(t98, t97, 0, 0, 1, 0LL);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB116;

LAB120:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB121;

LAB122:    xsi_set_current_line(142, ng0);

LAB125:    xsi_set_current_line(143, ng0);
    t23 = ((char*)((ng2)));
    t24 = (t0 + 4072);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 1, 0LL);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB124;

LAB128:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB129;

LAB130:    xsi_set_current_line(148, ng0);

LAB133:    xsi_set_current_line(149, ng0);
    t23 = ((char*)((ng3)));
    t24 = (t0 + 4072);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 1, 0LL);
    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 4232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 12, t5, 32);
    t6 = (t0 + 4232);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 12, 0LL);
    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB132;

}

static void Always_165_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 6128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(165, ng0);
    t2 = (t0 + 7952);
    *((int *)t2) = 1;
    t3 = (t0 + 6160);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(166, ng0);
    t4 = (t0 + 4552);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 4712);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    goto LAB2;

}

static void Always_169_3(char *t0)
{
    char t9[8];
    char t25[8];
    char t39[8];
    char t55[8];
    char t63[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    int t87;
    int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;

LAB0:    t1 = (t0 + 6376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(169, ng0);
    t2 = (t0 + 7968);
    *((int *)t2) = 1;
    t3 = (t0 + 6408);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(170, ng0);

LAB5:    xsi_set_current_line(171, ng0);
    t4 = (t0 + 4712);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 4552);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 4712);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4552);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(174, ng0);

LAB16:    xsi_set_current_line(175, ng0);
    t6 = (t0 + 1752U);
    t7 = *((char **)t6);
    t6 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t10 = (t7 + 4);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t6);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB20;

LAB17:    if (t21 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t9) = 1;

LAB20:    memset(t25, 0, 8);
    t26 = (t9 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t9);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t26) != 0)
        goto LAB23;

LAB24:    t33 = (t25 + 4);
    t34 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t33);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB25;

LAB26:    memcpy(t63, t25, 8);

LAB27:    t95 = (t63 + 4);
    t96 = *((unsigned int *)t95);
    t97 = (~(t96));
    t98 = *((unsigned int *)t63);
    t99 = (t98 & t97);
    t100 = (t99 != 0);
    if (t100 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(176, ng0);
    t2 = (t0 + 1752U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t6);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t6);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB45;

LAB42:    if (t21 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t9) = 1;

LAB45:    memset(t25, 0, 8);
    t10 = (t9 + 4);
    t27 = *((unsigned int *)t10);
    t28 = (~(t27));
    t29 = *((unsigned int *)t9);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t10) != 0)
        goto LAB48;

LAB49:    t24 = (t25 + 4);
    t34 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t24);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB50;

LAB51:    memcpy(t63, t25, 8);

LAB52:    t69 = (t63 + 4);
    t96 = *((unsigned int *)t69);
    t97 = (~(t96));
    t98 = *((unsigned int *)t63);
    t99 = (t98 & t97);
    t100 = (t99 != 0);
    if (t100 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4552);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB66:
LAB41:    goto LAB15;

LAB9:    xsi_set_current_line(180, ng0);

LAB67:    xsi_set_current_line(181, ng0);
    t3 = (t0 + 2552U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (~(t12));
    t14 = *((unsigned int *)t5);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4552);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB70:    goto LAB15;

LAB11:    xsi_set_current_line(185, ng0);

LAB71:    xsi_set_current_line(186, ng0);
    t3 = (t0 + 4392);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB72;

LAB73:    xsi_set_current_line(187, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4552);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB74:    goto LAB15;

LAB19:    t24 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t25) = 1;
    goto LAB24;

LAB23:    t32 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB24;

LAB25:    t37 = (t0 + 2072U);
    t38 = *((char **)t37);
    t37 = ((char*)((ng2)));
    memset(t39, 0, 8);
    t40 = (t38 + 4);
    t41 = (t37 + 4);
    t42 = *((unsigned int *)t38);
    t43 = *((unsigned int *)t37);
    t44 = (t42 ^ t43);
    t45 = *((unsigned int *)t40);
    t46 = *((unsigned int *)t41);
    t47 = (t45 ^ t46);
    t48 = (t44 | t47);
    t49 = *((unsigned int *)t40);
    t50 = *((unsigned int *)t41);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t48 & t52);
    if (t53 != 0)
        goto LAB31;

LAB28:    if (t51 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t39) = 1;

LAB31:    memset(t55, 0, 8);
    t56 = (t39 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t39);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t56) != 0)
        goto LAB34;

LAB35:    t64 = *((unsigned int *)t25);
    t65 = *((unsigned int *)t55);
    t66 = (t64 & t65);
    *((unsigned int *)t63) = t66;
    t67 = (t25 + 4);
    t68 = (t55 + 4);
    t69 = (t63 + 4);
    t70 = *((unsigned int *)t67);
    t71 = *((unsigned int *)t68);
    t72 = (t70 | t71);
    *((unsigned int *)t69) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB36;

LAB37:
LAB38:    goto LAB27;

LAB30:    t54 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB31;

LAB32:    *((unsigned int *)t55) = 1;
    goto LAB35;

LAB34:    t62 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB35;

LAB36:    t75 = *((unsigned int *)t63);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t63) = (t75 | t76);
    t77 = (t25 + 4);
    t78 = (t55 + 4);
    t79 = *((unsigned int *)t25);
    t80 = (~(t79));
    t81 = *((unsigned int *)t77);
    t82 = (~(t81));
    t83 = *((unsigned int *)t55);
    t84 = (~(t83));
    t85 = *((unsigned int *)t78);
    t86 = (~(t85));
    t87 = (t80 & t82);
    t88 = (t84 & t86);
    t89 = (~(t87));
    t90 = (~(t88));
    t91 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t91 & t89);
    t92 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t92 & t90);
    t93 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t93 & t89);
    t94 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t94 & t90);
    goto LAB38;

LAB39:    xsi_set_current_line(175, ng0);
    t101 = ((char*)((ng4)));
    t102 = (t0 + 4552);
    xsi_vlogvar_assign_value(t102, t101, 0, 0, 4);
    goto LAB41;

LAB44:    t7 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB45;

LAB46:    *((unsigned int *)t25) = 1;
    goto LAB49;

LAB48:    t11 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB49;

LAB50:    t26 = (t0 + 2072U);
    t32 = *((char **)t26);
    t26 = ((char*)((ng3)));
    memset(t39, 0, 8);
    t33 = (t32 + 4);
    t37 = (t26 + 4);
    t42 = *((unsigned int *)t32);
    t43 = *((unsigned int *)t26);
    t44 = (t42 ^ t43);
    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t37);
    t47 = (t45 ^ t46);
    t48 = (t44 | t47);
    t49 = *((unsigned int *)t33);
    t50 = *((unsigned int *)t37);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t48 & t52);
    if (t53 != 0)
        goto LAB56;

LAB53:    if (t51 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t39) = 1;

LAB56:    memset(t55, 0, 8);
    t40 = (t39 + 4);
    t57 = *((unsigned int *)t40);
    t58 = (~(t57));
    t59 = *((unsigned int *)t39);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t40) != 0)
        goto LAB59;

LAB60:    t64 = *((unsigned int *)t25);
    t65 = *((unsigned int *)t55);
    t66 = (t64 & t65);
    *((unsigned int *)t63) = t66;
    t54 = (t25 + 4);
    t56 = (t55 + 4);
    t62 = (t63 + 4);
    t70 = *((unsigned int *)t54);
    t71 = *((unsigned int *)t56);
    t72 = (t70 | t71);
    *((unsigned int *)t62) = t72;
    t73 = *((unsigned int *)t62);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB61;

LAB62:
LAB63:    goto LAB52;

LAB55:    t38 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB56;

LAB57:    *((unsigned int *)t55) = 1;
    goto LAB60;

LAB59:    t41 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB60;

LAB61:    t75 = *((unsigned int *)t63);
    t76 = *((unsigned int *)t62);
    *((unsigned int *)t63) = (t75 | t76);
    t67 = (t25 + 4);
    t68 = (t55 + 4);
    t79 = *((unsigned int *)t25);
    t80 = (~(t79));
    t81 = *((unsigned int *)t67);
    t82 = (~(t81));
    t83 = *((unsigned int *)t55);
    t84 = (~(t83));
    t85 = *((unsigned int *)t68);
    t86 = (~(t85));
    t8 = (t80 & t82);
    t87 = (t84 & t86);
    t89 = (~(t8));
    t90 = (~(t87));
    t91 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t91 & t89);
    t92 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t92 & t90);
    t93 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t93 & t89);
    t94 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t94 & t90);
    goto LAB63;

LAB64:    xsi_set_current_line(176, ng0);
    t77 = ((char*)((ng8)));
    t78 = (t0 + 4552);
    xsi_vlogvar_assign_value(t78, t77, 0, 0, 4);
    goto LAB66;

LAB68:    xsi_set_current_line(181, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t0 + 4552);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB70;

LAB72:    xsi_set_current_line(186, ng0);
    t10 = ((char*)((ng1)));
    t11 = (t0 + 4552);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 4);
    goto LAB74;

}

static void Cont_196_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 6624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(196, ng0);
    t2 = (t0 + 3912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8128);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 7984);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_198_5(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    int t18;

LAB0:    t1 = (t0 + 6872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(198, ng0);
    t2 = (t0 + 8000);
    *((int *)t2) = 1;
    t3 = (t0 + 6904);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(199, ng0);

LAB5:    xsi_set_current_line(200, ng0);
    t4 = (t0 + 3432);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng16)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng18)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng20)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng22)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng21)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng19)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB37;

LAB38:
LAB40:
LAB39:    xsi_set_current_line(217, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3592);
    t4 = (t0 + 3592);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t9 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t11, t7, 2, t9, 32, 1);
    t10 = (t11 + 4);
    t17 = *((unsigned int *)t10);
    t8 = (!(t17));
    if (t8 == 1)
        goto LAB90;

LAB91:
LAB41:    goto LAB2;

LAB7:    xsi_set_current_line(201, ng0);

LAB42:    xsi_set_current_line(201, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 3592);
    t12 = (t0 + 3592);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t11, t14, 2, t15, 32, 1);
    t16 = (t11 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB43;

LAB44:    goto LAB41;

LAB9:    xsi_set_current_line(202, ng0);

LAB45:    xsi_set_current_line(202, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3592);
    t5 = (t0 + 3592);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB46;

LAB47:    goto LAB41;

LAB11:    xsi_set_current_line(203, ng0);

LAB48:    xsi_set_current_line(203, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3592);
    t5 = (t0 + 3592);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng13)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB49;

LAB50:    goto LAB41;

LAB13:    xsi_set_current_line(204, ng0);

LAB51:    xsi_set_current_line(204, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    t3 = (t0 + 3592);
    t5 = (t0 + 3592);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng15)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB52;

LAB53:    goto LAB41;

LAB15:    xsi_set_current_line(205, ng0);

LAB54:    xsi_set_current_line(205, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    t3 = (t0 + 3592);
    t5 = (t0 + 3592);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng17)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB55;

LAB56:    goto LAB41;

LAB17:    xsi_set_current_line(206, ng0);

LAB57:    xsi_set_current_line(206, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    t3 = (t0 + 3592);
    t5 = (t0 + 3592);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng19)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB58;

LAB59:    goto LAB41;

LAB19:    xsi_set_current_line(207, ng0);

LAB60:    xsi_set_current_line(207, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    t3 = (t0 + 3592);
    t5 = (t0 + 3592);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng21)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB61;

LAB62:    goto LAB41;

LAB21:    xsi_set_current_line(208, ng0);

LAB63:    xsi_set_current_line(208, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    t3 = (t0 + 3592);
    t5 = (t0 + 3592);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng22)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB64;

LAB65:    goto LAB41;

LAB23:    xsi_set_current_line(209, ng0);

LAB66:    xsi_set_current_line(209, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    t3 = (t0 + 3592);
    t5 = (t0 + 3592);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng20)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB67;

LAB68:    goto LAB41;

LAB25:    xsi_set_current_line(210, ng0);

LAB69:    xsi_set_current_line(210, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    t3 = (t0 + 3592);
    t5 = (t0 + 3592);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng18)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB70;

LAB71:    goto LAB41;

LAB27:    xsi_set_current_line(211, ng0);

LAB72:    xsi_set_current_line(211, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    t3 = (t0 + 3592);
    t5 = (t0 + 3592);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng16)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB73;

LAB74:    goto LAB41;

LAB29:    xsi_set_current_line(212, ng0);

LAB75:    xsi_set_current_line(212, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    t3 = (t0 + 3592);
    t5 = (t0 + 3592);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng14)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB76;

LAB77:    goto LAB41;

LAB31:    xsi_set_current_line(213, ng0);

LAB78:    xsi_set_current_line(213, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    t3 = (t0 + 3592);
    t5 = (t0 + 3592);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB79;

LAB80:    goto LAB41;

LAB33:    xsi_set_current_line(214, ng0);

LAB81:    xsi_set_current_line(214, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    t3 = (t0 + 3592);
    t5 = (t0 + 3592);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng10)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB82;

LAB83:    goto LAB41;

LAB35:    xsi_set_current_line(215, ng0);

LAB84:    xsi_set_current_line(215, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    t3 = (t0 + 3592);
    t5 = (t0 + 3592);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB85;

LAB86:    goto LAB41;

LAB37:    xsi_set_current_line(216, ng0);

LAB87:    xsi_set_current_line(216, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3592);
    t5 = (t0 + 3592);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB88;

LAB89:    goto LAB41;

LAB43:    xsi_vlogvar_wait_assign_value(t10, t9, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB44;

LAB46:    xsi_vlogvar_wait_assign_value(t4, t3, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB47;

LAB49:    xsi_vlogvar_wait_assign_value(t4, t3, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB50;

LAB52:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB53;

LAB55:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB56;

LAB58:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB59;

LAB61:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB62;

LAB64:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB65;

LAB67:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB68;

LAB70:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB71;

LAB73:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB74;

LAB76:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB77;

LAB79:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB80;

LAB82:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB83;

LAB85:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB86;

LAB88:    xsi_vlogvar_wait_assign_value(t4, t3, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB89;

LAB90:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB91;

}

static void Always_223_6(char *t0)
{
    char t8[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;

LAB0:    t1 = (t0 + 7120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(223, ng0);
    t2 = (t0 + 8016);
    *((int *)t2) = 1;
    t3 = (t0 + 7152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(224, ng0);

LAB5:    xsi_set_current_line(225, ng0);
    t4 = (t0 + 4712);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(226, ng0);
    t2 = (t0 + 4712);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB16;

LAB13:    if (t20 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t8) = 1;

LAB16:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(227, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB19:
LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(225, ng0);
    t30 = (t0 + 3432);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng3)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 32, t32, 4, t33, 32);
    t35 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t35, t34, 0, 0, 4, 0LL);
    goto LAB12;

LAB15:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(226, ng0);
    t23 = (t0 + 3432);
    t24 = (t23 + 56U);
    t30 = *((char **)t24);
    t31 = ((char*)((ng3)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 32, t30, 4, t31, 32);
    t32 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t32, t34, 0, 0, 4, 0LL);
    goto LAB19;

}

static void Always_230_7(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 7368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(230, ng0);
    t2 = (t0 + 8032);
    *((int *)t2) = 1;
    t3 = (t0 + 7400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(231, ng0);

LAB5:    xsi_set_current_line(232, ng0);
    t5 = (t0 + 3592);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 1);
    *((unsigned int *)t4) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 4095U);
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 4095U);
    t16 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t16, t4, 0, 0, 12, 0LL);
    goto LAB2;

}

static void Cont_235_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 7616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(235, ng0);
    t2 = (t0 + 3752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8192);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 8048);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000001556681949_2480501461_init()
{
	static char *pe[] = {(void *)Initial_46_0,(void *)Always_74_1,(void *)Always_165_2,(void *)Always_169_3,(void *)Cont_196_4,(void *)Always_198_5,(void *)Always_223_6,(void *)Always_230_7,(void *)Cont_235_8};
	xsi_register_didat("work_m_00000000001556681949_2480501461", "isim/wacTest_tb_isim_beh.exe.sim/work/m_00000000001556681949_2480501461.didat");
	xsi_register_executes(pe);
}
