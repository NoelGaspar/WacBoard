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
static const char *ng0 = "C:/Users/Wac/Desktop/1_2014/Memoria/Codigos FPGA/Codigo02/BramComCtrl.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {2U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {7, 0};
static int ng6[] = {0, 0};
static int ng7[] = {11, 0};
static int ng8[] = {8, 0};
static unsigned int ng9[] = {255U, 0U};



static void Always_48_0(char *t0)
{
    char t4[8];
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 7704);
    *((int *)t2) = 1;
    t3 = (t0 + 5184);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);

LAB5:    xsi_set_current_line(50, ng0);
    t5 = (t0 + 1752U);
    t6 = *((char **)t5);
    t5 = (t0 + 3912);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t10 = (t9 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 >> 0);
    t17 = (t16 & 1);
    *((unsigned int *)t10) = t17;
    xsi_vlogtype_concat(t4, 2, 2, 2U, t9, 1, t6, 1);
    t18 = (t0 + 3912);
    xsi_vlogvar_wait_assign_value(t18, t4, 0, 0, 2, 0LL);
    goto LAB2;

}

static void NetDecl_52_1(char *t0)
{
    char t6[8];
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
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 5400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    t22 = (t0 + 7928);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t6 + 4);
    t30 = *((unsigned int *)t6);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0U);
    t35 = (t0 + 7720);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Cont_59_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t15[8];
    char t48[8];
    char t49[8];
    char t50[8];
    char t60[8];
    char t87[8];
    char t103[8];
    char t104[8];
    char t105[8];
    char t116[8];
    char t143[8];
    char t144[8];
    char *t1;
    char *t2;
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
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t145;
    char *t146;
    char *t147;
    char *t148;
    char *t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    char *t162;
    char *t163;
    char *t164;
    char *t165;
    char *t166;
    unsigned int t167;
    unsigned int t168;
    char *t169;
    unsigned int t170;
    unsigned int t171;
    char *t172;
    unsigned int t173;
    unsigned int t174;
    char *t175;

LAB0:    t1 = (t0 + 5648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2232U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 6);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 6);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 3U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 3U);
    t14 = ((char*)((ng2)));
    memset(t15, 0, 8);
    t16 = (t5 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t5);
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

LAB7:    memset(t4, 0, 8);
    t31 = (t15 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t31) != 0)
        goto LAB10;

LAB11:    t38 = (t4 + 4);
    t39 = *((unsigned int *)t4);
    t40 = *((unsigned int *)t38);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB12;

LAB13:    t44 = *((unsigned int *)t4);
    t45 = (~(t44));
    t46 = *((unsigned int *)t38);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t38) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t48, 8);

LAB20:    t162 = (t0 + 7992);
    t163 = (t162 + 56U);
    t164 = *((char **)t163);
    t165 = (t164 + 56U);
    t166 = *((char **)t165);
    memset(t166, 0, 8);
    t167 = 255U;
    t168 = t167;
    t169 = (t3 + 4);
    t170 = *((unsigned int *)t3);
    t167 = (t167 & t170);
    t171 = *((unsigned int *)t169);
    t168 = (t168 & t171);
    t172 = (t166 + 4);
    t173 = *((unsigned int *)t166);
    *((unsigned int *)t166) = (t173 | t167);
    t174 = *((unsigned int *)t172);
    *((unsigned int *)t172) = (t174 | t168);
    xsi_driver_vfirst_trans(t162, 0, 7);
    t175 = (t0 + 7736);
    *((int *)t175) = 1;

LAB1:    return;
LAB6:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t37 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB11;

LAB12:    t42 = (t0 + 2392U);
    t43 = *((char **)t42);
    goto LAB13;

LAB14:    t42 = (t0 + 2232U);
    t51 = *((char **)t42);
    memset(t50, 0, 8);
    t42 = (t50 + 4);
    t52 = (t51 + 4);
    t53 = *((unsigned int *)t51);
    t54 = (t53 >> 6);
    *((unsigned int *)t50) = t54;
    t55 = *((unsigned int *)t52);
    t56 = (t55 >> 6);
    *((unsigned int *)t42) = t56;
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t57 & 3U);
    t58 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t58 & 3U);
    t59 = ((char*)((ng1)));
    memset(t60, 0, 8);
    t61 = (t50 + 4);
    t62 = (t59 + 4);
    t63 = *((unsigned int *)t50);
    t64 = *((unsigned int *)t59);
    t65 = (t63 ^ t64);
    t66 = *((unsigned int *)t61);
    t67 = *((unsigned int *)t62);
    t68 = (t66 ^ t67);
    t69 = (t65 | t68);
    t70 = *((unsigned int *)t61);
    t71 = *((unsigned int *)t62);
    t72 = (t70 | t71);
    t73 = (~(t72));
    t74 = (t69 & t73);
    if (t74 != 0)
        goto LAB24;

LAB21:    if (t72 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t60) = 1;

LAB24:    memset(t49, 0, 8);
    t76 = (t60 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t60);
    t80 = (t79 & t78);
    t81 = (t80 & 1U);
    if (t81 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t76) != 0)
        goto LAB27;

LAB28:    t83 = (t49 + 4);
    t84 = *((unsigned int *)t49);
    t85 = *((unsigned int *)t83);
    t86 = (t84 || t85);
    if (t86 > 0)
        goto LAB29;

LAB30:    t99 = *((unsigned int *)t49);
    t100 = (~(t99));
    t101 = *((unsigned int *)t83);
    t102 = (t100 || t101);
    if (t102 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t83) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t49) > 0)
        goto LAB35;

LAB36:    memcpy(t48, t103, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 8, t43, 8, t48, 8);
    goto LAB20;

LAB18:    memcpy(t3, t43, 8);
    goto LAB20;

LAB23:    t75 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t49) = 1;
    goto LAB28;

LAB27:    t82 = (t49 + 4);
    *((unsigned int *)t49) = 1;
    *((unsigned int *)t82) = 1;
    goto LAB28;

LAB29:    t88 = (t0 + 4072);
    t89 = (t88 + 56U);
    t90 = *((char **)t89);
    memset(t87, 0, 8);
    t91 = (t87 + 4);
    t92 = (t90 + 4);
    t93 = *((unsigned int *)t90);
    t94 = (t93 >> 0);
    *((unsigned int *)t87) = t94;
    t95 = *((unsigned int *)t92);
    t96 = (t95 >> 0);
    *((unsigned int *)t91) = t96;
    t97 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t97 & 255U);
    t98 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t98 & 255U);
    goto LAB30;

LAB31:    t106 = (t0 + 2232U);
    t107 = *((char **)t106);
    memset(t105, 0, 8);
    t106 = (t105 + 4);
    t108 = (t107 + 4);
    t109 = *((unsigned int *)t107);
    t110 = (t109 >> 6);
    *((unsigned int *)t105) = t110;
    t111 = *((unsigned int *)t108);
    t112 = (t111 >> 6);
    *((unsigned int *)t106) = t112;
    t113 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t113 & 3U);
    t114 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t114 & 3U);
    t115 = ((char*)((ng3)));
    memset(t116, 0, 8);
    t117 = (t105 + 4);
    t118 = (t115 + 4);
    t119 = *((unsigned int *)t105);
    t120 = *((unsigned int *)t115);
    t121 = (t119 ^ t120);
    t122 = *((unsigned int *)t117);
    t123 = *((unsigned int *)t118);
    t124 = (t122 ^ t123);
    t125 = (t121 | t124);
    t126 = *((unsigned int *)t117);
    t127 = *((unsigned int *)t118);
    t128 = (t126 | t127);
    t129 = (~(t128));
    t130 = (t125 & t129);
    if (t130 != 0)
        goto LAB41;

LAB38:    if (t128 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t116) = 1;

LAB41:    memset(t104, 0, 8);
    t132 = (t116 + 4);
    t133 = *((unsigned int *)t132);
    t134 = (~(t133));
    t135 = *((unsigned int *)t116);
    t136 = (t135 & t134);
    t137 = (t136 & 1U);
    if (t137 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t132) != 0)
        goto LAB44;

LAB45:    t139 = (t104 + 4);
    t140 = *((unsigned int *)t104);
    t141 = *((unsigned int *)t139);
    t142 = (t140 || t141);
    if (t142 > 0)
        goto LAB46;

LAB47:    t157 = *((unsigned int *)t104);
    t158 = (~(t157));
    t159 = *((unsigned int *)t139);
    t160 = (t158 || t159);
    if (t160 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t139) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t104) > 0)
        goto LAB52;

LAB53:    memcpy(t103, t161, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t48, 8, t87, 8, t103, 8);
    goto LAB37;

LAB35:    memcpy(t48, t87, 8);
    goto LAB37;

LAB40:    t131 = (t116 + 4);
    *((unsigned int *)t116) = 1;
    *((unsigned int *)t131) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t104) = 1;
    goto LAB45;

LAB44:    t138 = (t104 + 4);
    *((unsigned int *)t104) = 1;
    *((unsigned int *)t138) = 1;
    goto LAB45;

LAB46:    t145 = (t0 + 4072);
    t146 = (t145 + 56U);
    t147 = *((char **)t146);
    memset(t144, 0, 8);
    t148 = (t144 + 4);
    t149 = (t147 + 4);
    t150 = *((unsigned int *)t147);
    t151 = (t150 >> 8);
    *((unsigned int *)t144) = t151;
    t152 = *((unsigned int *)t149);
    t153 = (t152 >> 8);
    *((unsigned int *)t148) = t153;
    t154 = *((unsigned int *)t144);
    *((unsigned int *)t144) = (t154 & 15U);
    t155 = *((unsigned int *)t148);
    *((unsigned int *)t148) = (t155 & 15U);
    t156 = ((char*)((ng2)));
    xsi_vlogtype_concat(t143, 8, 8, 2U, t156, 4, t144, 4);
    goto LAB47;

LAB48:    t161 = ((char*)((ng2)));
    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t103, 8, t143, 8, t161, 8);
    goto LAB54;

LAB52:    memcpy(t103, t143, 8);
    goto LAB54;

}

static void Always_64_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 5896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 7752);
    *((int *)t2) = 1;
    t3 = (t0 + 5928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(65, ng0);

LAB5:    xsi_set_current_line(66, ng0);
    t4 = (t0 + 4232);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 4072);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 12, 0LL);
    goto LAB2;

}

static void Always_71_4(char *t0)
{
    char t4[8];
    char t15[8];
    char t37[8];
    char t50[8];
    char t52[8];
    char t53[8];
    char t54[8];
    char t114[8];
    char t115[8];
    char t132[8];
    char *t1;
    char *t2;
    char *t3;
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
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t51;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned int t61;
    int t62;
    char *t63;
    unsigned int t64;
    int t65;
    int t66;
    char *t67;
    unsigned int t68;
    int t69;
    int t70;
    unsigned int t71;
    int t72;
    unsigned int t73;
    unsigned int t74;
    int t75;
    int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t116;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    unsigned int t122;
    char *t123;
    unsigned int t124;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    int t130;
    int t131;
    unsigned int t133;
    char *t134;
    unsigned int t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;

LAB0:    t1 = (t0 + 6144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 7768);
    *((int *)t2) = 1;
    t3 = (t0 + 6176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(72, ng0);

LAB5:    xsi_set_current_line(75, ng0);

LAB6:    xsi_set_current_line(76, ng0);
    t5 = (t0 + 2232U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 6);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 6);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 3U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 3U);
    t14 = ((char*)((ng2)));
    memset(t15, 0, 8);
    t16 = (t4 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t4);
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
        goto LAB10;

LAB7:    if (t27 != 0)
        goto LAB9;

LAB8:    *((unsigned int *)t15) = 1;

LAB10:    t31 = (t15 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t18 = (t10 | t13);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t6);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB25;

LAB22:    if (t21 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t4) = 1;

LAB25:    memset(t15, 0, 8);
    t14 = (t4 + 4);
    t24 = *((unsigned int *)t14);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t14) != 0)
        goto LAB28;

LAB29:    t17 = (t15 + 4);
    t29 = *((unsigned int *)t15);
    t32 = *((unsigned int *)t17);
    t33 = (t29 || t32);
    if (t33 > 0)
        goto LAB30;

LAB31:    memcpy(t53, t15, 8);

LAB32:    t60 = (t53 + 4);
    t109 = *((unsigned int *)t60);
    t110 = (~(t109));
    t111 = *((unsigned int *)t53);
    t112 = (t111 & t110);
    t113 = (t112 != 0);
    if (t113 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t18 = (t10 | t13);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t6);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB53;

LAB50:    if (t21 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t4) = 1;

LAB53:    memset(t15, 0, 8);
    t14 = (t4 + 4);
    t24 = *((unsigned int *)t14);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t14) != 0)
        goto LAB56;

LAB57:    t17 = (t15 + 4);
    t29 = *((unsigned int *)t15);
    t32 = *((unsigned int *)t17);
    t33 = (t29 || t32);
    if (t33 > 0)
        goto LAB58;

LAB59:    memcpy(t53, t15, 8);

LAB60:    t60 = (t53 + 4);
    t109 = *((unsigned int *)t60);
    t110 = (~(t109));
    t111 = *((unsigned int *)t53);
    t112 = (t111 & t110);
    t113 = (t112 != 0);
    if (t113 > 0)
        goto LAB72;

LAB73:
LAB74:
LAB46:
LAB13:    goto LAB2;

LAB9:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(77, ng0);

LAB14:    xsi_set_current_line(78, ng0);
    t38 = (t0 + 4232);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memset(t37, 0, 8);
    t41 = (t37 + 4);
    t42 = (t40 + 4);
    t43 = *((unsigned int *)t40);
    t44 = (t43 >> 0);
    *((unsigned int *)t37) = t44;
    t45 = *((unsigned int *)t42);
    t46 = (t45 >> 0);
    *((unsigned int *)t41) = t46;
    t47 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t47 & 255U);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t48 & 255U);
    t49 = ((char*)((ng4)));
    memset(t50, 0, 8);
    xsi_vlog_unsigned_add(t50, 32, t37, 32, t49, 32);
    t51 = (t0 + 4232);
    t55 = (t0 + 4232);
    t56 = (t55 + 72U);
    t57 = *((char **)t56);
    t58 = ((char*)((ng5)));
    t59 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t52, t53, t54, ((int*)(t57)), 2, t58, 32, 1, t59, 32, 1);
    t60 = (t52 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (!(t61));
    t63 = (t53 + 4);
    t64 = *((unsigned int *)t63);
    t65 = (!(t64));
    t66 = (t62 && t65);
    t67 = (t54 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (!(t68));
    t70 = (t66 && t69);
    if (t70 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3512U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB17;

LAB18:
LAB19:    goto LAB13;

LAB15:    t71 = *((unsigned int *)t54);
    t72 = (t71 + 0);
    t73 = *((unsigned int *)t52);
    t74 = *((unsigned int *)t53);
    t75 = (t73 - t74);
    t76 = (t75 + 1);
    xsi_vlogvar_assign_value(t51, t50, t72, *((unsigned int *)t53), t76);
    goto LAB16;

LAB17:    xsi_set_current_line(80, ng0);
    t5 = (t0 + 4232);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t14 = (t4 + 4);
    t16 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t18 = (t13 >> 8);
    *((unsigned int *)t4) = t18;
    t19 = *((unsigned int *)t16);
    t20 = (t19 >> 8);
    *((unsigned int *)t14) = t20;
    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 15U);
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 15U);
    t17 = ((char*)((ng4)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t4, 32, t17, 32);
    t30 = (t0 + 4232);
    t31 = (t0 + 4232);
    t38 = (t31 + 72U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng7)));
    t41 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t37, t50, t52, ((int*)(t39)), 2, t40, 32, 1, t41, 32, 1);
    t42 = (t37 + 4);
    t23 = *((unsigned int *)t42);
    t62 = (!(t23));
    t49 = (t50 + 4);
    t24 = *((unsigned int *)t49);
    t65 = (!(t24));
    t66 = (t62 && t65);
    t51 = (t52 + 4);
    t25 = *((unsigned int *)t51);
    t69 = (!(t25));
    t70 = (t66 && t69);
    if (t70 == 1)
        goto LAB20;

LAB21:    goto LAB19;

LAB20:    t26 = *((unsigned int *)t52);
    t72 = (t26 + 0);
    t27 = *((unsigned int *)t37);
    t28 = *((unsigned int *)t50);
    t75 = (t27 - t28);
    t76 = (t75 + 1);
    xsi_vlogvar_assign_value(t30, t15, t72, *((unsigned int *)t50), t76);
    goto LAB21;

LAB24:    t7 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB25;

LAB26:    *((unsigned int *)t15) = 1;
    goto LAB29;

LAB28:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB29;

LAB30:    t30 = (t0 + 2232U);
    t31 = *((char **)t30);
    memset(t37, 0, 8);
    t30 = (t37 + 4);
    t38 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 6);
    *((unsigned int *)t37) = t35;
    t36 = *((unsigned int *)t38);
    t43 = (t36 >> 6);
    *((unsigned int *)t30) = t43;
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t44 & 3U);
    t45 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t45 & 3U);
    t39 = ((char*)((ng1)));
    memset(t50, 0, 8);
    t40 = (t37 + 4);
    t41 = (t39 + 4);
    t46 = *((unsigned int *)t37);
    t47 = *((unsigned int *)t39);
    t48 = (t46 ^ t47);
    t61 = *((unsigned int *)t40);
    t64 = *((unsigned int *)t41);
    t68 = (t61 ^ t64);
    t71 = (t48 | t68);
    t73 = *((unsigned int *)t40);
    t74 = *((unsigned int *)t41);
    t77 = (t73 | t74);
    t78 = (~(t77));
    t79 = (t71 & t78);
    if (t79 != 0)
        goto LAB36;

LAB33:    if (t77 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t50) = 1;

LAB36:    memset(t52, 0, 8);
    t49 = (t50 + 4);
    t80 = *((unsigned int *)t49);
    t81 = (~(t80));
    t82 = *((unsigned int *)t50);
    t83 = (t82 & t81);
    t84 = (t83 & 1U);
    if (t84 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t49) != 0)
        goto LAB39;

LAB40:    t85 = *((unsigned int *)t15);
    t86 = *((unsigned int *)t52);
    t87 = (t85 & t86);
    *((unsigned int *)t53) = t87;
    t55 = (t15 + 4);
    t56 = (t52 + 4);
    t57 = (t53 + 4);
    t88 = *((unsigned int *)t55);
    t89 = *((unsigned int *)t56);
    t90 = (t88 | t89);
    *((unsigned int *)t57) = t90;
    t91 = *((unsigned int *)t57);
    t92 = (t91 != 0);
    if (t92 == 1)
        goto LAB41;

LAB42:
LAB43:    goto LAB32;

LAB35:    t42 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB36;

LAB37:    *((unsigned int *)t52) = 1;
    goto LAB40;

LAB39:    t51 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB40;

LAB41:    t93 = *((unsigned int *)t53);
    t94 = *((unsigned int *)t57);
    *((unsigned int *)t53) = (t93 | t94);
    t58 = (t15 + 4);
    t59 = (t52 + 4);
    t95 = *((unsigned int *)t15);
    t96 = (~(t95));
    t97 = *((unsigned int *)t58);
    t98 = (~(t97));
    t99 = *((unsigned int *)t52);
    t100 = (~(t99));
    t101 = *((unsigned int *)t59);
    t102 = (~(t101));
    t62 = (t96 & t98);
    t65 = (t100 & t102);
    t103 = (~(t62));
    t104 = (~(t65));
    t105 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t105 & t103);
    t106 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t106 & t104);
    t107 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t107 & t103);
    t108 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t108 & t104);
    goto LAB43;

LAB44:    xsi_set_current_line(83, ng0);

LAB47:    xsi_set_current_line(84, ng0);
    t63 = (t0 + 2072U);
    t67 = *((char **)t63);
    t63 = (t0 + 4232);
    t116 = (t0 + 4232);
    t117 = (t116 + 72U);
    t118 = *((char **)t117);
    t119 = ((char*)((ng5)));
    t120 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t54, t114, t115, ((int*)(t118)), 2, t119, 32, 1, t120, 32, 1);
    t121 = (t54 + 4);
    t122 = *((unsigned int *)t121);
    t66 = (!(t122));
    t123 = (t114 + 4);
    t124 = *((unsigned int *)t123);
    t69 = (!(t124));
    t70 = (t66 && t69);
    t125 = (t115 + 4);
    t126 = *((unsigned int *)t125);
    t72 = (!(t126));
    t75 = (t70 && t72);
    if (t75 == 1)
        goto LAB48;

LAB49:    goto LAB46;

LAB48:    t127 = *((unsigned int *)t115);
    t76 = (t127 + 0);
    t128 = *((unsigned int *)t54);
    t129 = *((unsigned int *)t114);
    t130 = (t128 - t129);
    t131 = (t130 + 1);
    xsi_vlogvar_assign_value(t63, t67, t76, *((unsigned int *)t114), t131);
    goto LAB49;

LAB52:    t7 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB53;

LAB54:    *((unsigned int *)t15) = 1;
    goto LAB57;

LAB56:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB57;

LAB58:    t30 = (t0 + 2232U);
    t31 = *((char **)t30);
    memset(t37, 0, 8);
    t30 = (t37 + 4);
    t38 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 6);
    *((unsigned int *)t37) = t35;
    t36 = *((unsigned int *)t38);
    t43 = (t36 >> 6);
    *((unsigned int *)t30) = t43;
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t44 & 3U);
    t45 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t45 & 3U);
    t39 = ((char*)((ng3)));
    memset(t50, 0, 8);
    t40 = (t37 + 4);
    t41 = (t39 + 4);
    t46 = *((unsigned int *)t37);
    t47 = *((unsigned int *)t39);
    t48 = (t46 ^ t47);
    t61 = *((unsigned int *)t40);
    t64 = *((unsigned int *)t41);
    t68 = (t61 ^ t64);
    t71 = (t48 | t68);
    t73 = *((unsigned int *)t40);
    t74 = *((unsigned int *)t41);
    t77 = (t73 | t74);
    t78 = (~(t77));
    t79 = (t71 & t78);
    if (t79 != 0)
        goto LAB64;

LAB61:    if (t77 != 0)
        goto LAB63;

LAB62:    *((unsigned int *)t50) = 1;

LAB64:    memset(t52, 0, 8);
    t49 = (t50 + 4);
    t80 = *((unsigned int *)t49);
    t81 = (~(t80));
    t82 = *((unsigned int *)t50);
    t83 = (t82 & t81);
    t84 = (t83 & 1U);
    if (t84 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t49) != 0)
        goto LAB67;

LAB68:    t85 = *((unsigned int *)t15);
    t86 = *((unsigned int *)t52);
    t87 = (t85 & t86);
    *((unsigned int *)t53) = t87;
    t55 = (t15 + 4);
    t56 = (t52 + 4);
    t57 = (t53 + 4);
    t88 = *((unsigned int *)t55);
    t89 = *((unsigned int *)t56);
    t90 = (t88 | t89);
    *((unsigned int *)t57) = t90;
    t91 = *((unsigned int *)t57);
    t92 = (t91 != 0);
    if (t92 == 1)
        goto LAB69;

LAB70:
LAB71:    goto LAB60;

LAB63:    t42 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB64;

LAB65:    *((unsigned int *)t52) = 1;
    goto LAB68;

LAB67:    t51 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB68;

LAB69:    t93 = *((unsigned int *)t53);
    t94 = *((unsigned int *)t57);
    *((unsigned int *)t53) = (t93 | t94);
    t58 = (t15 + 4);
    t59 = (t52 + 4);
    t95 = *((unsigned int *)t15);
    t96 = (~(t95));
    t97 = *((unsigned int *)t58);
    t98 = (~(t97));
    t99 = *((unsigned int *)t52);
    t100 = (~(t99));
    t101 = *((unsigned int *)t59);
    t102 = (~(t101));
    t62 = (t96 & t98);
    t65 = (t100 & t102);
    t103 = (~(t62));
    t104 = (~(t65));
    t105 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t105 & t103);
    t106 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t106 & t104);
    t107 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t107 & t103);
    t108 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t108 & t104);
    goto LAB71;

LAB72:    xsi_set_current_line(87, ng0);

LAB75:    xsi_set_current_line(88, ng0);
    t63 = (t0 + 2072U);
    t67 = *((char **)t63);
    memset(t54, 0, 8);
    t63 = (t54 + 4);
    t116 = (t67 + 4);
    t122 = *((unsigned int *)t67);
    t124 = (t122 >> 0);
    *((unsigned int *)t54) = t124;
    t126 = *((unsigned int *)t116);
    t127 = (t126 >> 0);
    *((unsigned int *)t63) = t127;
    t128 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t128 & 15U);
    t129 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t129 & 15U);
    t117 = (t0 + 4232);
    t118 = (t0 + 4232);
    t119 = (t118 + 72U);
    t120 = *((char **)t119);
    t121 = ((char*)((ng7)));
    t123 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t114, t115, t132, ((int*)(t120)), 2, t121, 32, 1, t123, 32, 1);
    t125 = (t114 + 4);
    t133 = *((unsigned int *)t125);
    t66 = (!(t133));
    t134 = (t115 + 4);
    t135 = *((unsigned int *)t134);
    t69 = (!(t135));
    t70 = (t66 && t69);
    t136 = (t132 + 4);
    t137 = *((unsigned int *)t136);
    t72 = (!(t137));
    t75 = (t70 && t72);
    if (t75 == 1)
        goto LAB76;

LAB77:    goto LAB74;

LAB76:    t138 = *((unsigned int *)t132);
    t76 = (t138 + 0);
    t139 = *((unsigned int *)t114);
    t140 = *((unsigned int *)t115);
    t130 = (t139 - t140);
    t131 = (t130 + 1);
    xsi_vlogvar_assign_value(t117, t54, t76, *((unsigned int *)t115), t131);
    goto LAB77;

}

static void Cont_95_5(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t17[8];
    char *t1;
    char *t2;
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
    char *t18;
    char *t19;
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
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;

LAB0:    t1 = (t0 + 6392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 4232);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t8 = (t5 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 255U);
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 255U);
    t16 = ((char*)((ng9)));
    memset(t17, 0, 8);
    t18 = (t5 + 4);
    t19 = (t16 + 4);
    t20 = *((unsigned int *)t5);
    t21 = *((unsigned int *)t16);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t19);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t19);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB7;

LAB4:    if (t29 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t17) = 1;

LAB7:    memset(t4, 0, 8);
    t33 = (t17 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t17);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t33) != 0)
        goto LAB10;

LAB11:    t40 = (t4 + 4);
    t41 = *((unsigned int *)t4);
    t42 = *((unsigned int *)t40);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB12;

LAB13:    t45 = *((unsigned int *)t4);
    t46 = (~(t45));
    t47 = *((unsigned int *)t40);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t40) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t49, 8);

LAB20:    t50 = (t0 + 8056);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    memset(t54, 0, 8);
    t55 = 1U;
    t56 = t55;
    t57 = (t3 + 4);
    t58 = *((unsigned int *)t3);
    t55 = (t55 & t58);
    t59 = *((unsigned int *)t57);
    t56 = (t56 & t59);
    t60 = (t54 + 4);
    t61 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t61 | t55);
    t62 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t62 | t56);
    xsi_driver_vfirst_trans(t50, 0, 0);
    t63 = (t0 + 7784);
    *((int *)t63) = 1;

LAB1:    return;
LAB6:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t39 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB11;

LAB12:    t44 = ((char*)((ng1)));
    goto LAB13;

LAB14:    t49 = ((char*)((ng2)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t44, 1, t49, 1);
    goto LAB20;

LAB18:    memcpy(t3, t44, 8);
    goto LAB20;

}

static void Cont_96_6(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 6640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 1752U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    t11 = (t0 + 8120);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t15, 0, 8);
    t16 = 1U;
    t17 = t16;
    t18 = (t3 + 4);
    t19 = *((unsigned int *)t3);
    t16 = (t16 & t19);
    t20 = *((unsigned int *)t18);
    t17 = (t17 & t20);
    t21 = (t15 + 4);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 | t16);
    t23 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t23 | t17);
    xsi_driver_vfirst_trans(t11, 0, 0);
    t24 = (t0 + 7800);
    *((int *)t24) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

}

static void Cont_97_7(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t22[8];
    char t34[8];
    char t45[8];
    char t61[8];
    char t69[8];
    char *t1;
    char *t2;
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
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    int t93;
    int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;

LAB0:    t1 = (t0 + 6888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1912U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
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
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t22, 0, 8);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t23) != 0)
        goto LAB10;

LAB11:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB12;

LAB13:    memcpy(t69, t22, 8);

LAB14:    memset(t4, 0, 8);
    t101 = (t69 + 4);
    t102 = *((unsigned int *)t101);
    t103 = (~(t102));
    t104 = *((unsigned int *)t69);
    t105 = (t104 & t103);
    t106 = (t105 & 1U);
    if (t106 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t101) != 0)
        goto LAB28;

LAB29:    t108 = (t4 + 4);
    t109 = *((unsigned int *)t4);
    t110 = *((unsigned int *)t108);
    t111 = (t109 || t110);
    if (t111 > 0)
        goto LAB30;

LAB31:    t113 = *((unsigned int *)t4);
    t114 = (~(t113));
    t115 = *((unsigned int *)t108);
    t116 = (t114 || t115);
    if (t116 > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t108) > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t4) > 0)
        goto LAB36;

LAB37:    memcpy(t3, t117, 8);

LAB38:    t118 = (t0 + 8184);
    t119 = (t118 + 56U);
    t120 = *((char **)t119);
    t121 = (t120 + 56U);
    t122 = *((char **)t121);
    memset(t122, 0, 8);
    t123 = 1U;
    t124 = t123;
    t125 = (t3 + 4);
    t126 = *((unsigned int *)t3);
    t123 = (t123 & t126);
    t127 = *((unsigned int *)t125);
    t124 = (t124 & t127);
    t128 = (t122 + 4);
    t129 = *((unsigned int *)t122);
    *((unsigned int *)t122) = (t129 | t123);
    t130 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t130 | t124);
    xsi_driver_vfirst_trans(t118, 0, 0);
    t131 = (t0 + 7816);
    *((int *)t131) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t22) = 1;
    goto LAB11;

LAB10:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB11;

LAB12:    t35 = (t0 + 2232U);
    t36 = *((char **)t35);
    memset(t34, 0, 8);
    t35 = (t34 + 4);
    t37 = (t36 + 4);
    t38 = *((unsigned int *)t36);
    t39 = (t38 >> 6);
    *((unsigned int *)t34) = t39;
    t40 = *((unsigned int *)t37);
    t41 = (t40 >> 6);
    *((unsigned int *)t35) = t41;
    t42 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t42 & 3U);
    t43 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t43 & 3U);
    t44 = ((char*)((ng2)));
    memset(t45, 0, 8);
    t46 = (t34 + 4);
    t47 = (t44 + 4);
    t48 = *((unsigned int *)t34);
    t49 = *((unsigned int *)t44);
    t50 = (t48 ^ t49);
    t51 = *((unsigned int *)t46);
    t52 = *((unsigned int *)t47);
    t53 = (t51 ^ t52);
    t54 = (t50 | t53);
    t55 = *((unsigned int *)t46);
    t56 = *((unsigned int *)t47);
    t57 = (t55 | t56);
    t58 = (~(t57));
    t59 = (t54 & t58);
    if (t59 != 0)
        goto LAB18;

LAB15:    if (t57 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t45) = 1;

LAB18:    memset(t61, 0, 8);
    t62 = (t45 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (~(t63));
    t65 = *((unsigned int *)t45);
    t66 = (t65 & t64);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t62) != 0)
        goto LAB21;

LAB22:    t70 = *((unsigned int *)t22);
    t71 = *((unsigned int *)t61);
    t72 = (t70 & t71);
    *((unsigned int *)t69) = t72;
    t73 = (t22 + 4);
    t74 = (t61 + 4);
    t75 = (t69 + 4);
    t76 = *((unsigned int *)t73);
    t77 = *((unsigned int *)t74);
    t78 = (t76 | t77);
    *((unsigned int *)t75) = t78;
    t79 = *((unsigned int *)t75);
    t80 = (t79 != 0);
    if (t80 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB17:    t60 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t61) = 1;
    goto LAB22;

LAB21:    t68 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB22;

LAB23:    t81 = *((unsigned int *)t69);
    t82 = *((unsigned int *)t75);
    *((unsigned int *)t69) = (t81 | t82);
    t83 = (t22 + 4);
    t84 = (t61 + 4);
    t85 = *((unsigned int *)t22);
    t86 = (~(t85));
    t87 = *((unsigned int *)t83);
    t88 = (~(t87));
    t89 = *((unsigned int *)t61);
    t90 = (~(t89));
    t91 = *((unsigned int *)t84);
    t92 = (~(t91));
    t93 = (t86 & t88);
    t94 = (t90 & t92);
    t95 = (~(t93));
    t96 = (~(t94));
    t97 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t97 & t95);
    t98 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t98 & t96);
    t99 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t99 & t95);
    t100 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t100 & t96);
    goto LAB25;

LAB26:    *((unsigned int *)t4) = 1;
    goto LAB29;

LAB28:    t107 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t107) = 1;
    goto LAB29;

LAB30:    t112 = ((char*)((ng1)));
    goto LAB31;

LAB32:    t117 = ((char*)((ng2)));
    goto LAB33;

LAB34:    xsi_vlog_unsigned_bit_combine(t3, 1, t112, 1, t117, 1);
    goto LAB38;

LAB36:    memcpy(t3, t112, 8);
    goto LAB38;

}

static void Cont_98_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 7136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2072U);
    t3 = *((char **)t2);
    t2 = (t0 + 8248);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 255U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 7);
    t16 = (t0 + 7832);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_99_9(char *t0)
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

LAB0:    t1 = (t0 + 7384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 4072);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8312);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 4095U;
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
    xsi_driver_vfirst_trans(t5, 0, 11);
    t18 = (t0 + 7848);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000002707708520_0838349453_init()
{
	static char *pe[] = {(void *)Always_48_0,(void *)NetDecl_52_1,(void *)Cont_59_2,(void *)Always_64_3,(void *)Always_71_4,(void *)Cont_95_5,(void *)Cont_96_6,(void *)Cont_97_7,(void *)Cont_98_8,(void *)Cont_99_9};
	xsi_register_didat("work_m_00000000002707708520_0838349453", "isim/BramComCtrl_tb_isim_beh.exe.sim/work/m_00000000002707708520_0838349453.didat");
	xsi_register_executes(pe);
}
