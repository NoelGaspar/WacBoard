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
    work_m_00000000001874891474_1912995857_init();
    work_m_00000000002701432835_1152785275_init();
    work_m_00000000002124834625_0104158578_init();
    work_m_00000000002607844194_0650459222_init();
    work_m_00000000003705412435_4221938312_init();
    work_m_00000000004143945721_2208618597_init();
    work_m_00000000002294443479_0321908034_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002294443479_0321908034");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
