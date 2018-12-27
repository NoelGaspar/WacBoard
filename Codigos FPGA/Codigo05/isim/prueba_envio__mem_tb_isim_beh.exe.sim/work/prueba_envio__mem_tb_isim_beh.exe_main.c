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
    work_m_00000000002215437452_0838349453_init();
    xilinxcorelib_ver_m_00000000001358910285_2703102085_init();
    xilinxcorelib_ver_m_00000000001687936702_4166484400_init();
    xilinxcorelib_ver_m_00000000000277421008_3093834389_init();
    xilinxcorelib_ver_m_00000000001786246093_1355643486_init();
    work_m_00000000003289761879_2800745692_init();
    work_m_00000000000032816069_0924934024_init();
    work_m_00000000003204068871_1152785275_init();
    work_m_00000000000378518839_0104158578_init();
    work_m_00000000001556681949_2480501461_init();
    work_m_00000000000777628868_1045657691_init();
    work_m_00000000000395903830_1912995857_init();
    work_m_00000000000041037872_1744559240_init();
    work_m_00000000000158162879_1670509142_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000158162879_1670509142");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
