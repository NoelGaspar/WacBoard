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
static const char *ng0 = "C:/Users/Wac/Google Drive/Memoria/Codigos FPGA/Codigo06/Dac_ctrl.v";
static unsigned int ng1[] = {255U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {66, 0};
static int ng5[] = {68, 0};
static int ng6[] = {2, 0};
static int ng7[] = {3, 0};
static int ng8[] = {4, 0};
static int ng9[] = {5, 0};
static int ng10[] = {6, 0};
static int ng11[] = {7, 0};
static int ng12[] = {8, 0};
static int ng13[] = {9, 0};
static int ng14[] = {10, 0};
static int ng15[] = {11, 0};
static int ng16[] = {12, 0};
static int ng17[] = {13, 0};
static int ng18[] = {14, 0};
static int ng19[] = {15, 0};
static int ng20[] = {16, 0};



static void Initial_26_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(27, ng0);

LAB2:    xsi_set_current_line(28, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(29, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(30, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(31, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_40_1(char *t0)
{
    char t6[8];
    char t22[8];
    char t38[8];
    char t42[8];
    char t50[8];
    char t92[8];
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
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    int t74;
    int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t93;

LAB0:    t1 = (t0 + 3576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 4392);
    *((int *)t2) = 1;
    t3 = (t0 + 3608);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
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

LAB9:    memset(t22, 0, 8);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB13:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB14;

LAB15:    memcpy(t50, t22, 8);

LAB16:    t82 = (t50 + 4);
    t83 = *((unsigned int *)t82);
    t84 = (~(t83));
    t85 = *((unsigned int *)t50);
    t86 = (t85 & t84);
    t87 = (t86 != 0);
    if (t87 > 0)
        goto LAB29;

LAB30:
LAB31:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB43;

LAB42:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB43;

LAB46:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB45;

LAB44:    *((unsigned int *)t6) = 1;

LAB45:    t23 = (t6 + 4);
    t9 = *((unsigned int *)t23);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB47;

LAB48:
LAB49:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
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
        goto LAB53;

LAB50:    if (t18 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t6) = 1;

LAB53:    t8 = (t6 + 4);
    t24 = *((unsigned int *)t8);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB54;

LAB55:
LAB56:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t22) = 1;
    goto LAB13;

LAB12:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB13;

LAB14:    t34 = (t0 + 2248);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng4)));
    memset(t38, 0, 8);
    t39 = (t36 + 4);
    if (*((unsigned int *)t39) != 0)
        goto LAB18;

LAB17:    t40 = (t37 + 4);
    if (*((unsigned int *)t40) != 0)
        goto LAB18;

LAB21:    if (*((unsigned int *)t36) > *((unsigned int *)t37))
        goto LAB20;

LAB19:    *((unsigned int *)t38) = 1;

LAB20:    memset(t42, 0, 8);
    t43 = (t38 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (~(t44));
    t46 = *((unsigned int *)t38);
    t47 = (t46 & t45);
    t48 = (t47 & 1U);
    if (t48 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t43) != 0)
        goto LAB24;

LAB25:    t51 = *((unsigned int *)t22);
    t52 = *((unsigned int *)t42);
    t53 = (t51 & t52);
    *((unsigned int *)t50) = t53;
    t54 = (t22 + 4);
    t55 = (t42 + 4);
    t56 = (t50 + 4);
    t57 = *((unsigned int *)t54);
    t58 = *((unsigned int *)t55);
    t59 = (t57 | t58);
    *((unsigned int *)t56) = t59;
    t60 = *((unsigned int *)t56);
    t61 = (t60 != 0);
    if (t61 == 1)
        goto LAB26;

LAB27:
LAB28:    goto LAB16;

LAB18:    t41 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB20;

LAB22:    *((unsigned int *)t42) = 1;
    goto LAB25;

LAB24:    t49 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB25;

LAB26:    t62 = *((unsigned int *)t50);
    t63 = *((unsigned int *)t56);
    *((unsigned int *)t50) = (t62 | t63);
    t64 = (t22 + 4);
    t65 = (t42 + 4);
    t66 = *((unsigned int *)t22);
    t67 = (~(t66));
    t68 = *((unsigned int *)t64);
    t69 = (~(t68));
    t70 = *((unsigned int *)t42);
    t71 = (~(t70));
    t72 = *((unsigned int *)t65);
    t73 = (~(t72));
    t74 = (t67 & t69);
    t75 = (t71 & t73);
    t76 = (~(t74));
    t77 = (~(t75));
    t78 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t78 & t76);
    t79 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t79 & t77);
    t80 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t80 & t76);
    t81 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t81 & t77);
    goto LAB28;

LAB29:    xsi_set_current_line(43, ng0);

LAB32:    xsi_set_current_line(44, ng0);
    t88 = (t0 + 2248);
    t89 = (t88 + 56U);
    t90 = *((char **)t89);
    t91 = ((char*)((ng3)));
    memset(t92, 0, 8);
    xsi_vlog_unsigned_add(t92, 32, t90, 8, t91, 32);
    t93 = (t0 + 2248);
    xsi_vlogvar_assign_value(t93, t92, 0, 0, 8);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB34;

LAB33:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB34;

LAB37:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB36;

LAB35:    *((unsigned int *)t6) = 1;

LAB36:    t23 = (t6 + 4);
    t9 = *((unsigned int *)t23);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB38;

LAB39:
LAB40:    goto LAB31;

LAB34:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB36;

LAB38:    xsi_set_current_line(47, ng0);

LAB41:    xsi_set_current_line(48, ng0);
    t29 = ((char*)((ng3)));
    t30 = (t0 + 1928);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 1);
    goto LAB40;

LAB43:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB45;

LAB47:    xsi_set_current_line(51, ng0);
    t29 = ((char*)((ng5)));
    t30 = (t0 + 2248);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 8);
    goto LAB49;

LAB52:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(53, ng0);

LAB57:    xsi_set_current_line(54, ng0);
    t21 = ((char*)((ng2)));
    t23 = (t0 + 2248);
    xsi_vlogvar_assign_value(t23, t21, 0, 0, 8);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB56;

}

static void Cont_59_2(char *t0)
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

LAB0:    t1 = (t0 + 3824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2248);
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
    t14 = (t0 + 4504);
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
    t27 = (t0 + 4408);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_61_3(char *t0)
{
    char t11[8];
    char t20[8];
    char t27[8];
    char t43[8];
    char t51[8];
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
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;

LAB0:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 4424);
    *((int *)t2) = 1;
    t3 = (t0 + 4104);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(62, ng0);

LAB5:    xsi_set_current_line(63, ng0);
    t4 = (t0 + 2408);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t7, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 32);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 32);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 32);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 32);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 32);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 32);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 32);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 32);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 32);
    if (t8 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 32);
    if (t8 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng16)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 32);
    if (t8 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 32);
    if (t8 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng18)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 32);
    if (t8 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng19)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 32);
    if (t8 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng20)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 32);
    if (t8 == 1)
        goto LAB39;

LAB40:
LAB42:
LAB41:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB43:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 8, t5, 32);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 8);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng20)));
    memset(t11, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB62;

LAB61:    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB62;

LAB65:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB64;

LAB63:    *((unsigned int *)t11) = 1;

LAB64:    memset(t20, 0, 8);
    t12 = (t11 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t11);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t12) != 0)
        goto LAB68;

LAB69:    t21 = (t20 + 4);
    t18 = *((unsigned int *)t20);
    t22 = (!(t18));
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB70;

LAB71:    memcpy(t51, t20, 8);

LAB72:    t78 = (t51 + 4);
    t79 = *((unsigned int *)t78);
    t80 = (~(t79));
    t81 = *((unsigned int *)t51);
    t82 = (t81 & t80);
    t83 = (t82 != 0);
    if (t83 > 0)
        goto LAB84;

LAB85:
LAB86:    goto LAB2;

LAB7:    xsi_set_current_line(64, ng0);

LAB44:    xsi_set_current_line(64, ng0);
    t9 = (t0 + 1368U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    t9 = (t11 + 4);
    t12 = (t10 + 4);
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 15);
    t15 = (t14 & 1);
    *((unsigned int *)t11) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 15);
    t18 = (t17 & 1);
    *((unsigned int *)t9) = t18;
    t19 = (t0 + 2088);
    xsi_vlogvar_assign_value(t19, t11, 0, 0, 1);
    goto LAB43;

LAB9:    xsi_set_current_line(65, ng0);

LAB45:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t5 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 14);
    t15 = (t14 & 1);
    *((unsigned int *)t11) = t15;
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 14);
    t18 = (t17 & 1);
    *((unsigned int *)t3) = t18;
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 1);
    goto LAB43;

LAB11:    xsi_set_current_line(66, ng0);

LAB46:    xsi_set_current_line(66, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t5 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 13);
    t15 = (t14 & 1);
    *((unsigned int *)t11) = t15;
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 13);
    t18 = (t17 & 1);
    *((unsigned int *)t3) = t18;
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 1);
    goto LAB43;

LAB13:    xsi_set_current_line(67, ng0);

LAB47:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t5 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 12);
    t15 = (t14 & 1);
    *((unsigned int *)t11) = t15;
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 12);
    t18 = (t17 & 1);
    *((unsigned int *)t3) = t18;
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 1);
    goto LAB43;

LAB15:    xsi_set_current_line(68, ng0);

LAB48:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t5 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 11);
    t15 = (t14 & 1);
    *((unsigned int *)t11) = t15;
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 11);
    t18 = (t17 & 1);
    *((unsigned int *)t3) = t18;
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 1);
    goto LAB43;

LAB17:    xsi_set_current_line(69, ng0);

LAB49:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t5 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 10);
    t15 = (t14 & 1);
    *((unsigned int *)t11) = t15;
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 10);
    t18 = (t17 & 1);
    *((unsigned int *)t3) = t18;
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 1);
    goto LAB43;

LAB19:    xsi_set_current_line(70, ng0);

LAB50:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t5 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 9);
    t15 = (t14 & 1);
    *((unsigned int *)t11) = t15;
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 9);
    t18 = (t17 & 1);
    *((unsigned int *)t3) = t18;
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 1);
    goto LAB43;

LAB21:    xsi_set_current_line(71, ng0);

LAB51:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t5 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 8);
    t15 = (t14 & 1);
    *((unsigned int *)t11) = t15;
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 8);
    t18 = (t17 & 1);
    *((unsigned int *)t3) = t18;
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 1);
    goto LAB43;

LAB23:    xsi_set_current_line(72, ng0);

LAB52:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t5 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 7);
    t15 = (t14 & 1);
    *((unsigned int *)t11) = t15;
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 7);
    t18 = (t17 & 1);
    *((unsigned int *)t3) = t18;
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 1);
    goto LAB43;

LAB25:    xsi_set_current_line(73, ng0);

LAB53:    xsi_set_current_line(73, ng0);
    t3 = (t0 + 1368U);
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
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 1);
    goto LAB43;

LAB27:    xsi_set_current_line(74, ng0);

LAB54:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 1368U);
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
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 1);
    goto LAB43;

LAB29:    xsi_set_current_line(75, ng0);

LAB55:    xsi_set_current_line(75, ng0);
    t3 = (t0 + 1368U);
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
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 1);
    goto LAB43;

LAB31:    xsi_set_current_line(76, ng0);

LAB56:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 1368U);
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
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 1);
    goto LAB43;

LAB33:    xsi_set_current_line(77, ng0);

LAB57:    xsi_set_current_line(77, ng0);
    t3 = (t0 + 1368U);
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
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 1);
    goto LAB43;

LAB35:    xsi_set_current_line(78, ng0);

LAB58:    xsi_set_current_line(78, ng0);
    t3 = (t0 + 1368U);
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
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 1);
    goto LAB43;

LAB37:    xsi_set_current_line(79, ng0);

LAB59:    xsi_set_current_line(79, ng0);
    t3 = (t0 + 1368U);
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
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 1);
    goto LAB43;

LAB39:    xsi_set_current_line(80, ng0);

LAB60:    xsi_set_current_line(80, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB43;

LAB62:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB64;

LAB66:    *((unsigned int *)t20) = 1;
    goto LAB69;

LAB68:    t19 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB69;

LAB70:    t25 = (t0 + 1208U);
    t26 = *((char **)t25);
    t25 = ((char*)((ng3)));
    memset(t27, 0, 8);
    t28 = (t26 + 4);
    t29 = (t25 + 4);
    t30 = *((unsigned int *)t26);
    t31 = *((unsigned int *)t25);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t28);
    t34 = *((unsigned int *)t29);
    t35 = (t33 ^ t34);
    t36 = (t32 | t35);
    t37 = *((unsigned int *)t28);
    t38 = *((unsigned int *)t29);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB76;

LAB73:    if (t39 != 0)
        goto LAB75;

LAB74:    *((unsigned int *)t27) = 1;

LAB76:    memset(t43, 0, 8);
    t44 = (t27 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (~(t45));
    t47 = *((unsigned int *)t27);
    t48 = (t47 & t46);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t44) != 0)
        goto LAB79;

LAB80:    t52 = *((unsigned int *)t20);
    t53 = *((unsigned int *)t43);
    t54 = (t52 | t53);
    *((unsigned int *)t51) = t54;
    t55 = (t20 + 4);
    t56 = (t43 + 4);
    t57 = (t51 + 4);
    t58 = *((unsigned int *)t55);
    t59 = *((unsigned int *)t56);
    t60 = (t58 | t59);
    *((unsigned int *)t57) = t60;
    t61 = *((unsigned int *)t57);
    t62 = (t61 != 0);
    if (t62 == 1)
        goto LAB81;

LAB82:
LAB83:    goto LAB72;

LAB75:    t42 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB76;

LAB77:    *((unsigned int *)t43) = 1;
    goto LAB80;

LAB79:    t50 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB80;

LAB81:    t63 = *((unsigned int *)t51);
    t64 = *((unsigned int *)t57);
    *((unsigned int *)t51) = (t63 | t64);
    t65 = (t20 + 4);
    t66 = (t43 + 4);
    t67 = *((unsigned int *)t65);
    t68 = (~(t67));
    t69 = *((unsigned int *)t20);
    t8 = (t69 & t68);
    t70 = *((unsigned int *)t66);
    t71 = (~(t70));
    t72 = *((unsigned int *)t43);
    t73 = (t72 & t71);
    t74 = (~(t8));
    t75 = (~(t73));
    t76 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t76 & t74);
    t77 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t77 & t75);
    goto LAB83;

LAB84:    xsi_set_current_line(85, ng0);
    t84 = ((char*)((ng2)));
    t85 = (t0 + 2408);
    xsi_vlogvar_assign_value(t85, t84, 0, 0, 8);
    goto LAB86;

}


extern void work_m_00000000003204068871_1152785275_init()
{
	static char *pe[] = {(void *)Initial_26_0,(void *)Always_40_1,(void *)Cont_59_2,(void *)Always_61_3};
	xsi_register_didat("work_m_00000000003204068871_1152785275", "isim/wacTest_tb_isim_beh.exe.sim/work/m_00000000003204068871_1152785275.didat");
	xsi_register_executes(pe);
}
