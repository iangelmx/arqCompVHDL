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

char *IEEE_P_2592010699;
char *IEEE_P_1242562249;
char *WORK_P_2362608160;
char *IEEE_P_3499444699;
char *STD_STANDARD;
char *IEEE_P_3620187407;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    work_p_2362608160_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    ieee_p_1242562249_init();
    work_a_0428140283_3212880686_init();
    work_a_3248548788_3212880686_init();
    work_a_2016291610_3212880686_init();
    work_a_3787303551_3212880686_init();
    work_a_1855846214_3212880686_init();
    work_a_2253722718_3212880686_init();
    work_a_4013218979_3212880686_init();
    work_a_3364489300_3212880686_init();
    work_a_2379605397_3212880686_init();
    work_a_3204724160_3212880686_init();
    work_a_1620951984_3212880686_init();
    work_a_3555912461_3212880686_init();
    work_a_2790413024_3212880686_init();
    work_a_1733880195_3212880686_init();
    work_a_3352115625_3212880686_init();
    work_a_2658935401_3212880686_init();
    work_a_3276679129_3212880686_init();
    work_a_2947913191_3212880686_init();
    work_a_1253530647_3212880686_init();
    work_a_2592424278_3212880686_init();


    xsi_register_tops("work_a_2592424278_3212880686");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    WORK_P_2362608160 = xsi_get_engine_memory("work_p_2362608160");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");

    return xsi_run_simulation(argc, argv);

}
