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
static const char *ng0 = "C:/Users/Wac/Desktop/1_2014/Memoria/Codigos FPGA/Codigo01/Control.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {128U, 0U};
static unsigned int ng4[] = {59392U, 0U};
static unsigned int ng5[] = {64U, 0U};
static unsigned int ng6[] = {121U, 0U};
static int ng7[] = {2, 0};
static unsigned int ng8[] = {36U, 0U};
static int ng9[] = {3, 0};
static unsigned int ng10[] = {48U, 0U};
static unsigned int ng11[] = {114U, 0U};
static unsigned int ng12[] = {1U, 0U};
static unsigned int ng13[] = {116U, 0U};
static unsigned int ng14[] = {3U, 0U};
static unsigned int ng15[] = {101U, 0U};
static unsigned int ng16[] = {4U, 0U};
static unsigned int ng17[] = {102U, 0U};
static unsigned int ng18[] = {5U, 0U};
static unsigned int ng19[] = {103U, 0U};
static unsigned int ng20[] = {6U, 0U};
static unsigned int ng21[] = {100U, 0U};
static unsigned int ng22[] = {7U, 0U};
static unsigned int ng23[] = {97U, 0U};
static unsigned int ng24[] = {8U, 0U};
static unsigned int ng25[] = {113U, 0U};
static unsigned int ng26[] = {9U, 0U};
static int ng27[] = {68, 0};
static int ng28[] = {36, 0};



static void Initial_41_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(42, ng0);

LAB2:    xsi_set_current_line(43, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);
    xsi_set_current_line(47, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(48, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);
    xsi_set_current_line(49, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 7);
    xsi_set_current_line(50, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);

LAB1:    return;
}

static void Cont_54_1(char *t0)
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

LAB0:    t1 = (t0 + 4376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5568);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 3U;
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
    xsi_driver_vfirst_trans(t5, 0, 1);
    t18 = (t0 + 5440);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_56_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 4624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 5456);
    *((int *)t2) = 1;
    t3 = (t0 + 4656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(57, ng0);

LAB5:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(59, ng0);
    t7 = ((char*)((ng5)));
    t8 = (t0 + 2888);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 7);
    goto LAB15;

LAB9:    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB15;

LAB11:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB15;

LAB13:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB15;

}

static void Always_67_3(char *t0)
{
    char t6[8];
    char t30[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t31;

LAB0:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 5472);
    *((int *)t2) = 1;
    t3 = (t0 + 4904);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(68, ng0);

LAB5:    xsi_set_current_line(69, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng11)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng13)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t6) = 1;

LAB17:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB18;

LAB19:
LAB20:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng15)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB25;

LAB22:    if (t18 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t6) = 1;

LAB25:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB26;

LAB27:
LAB28:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng17)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB33;

LAB30:    if (t18 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t6) = 1;

LAB33:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB34;

LAB35:
LAB36:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng19)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB41;

LAB38:    if (t18 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t6) = 1;

LAB41:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB42;

LAB43:
LAB44:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng21)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB49;

LAB46:    if (t18 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t6) = 1;

LAB49:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB50;

LAB51:
LAB52:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng23)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB57;

LAB54:    if (t18 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t6) = 1;

LAB57:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB58;

LAB59:
LAB60:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng25)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB65;

LAB62:    if (t18 != 0)
        goto LAB64;

LAB63:    *((unsigned int *)t6) = 1;

LAB65:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB66;

LAB67:
LAB68:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(69, ng0);

LAB13:    xsi_set_current_line(69, ng0);
    t28 = ((char*)((ng4)));
    t29 = (t0 + 2248);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 16);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB12;

LAB16:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(70, ng0);

LAB21:    xsi_set_current_line(70, ng0);
    t21 = (t0 + 2248);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng2)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t28, 16, t29, 32);
    t31 = (t0 + 2248);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 16);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB20;

LAB24:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(71, ng0);

LAB29:    xsi_set_current_line(71, ng0);
    t21 = (t0 + 2248);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng2)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_minus(t30, 32, t28, 16, t29, 32);
    t31 = (t0 + 2248);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 16);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB28;

LAB32:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(72, ng0);

LAB37:    xsi_set_current_line(72, ng0);
    t21 = ((char*)((ng3)));
    t22 = (t0 + 2728);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 8);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB36;

LAB40:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB41;

LAB42:    xsi_set_current_line(73, ng0);

LAB45:    xsi_set_current_line(73, ng0);
    t21 = (t0 + 2728);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng2)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t28, 8, t29, 32);
    t31 = (t0 + 2728);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 8);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB44;

LAB48:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(74, ng0);

LAB53:    xsi_set_current_line(74, ng0);
    t21 = (t0 + 2728);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng2)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_minus(t30, 32, t28, 8, t29, 32);
    t31 = (t0 + 2728);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 8);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB52;

LAB56:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB57;

LAB58:    xsi_set_current_line(75, ng0);

LAB61:    xsi_set_current_line(75, ng0);
    t21 = (t0 + 2408);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng2)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t28, 2, t29, 32);
    t31 = (t0 + 2408);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 2);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB60;

LAB64:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB65;

LAB66:    xsi_set_current_line(76, ng0);

LAB69:    xsi_set_current_line(76, ng0);
    t21 = (t0 + 2408);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng2)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_minus(t30, 32, t28, 2, t29, 32);
    t31 = (t0 + 2408);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 2);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB68;

}

static void Always_80_4(char *t0)
{
    char t13[8];
    char t21[8];
    char t25[8];
    char t33[8];
    char t75[8];
    char t89[8];
    char t97[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t98;

LAB0:    t1 = (t0 + 5120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 5488);
    *((int *)t2) = 1;
    t3 = (t0 + 5152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(81, ng0);

LAB5:    xsi_set_current_line(82, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(85, ng0);

LAB9:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t5) != 0)
        goto LAB12;

LAB13:    t12 = (t13 + 4);
    t14 = *((unsigned int *)t13);
    t15 = *((unsigned int *)t12);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB14;

LAB15:    memcpy(t33, t13, 8);

LAB16:    t65 = (t33 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (~(t66));
    t68 = *((unsigned int *)t33);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB29;

LAB30:
LAB31:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB59;

LAB57:    if (*((unsigned int *)t5) == 0)
        goto LAB56;

LAB58:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB59:    memset(t21, 0, 8);
    t12 = (t13 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t27 = (t16 & t15);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t12) != 0)
        goto LAB62;

LAB63:    t18 = (t21 + 4);
    t29 = *((unsigned int *)t21);
    t30 = *((unsigned int *)t18);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB64;

LAB65:    memcpy(t75, t21, 8);

LAB66:    t72 = (t75 + 4);
    t80 = *((unsigned int *)t72);
    t81 = (~(t80));
    t82 = *((unsigned int *)t75);
    t83 = (t82 & t81);
    t84 = (t83 != 0);
    if (t84 > 0)
        goto LAB79;

LAB80:
LAB81:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(83, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 8, 0LL);
    goto LAB8;

LAB10:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB12:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB13;

LAB14:    t17 = (t0 + 3048);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng27)));
    memset(t21, 0, 8);
    t22 = (t19 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB18;

LAB17:    t23 = (t20 + 4);
    if (*((unsigned int *)t23) != 0)
        goto LAB18;

LAB21:    if (*((unsigned int *)t19) > *((unsigned int *)t20))
        goto LAB20;

LAB19:    *((unsigned int *)t21) = 1;

LAB20:    memset(t25, 0, 8);
    t26 = (t21 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t21);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t26) != 0)
        goto LAB24;

LAB25:    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t25);
    t36 = (t34 & t35);
    *((unsigned int *)t33) = t36;
    t37 = (t13 + 4);
    t38 = (t25 + 4);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t37);
    t41 = *((unsigned int *)t38);
    t42 = (t40 | t41);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB26;

LAB27:
LAB28:    goto LAB16;

LAB18:    t24 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB20;

LAB22:    *((unsigned int *)t25) = 1;
    goto LAB25;

LAB24:    t32 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB25;

LAB26:    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t33) = (t45 | t46);
    t47 = (t13 + 4);
    t48 = (t25 + 4);
    t49 = *((unsigned int *)t13);
    t50 = (~(t49));
    t51 = *((unsigned int *)t47);
    t52 = (~(t51));
    t53 = *((unsigned int *)t25);
    t54 = (~(t53));
    t55 = *((unsigned int *)t48);
    t56 = (~(t55));
    t57 = (t50 & t52);
    t58 = (t54 & t56);
    t59 = (~(t57));
    t60 = (~(t58));
    t61 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t61 & t59);
    t62 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t62 & t60);
    t63 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t63 & t59);
    t64 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t64 & t60);
    goto LAB28;

LAB29:    xsi_set_current_line(87, ng0);

LAB32:    xsi_set_current_line(88, ng0);
    t71 = (t0 + 3048);
    t72 = (t71 + 56U);
    t73 = *((char **)t72);
    t74 = ((char*)((ng27)));
    memset(t75, 0, 8);
    t76 = (t73 + 4);
    if (*((unsigned int *)t76) != 0)
        goto LAB34;

LAB33:    t77 = (t74 + 4);
    if (*((unsigned int *)t77) != 0)
        goto LAB34;

LAB37:    if (*((unsigned int *)t73) < *((unsigned int *)t74))
        goto LAB35;

LAB36:    t79 = (t75 + 4);
    t80 = *((unsigned int *)t79);
    t81 = (~(t80));
    t82 = *((unsigned int *)t75);
    t83 = (t82 & t81);
    t84 = (t83 != 0);
    if (t84 > 0)
        goto LAB38;

LAB39:
LAB40:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t27 = *((unsigned int *)t12);
    t28 = (t16 | t27);
    t29 = (~(t28));
    t30 = (t15 & t29);
    if (t30 != 0)
        goto LAB44;

LAB41:    if (t28 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t13) = 1;

LAB44:    t18 = (t13 + 4);
    t31 = *((unsigned int *)t18);
    t34 = (~(t31));
    t35 = *((unsigned int *)t13);
    t36 = (t35 & t34);
    t40 = (t36 != 0);
    if (t40 > 0)
        goto LAB45;

LAB46:
LAB47:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng27)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB49;

LAB48:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB49;

LAB52:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB51;

LAB50:    *((unsigned int *)t13) = 1;

LAB51:    t18 = (t13 + 4);
    t6 = *((unsigned int *)t18);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB53;

LAB54:
LAB55:    goto LAB31;

LAB34:    t78 = (t75 + 4);
    *((unsigned int *)t75) = 1;
    *((unsigned int *)t78) = 1;
    goto LAB36;

LAB35:    *((unsigned int *)t75) = 1;
    goto LAB36;

LAB38:    xsi_set_current_line(89, ng0);
    t85 = (t0 + 3048);
    t86 = (t85 + 56U);
    t87 = *((char **)t86);
    t88 = ((char*)((ng2)));
    memset(t89, 0, 8);
    xsi_vlog_unsigned_add(t89, 32, t87, 8, t88, 32);
    t90 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t90, t89, 0, 0, 8, 0LL);
    goto LAB40;

LAB43:    t17 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB44;

LAB45:    xsi_set_current_line(91, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2088);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 1);
    goto LAB47;

LAB49:    t17 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB51;

LAB53:    xsi_set_current_line(93, ng0);
    t19 = ((char*)((ng2)));
    t20 = (t0 + 2088);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 1);
    goto LAB55;

LAB56:    *((unsigned int *)t13) = 1;
    goto LAB59;

LAB60:    *((unsigned int *)t21) = 1;
    goto LAB63;

LAB62:    t17 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB63;

LAB64:    t19 = (t0 + 3048);
    t20 = (t19 + 56U);
    t22 = *((char **)t20);
    t23 = ((char*)((ng28)));
    memset(t25, 0, 8);
    t24 = (t22 + 4);
    if (*((unsigned int *)t24) != 0)
        goto LAB68;

LAB67:    t26 = (t23 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB68;

LAB71:    if (*((unsigned int *)t22) > *((unsigned int *)t23))
        goto LAB70;

LAB69:    *((unsigned int *)t25) = 1;

LAB70:    memset(t33, 0, 8);
    t37 = (t25 + 4);
    t34 = *((unsigned int *)t37);
    t35 = (~(t34));
    t36 = *((unsigned int *)t25);
    t40 = (t36 & t35);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t37) != 0)
        goto LAB74;

LAB75:    t42 = *((unsigned int *)t21);
    t43 = *((unsigned int *)t33);
    t44 = (t42 & t43);
    *((unsigned int *)t75) = t44;
    t39 = (t21 + 4);
    t47 = (t33 + 4);
    t48 = (t75 + 4);
    t45 = *((unsigned int *)t39);
    t46 = *((unsigned int *)t47);
    t49 = (t45 | t46);
    *((unsigned int *)t48) = t49;
    t50 = *((unsigned int *)t48);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB76;

LAB77:
LAB78:    goto LAB66;

LAB68:    t32 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB70;

LAB72:    *((unsigned int *)t33) = 1;
    goto LAB75;

LAB74:    t38 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB75;

LAB76:    t52 = *((unsigned int *)t75);
    t53 = *((unsigned int *)t48);
    *((unsigned int *)t75) = (t52 | t53);
    t65 = (t21 + 4);
    t71 = (t33 + 4);
    t54 = *((unsigned int *)t21);
    t55 = (~(t54));
    t56 = *((unsigned int *)t65);
    t59 = (~(t56));
    t60 = *((unsigned int *)t33);
    t61 = (~(t60));
    t62 = *((unsigned int *)t71);
    t63 = (~(t62));
    t57 = (t55 & t59);
    t58 = (t61 & t63);
    t64 = (~(t57));
    t66 = (~(t58));
    t67 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t67 & t64);
    t68 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t68 & t66);
    t69 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t69 & t64);
    t70 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t70 & t66);
    goto LAB78;

LAB79:    xsi_set_current_line(96, ng0);

LAB82:    xsi_set_current_line(97, ng0);
    t73 = (t0 + 3048);
    t74 = (t73 + 56U);
    t76 = *((char **)t74);
    t77 = ((char*)((ng28)));
    memset(t89, 0, 8);
    t78 = (t76 + 4);
    if (*((unsigned int *)t78) != 0)
        goto LAB84;

LAB83:    t79 = (t77 + 4);
    if (*((unsigned int *)t79) != 0)
        goto LAB84;

LAB87:    if (*((unsigned int *)t76) < *((unsigned int *)t77))
        goto LAB85;

LAB86:    t86 = (t89 + 4);
    t91 = *((unsigned int *)t86);
    t92 = (~(t91));
    t93 = *((unsigned int *)t89);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB88;

LAB89:
LAB90:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t27 = *((unsigned int *)t12);
    t28 = (t16 | t27);
    t29 = (~(t28));
    t30 = (t15 & t29);
    if (t30 != 0)
        goto LAB94;

LAB91:    if (t28 != 0)
        goto LAB93;

LAB92:    *((unsigned int *)t13) = 1;

LAB94:    t18 = (t13 + 4);
    t31 = *((unsigned int *)t18);
    t34 = (~(t31));
    t35 = *((unsigned int *)t13);
    t36 = (t35 & t34);
    t40 = (t36 != 0);
    if (t40 > 0)
        goto LAB95;

LAB96:
LAB97:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng28)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB99;

LAB98:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB99;

LAB102:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB101;

LAB100:    *((unsigned int *)t13) = 1;

LAB101:    t18 = (t13 + 4);
    t6 = *((unsigned int *)t18);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB103;

LAB104:
LAB105:    goto LAB81;

LAB84:    t85 = (t89 + 4);
    *((unsigned int *)t89) = 1;
    *((unsigned int *)t85) = 1;
    goto LAB86;

LAB85:    *((unsigned int *)t89) = 1;
    goto LAB86;

LAB88:    xsi_set_current_line(98, ng0);
    t87 = (t0 + 3048);
    t88 = (t87 + 56U);
    t90 = *((char **)t88);
    t96 = ((char*)((ng2)));
    memset(t97, 0, 8);
    xsi_vlog_unsigned_add(t97, 32, t90, 8, t96, 32);
    t98 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t98, t97, 0, 0, 8, 0LL);
    goto LAB90;

LAB93:    t17 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB94;

LAB95:    xsi_set_current_line(100, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2568);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 1);
    goto LAB97;

LAB99:    t17 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB101;

LAB103:    xsi_set_current_line(102, ng0);
    t19 = ((char*)((ng2)));
    t20 = (t0 + 2568);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 1);
    goto LAB105;

}


extern void work_m_00000000000391532551_2058220583_init()
{
	static char *pe[] = {(void *)Initial_41_0,(void *)Cont_54_1,(void *)Always_56_2,(void *)Always_67_3,(void *)Always_80_4};
	xsi_register_didat("work_m_00000000000391532551_2058220583", "isim/Control_tb_isim_beh.exe.sim/work/m_00000000000391532551_2058220583.didat");
	xsi_register_executes(pe);
}
