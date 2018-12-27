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
    work_m_00000000003526687695_0924934024_init();
    work_m_00000000003204068871_1152785275_init();
    work_m_00000000000378518839_0104158578_init();
    work_m_00000000001556681949_2480501461_init();
    work_m_00000000003057753925_1045657691_init();
    work_m_00000000000787424573_1912995857_init();
    work_m_00000000000699869012_2824540007_init();
    work_m_00000000000120858074_1279792901_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000120858074_1279792901");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
