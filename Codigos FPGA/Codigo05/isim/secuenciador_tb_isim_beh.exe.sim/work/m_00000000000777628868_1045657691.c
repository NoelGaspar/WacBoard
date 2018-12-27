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
static const char *ng0 = "C:/Users/lenovo/Desktop/temp/Memoria/Codigos FPGA/Codigo05/secuenciador.v";
static const char *ng1 = "memory_mod6.list";
static const char *ng2 = "memory_mod2.list";
static const char *ng3 = "memory_mod2_2.list";
static int ng4[] = {1, 0};
static unsigned int ng5[] = {127U, 0U};
static int ng6[] = {0, 0};
static unsigned int ng7[] = {63U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {2U, 0U};
static unsigned int ng10[] = {1U, 0U};



static void Initial_38_0(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(39, ng0);

LAB2:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 2408);
    xsi_vlogfile_readmemb(ng1, 0, t1, 0, 0, 0, 0);
    xsi_set_current_line(41, ng0);
    t1 = (t0 + 2568);
    xsi_vlogfile_readmemb(ng2, 0, t1, 0, 0, 0, 0);
    xsi_set_current_line(42, ng0);
    t1 = (t0 + 2728);
    xsi_vlogfile_readmemb(ng3, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Always_50_1(char *t0)
{
    char t6[8];
    char t32[8];
    char t46[8];
    char t48[8];
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
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t47;
    unsigned int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;

LAB0:    t1 = (t0 + 4536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 5352);
    *((int *)t2) = 1;
    t3 = (t0 + 4568);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(51, ng0);

LAB5:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
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

LAB11:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(53, ng0);

LAB13:    xsi_set_current_line(54, ng0);
    t28 = (t0 + 3048);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng5)));
    memset(t32, 0, 8);
    t33 = (t30 + 4);
    if (*((unsigned int *)t33) != 0)
        goto LAB15;

LAB14:    t34 = (t31 + 4);
    if (*((unsigned int *)t34) != 0)
        goto LAB15;

LAB18:    if (*((unsigned int *)t30) < *((unsigned int *)t31))
        goto LAB16;

LAB17:    t36 = (t32 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (~(t37));
    t39 = *((unsigned int *)t32);
    t40 = (t39 & t38);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(68, ng0);

LAB34:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);

LAB21:    goto LAB12;

LAB15:    t35 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB17;

LAB16:    *((unsigned int *)t32) = 1;
    goto LAB17;

LAB19:    xsi_set_current_line(55, ng0);

LAB22:    xsi_set_current_line(56, ng0);
    t42 = (t0 + 3048);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t45 = ((char*)((ng4)));
    memset(t46, 0, 8);
    xsi_vlog_unsigned_add(t46, 32, t44, 7, t45, 32);
    t47 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t47, t46, 0, 0, 7, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3048);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng6)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t4, t8, 2, t21, 32, 1);
    t22 = ((char*)((ng6)));
    memset(t32, 0, 8);
    t28 = (t6 + 4);
    t29 = (t22 + 4);
    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t22);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t28);
    t13 = *((unsigned int *)t29);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t28);
    t17 = *((unsigned int *)t29);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB26;

LAB23:    if (t18 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t32) = 1;

LAB26:    t31 = (t32 + 4);
    t23 = *((unsigned int *)t31);
    t24 = (~(t23));
    t25 = *((unsigned int *)t32);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(63, ng0);

LAB33:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t32, 0, 8);
    t7 = (t32 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 8);
    *((unsigned int *)t32) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 8);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t13 & 255U);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 255U);
    xsi_vlogtype_concat(t6, 16, 16, 2U, t32, 8, t3, 8);
    t21 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t21, t6, 0, 0, 16, 0LL);

LAB29:    goto LAB21;

LAB25:    t30 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB26;

LAB27:    xsi_set_current_line(58, ng0);

LAB30:    xsi_set_current_line(59, ng0);
    t33 = (t0 + 3368);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t48, 0, 8);
    t36 = (t48 + 4);
    t42 = (t35 + 4);
    t37 = *((unsigned int *)t35);
    t38 = (t37 >> 0);
    *((unsigned int *)t48) = t38;
    t39 = *((unsigned int *)t42);
    t40 = (t39 >> 0);
    *((unsigned int *)t36) = t40;
    t41 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t41 & 255U);
    t49 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t49 & 255U);
    t43 = (t0 + 1528U);
    t44 = *((char **)t43);
    xsi_vlogtype_concat(t46, 16, 16, 2U, t44, 8, t48, 8);
    t43 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t43, t46, 0, 0, 16, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2728);
    t7 = (t0 + 2728);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = (t0 + 2728);
    t28 = (t22 + 64U);
    t29 = *((char **)t28);
    t30 = (t0 + 3048);
    t31 = (t30 + 56U);
    t33 = *((char **)t31);
    memset(t46, 0, 8);
    t34 = (t46 + 4);
    t35 = (t33 + 4);
    t9 = *((unsigned int *)t33);
    t10 = (t9 >> 1);
    *((unsigned int *)t46) = t10;
    t11 = *((unsigned int *)t35);
    t12 = (t11 >> 1);
    *((unsigned int *)t34) = t12;
    t13 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t13 & 63U);
    t14 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t14 & 63U);
    xsi_vlog_generic_convert_array_indices(t6, t32, t21, t29, 2, 1, t46, 6, 2);
    t36 = (t6 + 4);
    t15 = *((unsigned int *)t36);
    t50 = (!(t15));
    t42 = (t32 + 4);
    t16 = *((unsigned int *)t42);
    t51 = (!(t16));
    t52 = (t50 && t51);
    if (t52 == 1)
        goto LAB31;

LAB32:    goto LAB29;

LAB31:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t32);
    t53 = (t17 - t18);
    t54 = (t53 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t32), t54, 0LL);
    goto LAB32;

}

static void Always_79_2(char *t0)
{
    char t6[8];
    char t30[8];
    char t54[8];
    char t55[8];
    char t60[8];
    char t102[8];
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
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t103;

LAB0:    t1 = (t0 + 4784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 5368);
    *((int *)t2) = 1;
    t3 = (t0 + 4816);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(80, ng0);

LAB5:    xsi_set_current_line(81, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng6)));
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
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(82, ng0);

LAB13:    xsi_set_current_line(83, ng0);
    t28 = (t0 + 1208U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng4)));
    memset(t30, 0, 8);
    t31 = (t29 + 4);
    t32 = (t28 + 4);
    t33 = *((unsigned int *)t29);
    t34 = *((unsigned int *)t28);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB17;

LAB14:    if (t42 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t30) = 1;

LAB17:    t46 = (t30 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
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

LAB25:    memset(t30, 0, 8);
    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t8) != 0)
        goto LAB28;

LAB29:    t22 = (t30 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t22);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB30;

LAB31:    memcpy(t60, t30, 8);

LAB32:    t92 = (t60 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t60);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
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
        goto LAB51;

LAB48:    if (t18 != 0)
        goto LAB50;

LAB49:    *((unsigned int *)t6) = 1;

LAB51:    memset(t30, 0, 8);
    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t8) != 0)
        goto LAB54;

LAB55:    t22 = (t30 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t22);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB56;

LAB57:    memcpy(t60, t30, 8);

LAB58:    t92 = (t60 + 4);
    t78 = *((unsigned int *)t92);
    t79 = (~(t78));
    t80 = *((unsigned int *)t60);
    t81 = (t80 & t79);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB71;

LAB72:
LAB73:
LAB46:
LAB20:    goto LAB12;

LAB16:    t45 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(84, ng0);

LAB21:    xsi_set_current_line(85, ng0);
    t52 = ((char*)((ng6)));
    t53 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t53, t52, 0, 0, 6, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2408);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 2408);
    t22 = (t21 + 64U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t6, 16, t4, t8, t28, 2, 1, t29, 32, 1);
    t31 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t31, t6, 0, 0, 16, 0LL);
    goto LAB20;

LAB24:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB25;

LAB26:    *((unsigned int *)t30) = 1;
    goto LAB29;

LAB28:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB29;

LAB30:    t28 = (t0 + 2888);
    t29 = (t28 + 56U);
    t31 = *((char **)t29);
    t32 = ((char*)((ng7)));
    memset(t54, 0, 8);
    t45 = (t31 + 4);
    t46 = (t32 + 4);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = *((unsigned int *)t45);
    t40 = *((unsigned int *)t46);
    t41 = (t39 ^ t40);
    t42 = (t38 | t41);
    t43 = *((unsigned int *)t45);
    t44 = *((unsigned int *)t46);
    t47 = (t43 | t44);
    t48 = (~(t47));
    t49 = (t42 & t48);
    if (t49 != 0)
        goto LAB36;

LAB33:    if (t47 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t54) = 1;

LAB36:    memset(t55, 0, 8);
    t53 = (t54 + 4);
    t50 = *((unsigned int *)t53);
    t51 = (~(t50));
    t56 = *((unsigned int *)t54);
    t57 = (t56 & t51);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t53) != 0)
        goto LAB39;

LAB40:    t61 = *((unsigned int *)t30);
    t62 = *((unsigned int *)t55);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t64 = (t30 + 4);
    t65 = (t55 + 4);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t64);
    t68 = *((unsigned int *)t65);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB41;

LAB42:
LAB43:    goto LAB32;

LAB35:    t52 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB36;

LAB37:    *((unsigned int *)t55) = 1;
    goto LAB40;

LAB39:    t59 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB40;

LAB41:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t60) = (t72 | t73);
    t74 = (t30 + 4);
    t75 = (t55 + 4);
    t76 = *((unsigned int *)t30);
    t77 = (~(t76));
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t55);
    t81 = (~(t80));
    t82 = *((unsigned int *)t75);
    t83 = (~(t82));
    t84 = (t77 & t79);
    t85 = (t81 & t83);
    t86 = (~(t84));
    t87 = (~(t85));
    t88 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t88 & t86);
    t89 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t89 & t87);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    t91 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t91 & t87);
    goto LAB43;

LAB44:    xsi_set_current_line(89, ng0);

LAB47:    xsi_set_current_line(90, ng0);
    t98 = ((char*)((ng7)));
    t99 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t99, t98, 0, 0, 6, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2408);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 2408);
    t22 = (t21 + 64U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t6, 16, t4, t8, t28, 2, 1, t29, 32, 1);
    t31 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t31, t6, 0, 0, 16, 0LL);
    goto LAB46;

LAB50:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB51;

LAB52:    *((unsigned int *)t30) = 1;
    goto LAB55;

LAB54:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB55;

LAB56:    t28 = (t0 + 2888);
    t29 = (t28 + 56U);
    t31 = *((char **)t29);
    t32 = ((char*)((ng7)));
    memset(t54, 0, 8);
    t45 = (t31 + 4);
    if (*((unsigned int *)t45) != 0)
        goto LAB60;

LAB59:    t46 = (t32 + 4);
    if (*((unsigned int *)t46) != 0)
        goto LAB60;

LAB63:    if (*((unsigned int *)t31) < *((unsigned int *)t32))
        goto LAB61;

LAB62:    memset(t55, 0, 8);
    t53 = (t54 + 4);
    t36 = *((unsigned int *)t53);
    t37 = (~(t36));
    t38 = *((unsigned int *)t54);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t53) != 0)
        goto LAB66;

LAB67:    t41 = *((unsigned int *)t30);
    t42 = *((unsigned int *)t55);
    t43 = (t41 & t42);
    *((unsigned int *)t60) = t43;
    t64 = (t30 + 4);
    t65 = (t55 + 4);
    t66 = (t60 + 4);
    t44 = *((unsigned int *)t64);
    t47 = *((unsigned int *)t65);
    t48 = (t44 | t47);
    *((unsigned int *)t66) = t48;
    t49 = *((unsigned int *)t66);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB68;

LAB69:
LAB70:    goto LAB58;

LAB60:    t52 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB62;

LAB61:    *((unsigned int *)t54) = 1;
    goto LAB62;

LAB64:    *((unsigned int *)t55) = 1;
    goto LAB67;

LAB66:    t59 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB67;

LAB68:    t51 = *((unsigned int *)t60);
    t56 = *((unsigned int *)t66);
    *((unsigned int *)t60) = (t51 | t56);
    t74 = (t30 + 4);
    t75 = (t55 + 4);
    t57 = *((unsigned int *)t30);
    t58 = (~(t57));
    t61 = *((unsigned int *)t74);
    t62 = (~(t61));
    t63 = *((unsigned int *)t55);
    t67 = (~(t63));
    t68 = *((unsigned int *)t75);
    t69 = (~(t68));
    t84 = (t58 & t62);
    t85 = (t67 & t69);
    t70 = (~(t84));
    t71 = (~(t85));
    t72 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t72 & t70);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t73 & t71);
    t76 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t76 & t70);
    t77 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t77 & t71);
    goto LAB70;

LAB71:    xsi_set_current_line(94, ng0);

LAB74:    xsi_set_current_line(95, ng0);
    t98 = (t0 + 2888);
    t99 = (t98 + 56U);
    t100 = *((char **)t99);
    t101 = ((char*)((ng4)));
    memset(t102, 0, 8);
    xsi_vlog_unsigned_add(t102, 32, t100, 6, t101, 32);
    t103 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t103, t102, 0, 0, 6, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
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
        goto LAB78;

LAB75:    if (t18 != 0)
        goto LAB77;

LAB76:    *((unsigned int *)t6) = 1;

LAB78:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB79;

LAB80:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
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
        goto LAB86;

LAB83:    if (t18 != 0)
        goto LAB85;

LAB84:    *((unsigned int *)t6) = 1;

LAB86:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB87;

LAB88:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng10)));
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
        goto LAB94;

LAB91:    if (t18 != 0)
        goto LAB93;

LAB92:    *((unsigned int *)t6) = 1;

LAB94:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB95;

LAB96:    xsi_set_current_line(109, ng0);

LAB99:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2408);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 2408);
    t22 = (t21 + 64U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t6, 16, t4, t8, t28, 2, 1, t29, 32, 1);
    t31 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t31, t6, 0, 0, 16, 0LL);

LAB97:
LAB89:
LAB81:    goto LAB73;

LAB77:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB78;

LAB79:    xsi_set_current_line(97, ng0);

LAB82:    xsi_set_current_line(98, ng0);
    t21 = (t0 + 2728);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = (t0 + 2728);
    t31 = (t29 + 72U);
    t32 = *((char **)t31);
    t45 = (t0 + 2728);
    t46 = (t45 + 64U);
    t52 = *((char **)t46);
    t53 = (t0 + 2888);
    t59 = (t53 + 56U);
    t64 = *((char **)t59);
    xsi_vlog_generic_get_array_select_value(t30, 16, t28, t32, t52, 2, 1, t64, 6, 2);
    t65 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t65, t30, 0, 0, 16, 0LL);
    goto LAB81;

LAB85:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB86;

LAB87:    xsi_set_current_line(101, ng0);

LAB90:    xsi_set_current_line(102, ng0);
    t21 = (t0 + 2568);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = (t0 + 2568);
    t31 = (t29 + 72U);
    t32 = *((char **)t31);
    t45 = (t0 + 2568);
    t46 = (t45 + 64U);
    t52 = *((char **)t46);
    t53 = (t0 + 2888);
    t59 = (t53 + 56U);
    t64 = *((char **)t59);
    xsi_vlog_generic_get_array_select_value(t30, 16, t28, t32, t52, 2, 1, t64, 6, 2);
    t65 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t65, t30, 0, 0, 16, 0LL);
    goto LAB89;

LAB93:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB94;

LAB95:    xsi_set_current_line(105, ng0);

LAB98:    xsi_set_current_line(106, ng0);
    t21 = (t0 + 2408);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = (t0 + 2408);
    t31 = (t29 + 72U);
    t32 = *((char **)t31);
    t45 = (t0 + 2408);
    t46 = (t45 + 64U);
    t52 = *((char **)t46);
    t53 = (t0 + 2888);
    t59 = (t53 + 56U);
    t64 = *((char **)t59);
    xsi_vlog_generic_get_array_select_value(t30, 16, t28, t32, t52, 2, 1, t64, 6, 2);
    t65 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t65, t30, 0, 0, 16, 0LL);
    goto LAB97;

}

static void Cont_116_3(char *t0)
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

LAB0:    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5464);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
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
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 5384);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000000777628868_1045657691_init()
{
	static char *pe[] = {(void *)Initial_38_0,(void *)Always_50_1,(void *)Always_79_2,(void *)Cont_116_3};
	xsi_register_didat("work_m_00000000000777628868_1045657691", "isim/secuenciador_tb_isim_beh.exe.sim/work/m_00000000000777628868_1045657691.didat");
	xsi_register_executes(pe);
}