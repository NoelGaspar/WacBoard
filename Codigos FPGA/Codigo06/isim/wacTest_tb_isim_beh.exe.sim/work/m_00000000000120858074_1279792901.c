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
static const char *ng0 = "C:/Users/Wac/Google Drive/Memoria/Codigos FPGA/Codigo06/wacTest_tb.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {148U, 0U};
static int ng4[] = {2, 0};
static unsigned int ng5[] = {56U, 0U};
static unsigned int ng6[] = {0U, 0U};
static unsigned int ng7[] = {36U, 0U};
static unsigned int ng8[] = {20U, 0U};
static unsigned int ng9[] = {64U, 0U};
static unsigned int ng10[] = {16U, 0U};
static unsigned int ng11[] = {224U, 0U};



static void Initial_101_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 7328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(101, ng0);

LAB4:    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5128);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 7136);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    goto LAB1;

}

static void Always_121_1(char *t0)
{
    char t3[8];
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
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 7576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(122, ng0);

LAB4:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 7384);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(124, ng0);
    t4 = (t0 + 5128);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t7) == 0)
        goto LAB6;

LAB8:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB9:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB11;

LAB10:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 5128);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB6:    *((unsigned int *)t3) = 1;
    goto LAB9;

LAB11:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB10;

}

static void Always_127_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 7824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(128, ng0);

LAB4:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 7632);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(130, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 5288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 7632);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(132, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 7632);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(134, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 5288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 7632);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(136, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 7632);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(138, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 5288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 7632);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(140, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 7632);
    xsi_process_wait(t2, 1500000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(142, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 5288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 7632);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(144, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 7632);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(146, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 5288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 7632);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(148, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 7632);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(150, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 5288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 7632);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(152, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(153, ng0);
    t2 = (t0 + 7632);
    xsi_process_wait(t2, 1500000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 7632);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(156, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(157, ng0);
    t2 = (t0 + 7632);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    xsi_set_current_line(158, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 5288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(159, ng0);
    t2 = (t0 + 7632);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB20:    xsi_set_current_line(160, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 7632);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB21:    xsi_set_current_line(162, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 5288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(163, ng0);
    t2 = (t0 + 7632);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB22:    xsi_set_current_line(164, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(165, ng0);
    t2 = (t0 + 7632);
    xsi_process_wait(t2, 2800000LL);
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB23:    goto LAB2;

}

static void Always_168_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 8072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(169, ng0);

LAB4:    xsi_set_current_line(170, ng0);
    t2 = (t0 + 7880);
    xsi_process_wait(t2, 95000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(171, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 5448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 7880);
    xsi_process_wait(t2, 30000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(173, ng0);
    t3 = (t0 + 7880);
    xsi_process_wait(t3, 10000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(174, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 5448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(175, ng0);
    t2 = (t0 + 7880);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(176, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 5448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(177, ng0);
    t2 = (t0 + 7880);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(178, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 5448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(179, ng0);
    t2 = (t0 + 7880);
    xsi_process_wait(t2, 1775000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(180, ng0);
    t2 = (t0 + 7880);
    xsi_process_wait(t2, 95000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(181, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 5448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(182, ng0);
    t2 = (t0 + 7880);
    xsi_process_wait(t2, 30000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(183, ng0);
    t3 = (t0 + 7880);
    xsi_process_wait(t3, 10000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(184, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 5448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(185, ng0);
    t2 = (t0 + 7880);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(186, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 5448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(187, ng0);
    t2 = (t0 + 7880);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(188, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 5448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(189, ng0);
    t2 = (t0 + 7880);
    xsi_process_wait(t2, 27830000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    goto LAB2;

}

static void Always_193_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 8320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(194, ng0);

LAB4:    xsi_set_current_line(195, ng0);
    t2 = (t0 + 8128);
    xsi_process_wait(t2, 250000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(196, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 5608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(197, ng0);
    t2 = (t0 + 8128);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(198, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 5608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(199, ng0);
    t2 = (t0 + 8128);
    xsi_process_wait(t2, 1600000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(200, ng0);
    t3 = (t0 + 8128);
    xsi_process_wait(t3, 200000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(201, ng0);
    t4 = ((char*)((ng7)));
    t5 = (t0 + 5608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(202, ng0);
    t2 = (t0 + 8128);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(203, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 5608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(204, ng0);
    t2 = (t0 + 8128);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(205, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 5608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(206, ng0);
    t2 = (t0 + 8128);
    xsi_process_wait(t2, 27960000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(207, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 5608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(208, ng0);
    t2 = (t0 + 8128);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(209, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 5608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(210, ng0);
    t2 = (t0 + 8128);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(211, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 5608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(212, ng0);
    t2 = (t0 + 8128);
    xsi_process_wait(t2, 1320000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    goto LAB2;

}


extern void work_m_00000000000120858074_1279792901_init()
{
	static char *pe[] = {(void *)Initial_101_0,(void *)Always_121_1,(void *)Always_127_2,(void *)Always_168_3,(void *)Always_193_4};
	xsi_register_didat("work_m_00000000000120858074_1279792901", "isim/wacTest_tb_isim_beh.exe.sim/work/m_00000000000120858074_1279792901.didat");
	xsi_register_executes(pe);
}
