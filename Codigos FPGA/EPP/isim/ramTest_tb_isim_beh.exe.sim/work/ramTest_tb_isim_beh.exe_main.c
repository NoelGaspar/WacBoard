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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    xilinxcorelib_ver_m_00000000001358910285_2703102085_init();
    xilinxcorelib_ver_m_00000000001687936702_4166484400_init();
    xilinxcorelib_ver_m_00000000000277421008_3093834389_init();
    xilinxcorelib_ver_m_00000000001786246093_1355643486_init();
    work_m_00000000003289761879_1681867324_init();
    work_m_00000000001419460868_1163108001_init();
    work_m_00000000000809951526_3219902067_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000809951526_3219902067");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
