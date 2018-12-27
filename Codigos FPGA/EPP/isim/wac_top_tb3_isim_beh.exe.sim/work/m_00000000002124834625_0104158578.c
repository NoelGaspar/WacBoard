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

/* This file is designed for use with ISim build 0xc3576ebc */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Wac/Desktop/1_2014/Memoria/Codigos FPGA/EPP/Digipot_ctrl.v";
static unsigned int ng1[] = {2U, 0U};
static unsigned int ng2[] = {240U, 0U};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {0, 0};
static int ng6[] = {2, 0};
static int ng7[] = {34, 0};
static int ng8[] = {36, 0};
static int ng9[] = {3, 0};
static int ng10[] = {4, 0};
static int ng11[] = {5, 0};
static int ng12[] = {6, 0};
static int ng13[] = {7, 0};
static int ng14[] = {8, 0};



static void Always_42_0(char *t0)
{
    char t4[8];
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 4288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 6096);
    *((int *)t2) = 1;
    t3 = (t0 + 4320);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);
    t5 = (t0 + 1368U);
    t6 = *((char **)t5);
    t5 = (t0 + 3368);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    memset(t7, 0, 8);
    t10 = (t7 + 4);
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 0);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 3U);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 3U);
    xsi_vlogtype_concat(t4, 3, 3, 2U, t7, 2, t6, 1);
    t18 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t18, t4, 0, 0, 3, 0LL);
    goto LAB2;

}

static void NetDecl_44_1(char *t0)
{
    char t3[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;

LAB0:    t1 = (t0 + 4536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 1);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 3U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 3U);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t16 = (t3 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB7;

LAB4:    if (t27 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t15) = 1;

LAB7:    t31 = (t0 + 6256);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t35, 0, 8);
    t36 = 1U;
    t37 = t36;
    t38 = (t15 + 4);
    t39 = *((unsigned int *)t15);
    t36 = (t36 & t39);
    t40 = *((unsigned int *)t38);
    t37 = (t37 & t40);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t42 | t36);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t43 | t37);
    xsi_driver_vfirst_trans(t31, 0, 0U);
    t44 = (t0 + 6112);
    *((int *)t44) = 1;

LAB1:    return;
LAB6:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB7;

}

static void Initial_47_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(48, ng0);

LAB2:    xsi_set_current_line(49, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(50, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(51, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_58_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 6128);
    *((int *)t2) = 1;
    t3 = (t0 + 5064);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(59, ng0);

LAB5:    xsi_set_current_line(60, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(64, ng0);

LAB19:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(61, ng0);

LAB16:    xsi_set_current_line(61, ng0);
    t7 = (t0 + 3208);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 2248);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB15;

LAB9:    xsi_set_current_line(62, ng0);

LAB17:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB15;

LAB11:    xsi_set_current_line(63, ng0);

LAB18:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 1);
    goto LAB15;

}

static void Always_73_4(char *t0)
{
    char t8[8];
    char t22[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;

LAB0:    t1 = (t0 + 5280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 6144);
    *((int *)t2) = 1;
    t3 = (t0 + 5312);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(74, ng0);

LAB5:    xsi_set_current_line(75, ng0);
    t4 = (t0 + 2888);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng7)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB7;

LAB6:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t6) < *((unsigned int *)t7))
        goto LAB8;

LAB9:    t12 = (t8 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB24;

LAB23:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB24;

LAB27:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB26;

LAB25:    *((unsigned int *)t8) = 1;

LAB26:    t10 = (t8 + 4);
    t13 = *((unsigned int *)t10);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB28;

LAB29:
LAB30:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t8, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t2);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t24 = (t16 ^ t17);
    t25 = (t15 | t24);
    t26 = *((unsigned int *)t4);
    t27 = *((unsigned int *)t5);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB34;

LAB31:    if (t28 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t8) = 1;

LAB34:    t7 = (t8 + 4);
    t31 = *((unsigned int *)t7);
    t32 = (~(t31));
    t33 = *((unsigned int *)t8);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB35;

LAB36:
LAB37:    goto LAB2;

LAB7:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t8) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(76, ng0);

LAB14:    xsi_set_current_line(77, ng0);
    t18 = (t0 + 2888);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng4)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 32, t20, 8, t21, 32);
    t23 = (t0 + 2888);
    xsi_vlogvar_assign_value(t23, t22, 0, 0, 8);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB16;

LAB15:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB18;

LAB17:    *((unsigned int *)t8) = 1;

LAB18:    t10 = (t8 + 4);
    t13 = *((unsigned int *)t10);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB20;

LAB21:
LAB22:    goto LAB13;

LAB16:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB18;

LAB20:    xsi_set_current_line(79, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 3208);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    goto LAB22;

LAB24:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB26;

LAB28:    xsi_set_current_line(81, ng0);
    t11 = ((char*)((ng8)));
    t12 = (t0 + 2888);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 8);
    goto LAB30;

LAB33:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB34;

LAB35:    xsi_set_current_line(83, ng0);

LAB38:    xsi_set_current_line(84, ng0);
    t9 = ((char*)((ng5)));
    t10 = (t0 + 2888);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 8);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB37;

}

static void Cont_89_5(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 5528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 6320);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 6160);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_91_6(char *t0)
{
    char t11[8];
    char t20[8];
    char t27[8];
    char t34[8];
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
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;

LAB0:    t1 = (t0 + 5776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 6176);
    *((int *)t2) = 1;
    t3 = (t0 + 5808);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(92, ng0);

LAB5:    xsi_set_current_line(93, ng0);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t7, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 32);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 32);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 32);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 32);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 32);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 32);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 32);
    if (t8 == 1)
        goto LAB23;

LAB24:
LAB26:
LAB25:    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB27:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 8, t5, 32);
    t7 = (t0 + 3048);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 8);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng14)));
    memset(t11, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB38;

LAB37:    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB38;

LAB41:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB40;

LAB39:    *((unsigned int *)t11) = 1;

LAB40:    memset(t20, 0, 8);
    t12 = (t11 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t11);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t12) != 0)
        goto LAB44;

LAB45:    t21 = (t20 + 4);
    t18 = *((unsigned int *)t20);
    t22 = (!(t18));
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB46;

LAB47:    memcpy(t34, t20, 8);

LAB48:    t61 = (t34 + 4);
    t62 = *((unsigned int *)t61);
    t63 = (~(t62));
    t64 = *((unsigned int *)t34);
    t65 = (t64 & t63);
    t66 = (t65 != 0);
    if (t66 > 0)
        goto LAB56;

LAB57:
LAB58:    goto LAB2;

LAB7:    xsi_set_current_line(94, ng0);

LAB28:    xsi_set_current_line(94, ng0);
    t9 = (t0 + 1528U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    t9 = (t11 + 4);
    t12 = (t10 + 4);
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 7);
    t15 = (t14 & 1);
    *((unsigned int *)t11) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 7);
    t18 = (t17 & 1);
    *((unsigned int *)t9) = t18;
    t19 = (t0 + 2728);
    xsi_vlogvar_assign_value(t19, t11, 0, 0, 1);
    goto LAB27;

LAB9:    xsi_set_current_line(95, ng0);

LAB29:    xsi_set_current_line(95, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t5 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 6);
    t15 = (t14 & 1);
    *((unsigned int *)t11) = t15;
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 6);
    t18 = (t17 & 1);
    *((unsigned int *)t3) = t18;
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 1);
    goto LAB27;

LAB11:    xsi_set_current_line(96, ng0);

LAB30:    xsi_set_current_line(96, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t5 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 5);
    t15 = (t14 & 1);
    *((unsigned int *)t11) = t15;
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 5);
    t18 = (t17 & 1);
    *((unsigned int *)t3) = t18;
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 1);
    goto LAB27;

LAB13:    xsi_set_current_line(97, ng0);

LAB31:    xsi_set_current_line(97, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t5 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 4);
    t15 = (t14 & 1);
    *((unsigned int *)t11) = t15;
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 4);
    t18 = (t17 & 1);
    *((unsigned int *)t3) = t18;
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 1);
    goto LAB27;

LAB15:    xsi_set_current_line(98, ng0);

LAB32:    xsi_set_current_line(98, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t5 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 3);
    t15 = (t14 & 1);
    *((unsigned int *)t11) = t15;
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 3);
    t18 = (t17 & 1);
    *((unsigned int *)t3) = t18;
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 1);
    goto LAB27;

LAB17:    xsi_set_current_line(99, ng0);

LAB33:    xsi_set_current_line(99, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t5 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 2);
    t15 = (t14 & 1);
    *((unsigned int *)t11) = t15;
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 2);
    t18 = (t17 & 1);
    *((unsigned int *)t3) = t18;
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 1);
    goto LAB27;

LAB19:    xsi_set_current_line(100, ng0);

LAB34:    xsi_set_current_line(100, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t5 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 1);
    t15 = (t14 & 1);
    *((unsigned int *)t11) = t15;
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 1);
    t18 = (t17 & 1);
    *((unsigned int *)t3) = t18;
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 1);
    goto LAB27;

LAB21:    xsi_set_current_line(101, ng0);

LAB35:    xsi_set_current_line(101, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t5 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 0);
    t15 = (t14 & 1);
    *((unsigned int *)t11) = t15;
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t3) = t18;
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 1);
    goto LAB27;

LAB23:    xsi_set_current_line(102, ng0);

LAB36:    xsi_set_current_line(102, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB27;

LAB38:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB40;

LAB42:    *((unsigned int *)t20) = 1;
    goto LAB45;

LAB44:    t19 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB45;

LAB46:    t25 = (t0 + 1848U);
    t26 = *((char **)t25);
    memset(t27, 0, 8);
    t25 = (t26 + 4);
    t28 = *((unsigned int *)t25);
    t29 = (~(t28));
    t30 = *((unsigned int *)t26);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t25) != 0)
        goto LAB51;

LAB52:    t35 = *((unsigned int *)t20);
    t36 = *((unsigned int *)t27);
    t37 = (t35 | t36);
    *((unsigned int *)t34) = t37;
    t38 = (t20 + 4);
    t39 = (t27 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB53;

LAB54:
LAB55:    goto LAB48;

LAB49:    *((unsigned int *)t27) = 1;
    goto LAB52;

LAB51:    t33 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB52;

LAB53:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t20 + 4);
    t49 = (t27 + 4);
    t50 = *((unsigned int *)t48);
    t51 = (~(t50));
    t52 = *((unsigned int *)t20);
    t8 = (t52 & t51);
    t53 = *((unsigned int *)t49);
    t54 = (~(t53));
    t55 = *((unsigned int *)t27);
    t56 = (t55 & t54);
    t57 = (~(t8));
    t58 = (~(t56));
    t59 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t59 & t57);
    t60 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t60 & t58);
    goto LAB55;

LAB56:    xsi_set_current_line(107, ng0);
    t67 = ((char*)((ng5)));
    t68 = (t0 + 3048);
    xsi_vlogvar_assign_value(t68, t67, 0, 0, 8);
    goto LAB58;

}


extern void work_m_00000000002124834625_0104158578_init()
{
	static char *pe[] = {(void *)Always_42_0,(void *)NetDecl_44_1,(void *)Initial_47_2,(void *)Always_58_3,(void *)Always_73_4,(void *)Cont_89_5,(void *)Always_91_6};
	xsi_register_didat("work_m_00000000002124834625_0104158578", "isim/wac_top_tb3_isim_beh.exe.sim/work/m_00000000002124834625_0104158578.didat");
	xsi_register_executes(pe);
}
