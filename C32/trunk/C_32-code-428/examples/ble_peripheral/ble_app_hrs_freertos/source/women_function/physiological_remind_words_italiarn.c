/***************************Copyright(c)***********************************
**                       Veepoo Tech
**                  COPYRIGHT (C) 2016-2019
**-----------File Info-----------------------------------------------------
** File        name:     physiological_remind_words_italiarn.c
** Last modified Date:   2017-10-24
** Last SYS_VERSION:     0.0.0
** Descriptions:            
**-------------------------------------------------------------------------
** Created  by:          WJ
** Created  date:        2017-10-24
** SYS_VERSION:          0.0.0
** Descriptions:         
**-------------------------------------------------------------------------
** Modified by:				
** Modified date:  			          
** SYS_VERSION:                 
** Descriptions:                        
***************************************************************************/
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "physiological_period.h"
#include "util.h"

/*********************************************************************
* Macro Definition
*/

/*********************************************************************
* Global Variables
*/  
//月经期提示语
const char menstrual_words_it_a[] = {0x4f,0x67,0x67,0x69,0x20,0xc3,0xa8,0x20,0x69,0x6c,0x20,  0x00};
const char menstrual_words_it_a1[] = {0x20,0x67,0x69,0x6f,0x72,0x6e,0x6f,0x20,0x64,0x69,0x20,0x70,0x65,0x72,0x69,0x6f,0x64,0x6f,0x20,0x6d,0x65,0x73,0x74,0x72,0x75,0x61,0x6c,0x65,  0x00};
const char menstrual_words_it_b[] = {0x20,0x67,0x69,0x6f,0x72,0x6e,0x69,  0x00};
const char menstrual_words_it_c[] = {0x4e,0x6f,0x6e,0x20,0x73,0x65,0x64,0x65,0x72,0x73,0x69,0x20,0x74,0x72,0x6f,0x70,0x70,0x6f,0x20,0x74,0x65,0x6d,0x70,0x6f,  0x00};
const char menstrual_words_it_d[] = {0x2c,0x52,0x69,0x63,0x6f,0x72,0x64,0x61,0x20,0x64,0x69,0x20,0x63,0x61,0x6d,0x62,0x69,0x61,0x72,0x65,0x20,0x69,0x6c,0x20,0x74,0x6f,0x76,0x61,0x67,0x6c,0x69,0x6f,0x6c,0x6f,0x20,0x73,0x61,0x6e,0x69,0x74,0x61,0x72,0x69,0x6f,  0x00};
const char menstrual_words_it_e[] = {0x52,0x69,0x63,0x6f,0x72,0x64,0x61,0x20,0x64,0x69,0x20,0x63,0x61,0x6d,0x62,0x69,0x61,0x72,0x65,0x20,0x74,0x6f,0x76,0x61,0x67,0x6c,0x69,0x6f,0x6c,0x6f,0x20,0x73,0x61,0x6e,0x69,0x74,0x61,0x72,0x69,0x6f,0x20,0x70,0x72,0x69,0x6d,0x61,0x20,0x64,0x69,0x20,0x6c,0x61,0x76,0x6f,0x72,0x6f,  0x00};
const char menstrual_words_it_e1[] = {0x43,0x61,0x6d,0x62,0x69,0x61,0x20,0x74,0x6f,0x76,0x61,0x67,0x6c,0x69,0x6f,0x6c,0x6f,0x20,0x73,0x61,0x6e,0x69,0x74,0x61,0x72,0x69,0x6f,0x20,0x70,0x72,0x69,0x6d,0x61,0x20,0x64,0x69,0x20,0x61,0x6e,0x64,0x61,0x72,0x65,0x20,0x61,0x20,0x6c,0x65,0x74,0x74,0x6f,0x20,0x70,0x65,0x72,0x20,0x67,0x61,0x72,0x61,0x6e,0x74,0x69,0x72,0x65,0x20,0x6c,0x61,0x20,0x71,0x75,0x61,0x6c,0x69,0x74,0xc3,0xa0,0x20,0x64,0x65,0x6c,0x20,0x73,0x6f,0x6e,0x6e,0x6f,  0x00};

const char menstrual_words_it_f[] = {0x4f,0x67,0x67,0x69,0x20,0xc3,0xa8,0x20,0x75,0x6e,0x20,0x70,0x65,0x72,0x69,0x6f,0x64,0x6f,0x20,0x73,0x69,0x63,0x75,0x72,0x6f,0x2c,0x20,  0x00};
const char menstrual_words_it_f1[] = {0x20,0x67,0x69,0x6f,0x72,0x6e,0x69,0x20,0x64,0x61,0x6c,0x20,0x70,0x72,0x6f,0x73,0x73,0x69,0x6d,0x6f,0x20,0x70,0x65,0x72,0x69,0x6f,0x64,0x6f,0x20,0x6d,0x65,0x73,0x74,0x72,0x75,0x61,0x6c,0x65,  0x00};

const char menstrual_words_it_g[] = {0x4f,0x67,0x67,0x69,0x20,0xc3,0xa8,0x20,0x69,0x6c,0x20,0x67,0x69,0x6f,0x72,0x6e,0x6f,0x20,0x64,0x65,0x6c,0x6c,0x27,0x6f,0x76,0x75,0x6c,0x61,0x7a,0x69,0x6f,0x6e,0x65,0x20,  0x00};
const char menstrual_words_it_h[] = {0x2c,0x20,0x61,0x74,0x74,0x65,0x6e,0x7a,0x69,0x6f,0x6e,0x65,  0x00};
const char menstrual_words_it_i[] = {0x4f,0x67,0x67,0x69,0x20,0xc3,0xa8,0x20,0x69,0x6c,0x20,0x67,0x69,0x6f,0x72,0x6e,0x6f,0x20,0x64,0x69,0x20,0x6f,0x76,0x75,0x6c,0x61,0x7a,0x69,0x6f,0x6e,0x65,0x2e,0x20,0x50,0x72,0x65,0x73,0x74,0x61,0x20,0x61,0x74,0x74,0x65,0x6e,0x7a,0x69,0x6f,0x6e,0x65,0x21,  0x00};

const char menstrual_words_it_j1[] = {0x46,0x72,0x61,0x20,  0x00};
const char menstrual_words_it_j[] = {0x20,0x67,0x69,0x6f,0x72,0x6e,0x69,0x20,0x65,0x6e,0x74,0x72,0xc3,0xa0,0x20,0x6d,0x65,0x73,0x74,0x72,0x75,0x61,0x7a,0x69,0x6f,0x6e,0x65,0x2c,0x20,0x73,0x69,0x20,0x70,0x72,0x65,0x67,0x61,0x20,0x64,0x69,0x20,0x65,0x73,0x73,0x65,0x72,0x65,0x20,0x70,0x72,0x6f,0x6e,0x74,0x69,  0x00};
const char menstrual_words_it_k[] = {0x50,0x72,0x65,0x64,0x69,0x63,0x61,0x20,0x6f,0x67,0x67,0x69,0x20,0xc3,0xa8,0x20,0x74,0x75,0x6f,0x20,0x70,0x65,0x72,0x69,0x6f,0x64,0x6f,0x20,0x6d,0x65,0x73,0x74,0x72,0x75,0x61,0x6c,0x65,0x2e,0x20,0x41,0x67,0x67,0x69,0x6f,0x72,0x6e,0x61,0x20,0x6c,0x65,0x20,0x69,0x6e,0x66,0x6f,0x72,0x6d,0x61,0x7a,0x69,0x6f,0x6e,0x69,  0x00};
const char menstrual_words_it_l[] = {0x51,0x75,0x65,0x73,0x74,0x61,0x20,0x6d,0x65,0x73,0x74,0x72,0x75,0x61,0x7a,0x69,0x6f,0x6e,0x65,0x20,0xc3,0xa8,0x20,0x72,0x69,0x74,0x61,0x72,0x64,0x61,0x74,0x61,0x20,0x64,0x61,0x20,  0x00};
const char menstrual_words_it_m[] = {0x2e,0x20,0x41,0x67,0x67,0x69,0x6f,0x72,0x6e,0x61,0x20,0x6c,0x65,0x20,0x69,0x6e,0x66,0x6f,0x72,0x6d,0x61,0x7a,0x69,0x6f,0x6e,0x69,  0x00};
const char menstrual_words_it_n[] = {0x45,0x72,0x72,0x6f,0x72,0x65,0x20,0x64,0x69,0x20,0x69,0x6e,0x66,0x6f,0x72,0x6d,0x61,0x7a,0x69,0x6f,0x6e,0x69,0x2c,0x20,0x61,0x67,0x67,0x69,0x6f,0x72,0x6e,0x61,  0x00};
//备孕期提示语
const char pregnant_words_it_a[] = {0x4f,0x67,0x67,0x69,0x20,0xc3,0xa8,0x20,0x70,0x65,0x72,0x69,0x6f,0x64,0x6f,0x20,0x64,0x69,0x20,0x6f,0x76,0x75,0x6c,0x61,0x7a,0x69,0x6f,0x6e,0x65,  0x00};
const char pregnant_words_it_b[] = {0x4f,0x67,0x67,0x69,0x20,0xc3,0xa8,0x20,0x67,0x69,0x6f,0x72,0x6e,0x6f,0x20,0x64,0x69,0x20,0x6f,0x76,0x75,0x6c,0x61,0x7a,0x69,0x6f,0x6e,0x65,  0x00};
const char pregnant_words_it_c[] = {0x2c,0x20,0xc3,0xa8,0x20,0x75,0x6e,0x61,0x20,0x6d,0x61,0x67,0x67,0x69,0x6f,0x72,0x65,0x20,0x70,0x72,0x6f,0x62,0x61,0x62,0x69,0x6c,0x69,0x74,0xc3,0xa0,0x20,0x64,0x65,0x6c,0x6c,0x61,0x20,0x67,0x72,0x61,0x76,0x69,0x64,0x61,0x6e,0x7a,0x61,  0x00};
//怀孕期提示语
const char gestation_words_it_a[] = {0x53,0x65,0x69,0x20,0x69,0x6e,0x63,0x69,0x6e,0x74,0x61,0x20,  0x00};
const char gestation_words_it_a2[] = {0x70,0x65,0x72,0x20,  0x00};
const char gestation_words_it_b[] = {0x20,0x67,0x69,0x6f,0x72,0x6e,0x69,  0x00};
const char gestation_words_it_a1[] = {0x53,0x65,0x69,0x20,0x69,0x6e,0x20,0x67,0x72,0x61,0x76,0x69,0x64,0x61,0x6e,0x7a,0x61,0x20,  0x00};
const char gestation_words_it_b1[] = {0x64,0x69,0x20,  0x00};
const char gestation_words_it_b2[] = {0x20,0x73,0x65,0x74,0x74,0x69,0x6d,0x61,0x6e,0x65,  0x00};
const char gestation_words_it_c[] = {0x2c,0x20,0x63,0x6f,0x6e,0x74,0x72,0x6f,0x6c,0x6c,0x61,0x20,0x72,0x65,0x67,0x6f,0x6c,0x61,0x72,0x6d,0x65,0x6e,0x74,0x65,  0x00};
const char gestation_words_it_d[] = {0x2c,0x20,0x63,0x6f,0x6e,0x74,0x72,0x6f,0x6c,0x6c,0x61,0x20,0x72,0x65,0x67,0x6f,0x6c,0x61,0x72,0x6d,0x65,0x6e,0x74,0x65,  0x00};
const char gestation_words_it_e[] = {0x44,0x61,0x20,0x62,0x61,0x6d,0x62,0x69,0x6e,0x6f,0x20,0x6e,0x61,0x74,0x6f,0x20,0xc3,0xa8,0x20,0x20,  0x00};
const char gestation_words_it_f[] = {0x56,0x6f,0x72,0x72,0x65,0x69,0x20,0x63,0x68,0x65,0x20,0x69,0x6c,0x20,0x62,0x61,0x6d,0x62,0x69,0x6e,0x6f,0x20,0x73,0x69,0x61,0x20,0x6e,0x61,0x74,0x6f,0x20,0x6f,0x67,0x67,0x69,0x2e,0x20,0x53,0x65,0x69,0x20,0x70,0x72,0x6f,0x6e,0x74,0x61,0x3f,  0x00};
//辣妈期提示语
const char hot_mom_words_it_a[] = {0x42,0x61,0x6d,0x62,0x69,0x6e,0x6f,0x20,0x6e,0x61,0x74,0x6f,0x20,0x70,0x65,0x72,0x20,  0x00};
const char hot_mom_words_it_b[] = {0x2c,0x20,0x61,0x74,0x74,0x65,0x6e,0x7a,0x69,0x6f,0x6e,0x65,0x20,0x61,0x6c,0x6c,0x61,0x20,0x73,0x61,0x6c,0x75,0x74,0x65,0x20,0x64,0x75,0x72,0x61,0x6e,0x74,0x65,0x20,0x72,0x65,0x63,0x75,0x70,0x65,0x72,0x6f,0x20,  0x00};
const char hot_mom_words_it_c[] = {0x4d,0x65,0x73,0x65,0x20,0x70,0x69,0x65,0x6e,0x61,0x20,0x64,0x65,0x6c,0x20,0x62,0x61,0x6d,0x62,0x69,0x6e,0x6f,  0x00};
const char hot_mom_words_it_d[] = {0x42,0x61,0x6d,0x62,0x69,0x6e,0x6f,0x20,0x68,0x61,0x20,0x63,0x65,0x6e,0x74,0x6f,0x20,0x67,0x69,0x6f,0x72,0x6e,0x69,  0x00};
const char hot_mom_words_it_e[] = {0x49,0x6c,0x20,0x62,0x61,0x6d,0x62,0x69,0x6e,0x6f,0x20,0x68,0x61,0x20,0x75,0x6e,0x20,0x61,0x6e,0x6e,0x6f,  0x00};
const char hot_mom_words_it_f[] = {0x2c,0x20,0x75,0x6e,0x61,0x20,0x67,0x69,0x6f,0x72,0x6e,0x61,0x74,0x61,0x20,0x69,0x6e,0x64,0x69,0x6d,0x65,0x6e,0x74,0x69,0x63,0x61,0x62,0x69,0x6c,0x65,  0x00};
const char hot_mom_words_it_g[] = {0x41,0x67,0x67,0x69,0x6f,0x72,0x6e,0x61,0x20,0x69,0x20,0x74,0x75,0x6f,0x69,0x20,0x64,0x61,0x74,0x69,0x20,0x70,0x65,0x72,0x73,0x6f,0x6e,0x61,0x6c,0x69,  0x00};


/*********************************************************************
* local functions
*/

void Phys_ItaliarnRemind(uint8_t type, uint16_t days, uint8_t hours, uint8_t minutes)
{
    if(type == PHYS_REMIND_MENSTRUAL_PERIOD)
    {//经期
        if(hours == 7 && minutes == 30)
        {//今天经期第x天，记得换卫生巾
            //"今天经期第"
            memcpy(phys_remind_info_s.remind_info_buf, menstrual_words_it_a, strlen(menstrual_words_it_a));
            phys_remind_info_s.data_size = strlen(menstrual_words_it_a);
            //days 
            Util_Itoa(days, (char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size]);
            phys_remind_info_s.data_size = strlen((const char *)phys_remind_info_s.remind_info_buf);
            //天
            memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], menstrual_words_it_a1, strlen(menstrual_words_it_a1));            
            phys_remind_info_s.data_size += strlen(menstrual_words_it_a1);
            //,记得更换卫生巾
            memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], menstrual_words_it_d, strlen(menstrual_words_it_d));            
            phys_remind_info_s.data_size += strlen(menstrual_words_it_d);
        }
        else if((hours == 11 || hours == 14) && minutes == 00)
        {//请勿久坐,记得更换卫生巾
            //请勿久坐
            memcpy(phys_remind_info_s.remind_info_buf, menstrual_words_it_c, strlen(menstrual_words_it_c));
            phys_remind_info_s.data_size = strlen(menstrual_words_it_c);
            //，记得更换卫生巾
            memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], menstrual_words_it_d, strlen(menstrual_words_it_d));            
            phys_remind_info_s.data_size += strlen(menstrual_words_it_d);
        }
        else if(hours == 17 && minutes == 30)
        {//下班前记得更换卫生巾 
            memcpy(phys_remind_info_s.remind_info_buf, menstrual_words_it_e, strlen(menstrual_words_it_e));
            phys_remind_info_s.data_size = strlen(menstrual_words_it_e);
        }
        else if(hours == 21 && minutes == 30)
        {//睡前更换卫生巾,注意睡眠质量
            memcpy(phys_remind_info_s.remind_info_buf, menstrual_words_it_e1, strlen(menstrual_words_it_e1));
            phys_remind_info_s.data_size = strlen(menstrual_words_it_e1);
        }
    }
    else if(type == PHYS_REMIND_SAFETY_PERIOD)
    {//安全期
        if(hours == 9 && minutes == 0)
        {//今天安全期，距下次经期X天
            //今天安全期，距下次经期
            memcpy(phys_remind_info_s.remind_info_buf, menstrual_words_it_f, strlen(menstrual_words_it_f));
            phys_remind_info_s.data_size = strlen(menstrual_words_it_f);
            //days 天
            Util_Itoa(days, (char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size]);
            phys_remind_info_s.data_size = strlen((const char *)phys_remind_info_s.remind_info_buf);
            //天menstrual_words_it_f1
            memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], menstrual_words_it_f1, strlen(menstrual_words_it_f1));            
            phys_remind_info_s.data_size += strlen(menstrual_words_it_f1);
        }
    }
    else if(type == PHYS_REMIND_SAFETY_PERIOD1)
    {//安全期
        if(hours == 9 && minutes == 0)
        {//X天后进入经期(<=3天)，请做好准备
            //menstrual_words_it_j1
            memcpy((char *)&phys_remind_info_s.remind_info_buf[0], menstrual_words_it_j1, strlen(menstrual_words_it_j1));            
            phys_remind_info_s.data_size += strlen(menstrual_words_it_j1);
            //days 
            Util_Itoa(days, (char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size]);
            phys_remind_info_s.data_size = strlen((const char *)phys_remind_info_s.remind_info_buf);
            //天后进入经期，请做好准备
            memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], menstrual_words_it_j, strlen(menstrual_words_it_j));            
            phys_remind_info_s.data_size += strlen(menstrual_words_it_j);   
        }
    }
    else if(type == PHYS_REMIND_OVIPOSIT_PERIOD)
    {//排卵期
        if(hours == 9 && minutes == 0)
        {//今天是排卵期第X天，小心哦
            //今天是排卵期第
            memcpy(phys_remind_info_s.remind_info_buf, menstrual_words_it_g, strlen(menstrual_words_it_g));
            phys_remind_info_s.data_size = strlen(menstrual_words_it_g);
            //days 
            Util_Itoa(days, (char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size]);
            phys_remind_info_s.data_size = strlen((const char *)phys_remind_info_s.remind_info_buf);
            //，小心哦
            memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], menstrual_words_it_h, strlen(menstrual_words_it_h));            
            phys_remind_info_s.data_size += strlen(menstrual_words_it_h);
        }
    }
    else if(type == PHYS_REMIND_OVIPOSIT_DAY)
    {//排卵日
        if(hours == 9 && minutes == 0)
        {//今天是排卵日，要格外小心哦
            memcpy(phys_remind_info_s.remind_info_buf, menstrual_words_it_i, strlen(menstrual_words_it_i));
            phys_remind_info_s.data_size = strlen(menstrual_words_it_i);
        }
    }
    else if(type == PHYS_REMIND_OVIPOSIT_PERIOD1)
    {//备孕期排卵期
        if(hours == 9 && minutes == 0)
        {//今天排卵期，怀孕几率较大
            //今天排卵期，
            memcpy(phys_remind_info_s.remind_info_buf, pregnant_words_it_a, strlen(pregnant_words_it_a));
            phys_remind_info_s.data_size = strlen(pregnant_words_it_a);
            //怀孕几率较大
            memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], pregnant_words_it_c, strlen(pregnant_words_it_c));            
            phys_remind_info_s.data_size += strlen(pregnant_words_it_c);
        }
    }
    else if(type == PHYS_REMIND_OVIPOSIT_DAY1)
    {//备孕期排卵日
        if(hours == 9 && minutes == 0)
        {//今天排卵日，怀孕几率较大
            //今天排卵日，
            memcpy(phys_remind_info_s.remind_info_buf, pregnant_words_it_b, strlen(pregnant_words_it_b));
            phys_remind_info_s.data_size = strlen(pregnant_words_it_b);
            //怀孕几率较大
            memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], pregnant_words_it_c, strlen(pregnant_words_it_c));            
            phys_remind_info_s.data_size += strlen(pregnant_words_it_c);
        }
    }
    else if(type == PHYS_REMIND_FORECAST_MENSTRUAL_PERIOD)
    {//预测经期
        if(hours == 7 && minutes == 30 && days == 1)
        {//预测今天进入经期，请更新信息
            memcpy(phys_remind_info_s.remind_info_buf, menstrual_words_it_k, strlen(menstrual_words_it_k));
            phys_remind_info_s.data_size = strlen(menstrual_words_it_k);
        } 
        else if(hours == 9 && minutes == 0 && days > 1)
        {//本次月经延迟X天，请更新信息
            //本次月经延迟
            memcpy(phys_remind_info_s.remind_info_buf, menstrual_words_it_l, strlen(menstrual_words_it_l));
            phys_remind_info_s.data_size = strlen(menstrual_words_it_l);
            //days 
            Util_Itoa(days, (char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size]);
            phys_remind_info_s.data_size = strlen((const char *)phys_remind_info_s.remind_info_buf);
            //天
            memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], menstrual_words_it_b, strlen(menstrual_words_it_b));            
            phys_remind_info_s.data_size += strlen(menstrual_words_it_b);
            //，请更新信息
            memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], menstrual_words_it_m, strlen(menstrual_words_it_m));            
            phys_remind_info_s.data_size += strlen(menstrual_words_it_m);
        } 
    }
    else if(type == PHYS_REMIND_PREGNANCY_ONE)
    {//怀孕第一阶段（1~3个月）
        if(hours == 9 && minutes == 0)
        {//您已怀孕X周X天，请定期做检查
            //您已怀孕
            
            if(days < 7)
            {
                memcpy(phys_remind_info_s.remind_info_buf, gestation_words_it_a, strlen(gestation_words_it_a));
                phys_remind_info_s.data_size = strlen(gestation_words_it_a);     
                
            }
            else
            {
                memcpy(phys_remind_info_s.remind_info_buf, gestation_words_it_a1, strlen(gestation_words_it_a1));
                phys_remind_info_s.data_size = strlen(gestation_words_it_a1);                                               
            }
            //n天
            if(days % 7 != 0)
            {             
                memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], gestation_words_it_a2, strlen(gestation_words_it_a2));            
                phys_remind_info_s.data_size += strlen(gestation_words_it_a2);
                //days%7 
                Util_Itoa(days % 7, (char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size]);
                phys_remind_info_s.data_size = strlen((const char *)phys_remind_info_s.remind_info_buf);
                memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], gestation_words_it_b, strlen(gestation_words_it_b));            
                phys_remind_info_s.data_size += strlen(gestation_words_it_b);
            }
            //n周
            if(days / 7 != 0)
            {
                memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], gestation_words_it_b1, strlen(gestation_words_it_b1));            
                phys_remind_info_s.data_size += strlen(gestation_words_it_b1);
                //days/7 
                Util_Itoa(days / 7, (char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size]);
                phys_remind_info_s.data_size = strlen((const char *)phys_remind_info_s.remind_info_buf);
                memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], gestation_words_it_b2, strlen(gestation_words_it_b2));            
                phys_remind_info_s.data_size += strlen(gestation_words_it_b2);
            }
            
            //,请定期做检查
            memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], gestation_words_it_c, strlen(gestation_words_it_c));            
            phys_remind_info_s.data_size += strlen(gestation_words_it_c);
        } 
    }
    else if(type == PHYS_REMIND_PREGNANCY_TWO)
    {//怀孕第二阶段（3~6个月）
        if(hours == 9 && minutes == 0)
        {//09：00您已怀孕X周X天，请保持好心情
            //您已怀孕
            memcpy(phys_remind_info_s.remind_info_buf, gestation_words_it_a1, strlen(gestation_words_it_a1));
            phys_remind_info_s.data_size = strlen(gestation_words_it_a1);
             //n天
            if(days % 7 != 0)
            {             
                memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], gestation_words_it_a2, strlen(gestation_words_it_a2));            
                phys_remind_info_s.data_size += strlen(gestation_words_it_a2);
                //days%7 
                Util_Itoa(days % 7, (char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size]);
                phys_remind_info_s.data_size = strlen((const char *)phys_remind_info_s.remind_info_buf);
                memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], gestation_words_it_b, strlen(gestation_words_it_b));            
                phys_remind_info_s.data_size += strlen(gestation_words_it_b);
            }
            //n周
            if(days / 7 != 0)
            {
                memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], gestation_words_it_b1, strlen(gestation_words_it_b1));            
                phys_remind_info_s.data_size += strlen(gestation_words_it_b1);
                //days/7 
                Util_Itoa(days / 7, (char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size]);
                phys_remind_info_s.data_size = strlen((const char *)phys_remind_info_s.remind_info_buf);
                memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], gestation_words_it_b2, strlen(gestation_words_it_b2));            
                phys_remind_info_s.data_size += strlen(gestation_words_it_b2);
            }
            //,请定期做检查
            memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], gestation_words_it_c, strlen(gestation_words_it_c));            
            phys_remind_info_s.data_size += strlen(gestation_words_it_c);
        }
    }
    else if(type == PHYS_REMIND_PREGNANCY_THU)
    {//怀孕第三阶段（6个月~出生前）
        if(hours == 9 && minutes == 0)
        {//09：00距宝宝诞生X天，请保持好心情
            //距宝宝诞生
            memcpy(phys_remind_info_s.remind_info_buf, gestation_words_it_e, strlen(gestation_words_it_e));
            phys_remind_info_s.data_size = strlen(gestation_words_it_e);
            //n天
            Util_Itoa(days, (char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size]);
            phys_remind_info_s.data_size = strlen((const char *)phys_remind_info_s.remind_info_buf);
            memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], menstrual_words_it_b, strlen(menstrual_words_it_b));            
            phys_remind_info_s.data_size += strlen(menstrual_words_it_b);
            
            //,请定期做检查
            memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], gestation_words_it_d, strlen(gestation_words_it_d));            
            phys_remind_info_s.data_size += strlen(gestation_words_it_d);
        }
    }
    else if(type == PHYS_REMIND_PREGNANCY_BIRTH)
    {//怀孕第四阶段（宝宝出生）
        if(hours == 9 && minutes == 0)
        {//预祝宝宝今天诞生您准备好了吗
            memcpy(phys_remind_info_s.remind_info_buf, gestation_words_it_f, strlen(gestation_words_it_f));
            phys_remind_info_s.data_size = strlen(gestation_words_it_f);
        }
    }
    else if(type == PHYS_REMIND_PREGNANCY_ERROR)
    {//怀孕信息过期，更新信息
        if(hours == 9 && minutes == 0)
        {//09：00请更新您的个人信息(如果经期信息有效,该信息不提醒)
            memcpy(phys_remind_info_s.remind_info_buf, hot_mom_words_it_g, strlen(hot_mom_words_it_g));
            phys_remind_info_s.data_size = strlen(hot_mom_words_it_g);
        }
    }
    else if(type == PHYS_REMIND_BABY_BORN)
    {//宝宝出生后
        if(hours == 9 && minutes == 30)
        {
            if(days <= 10)
            {//宝宝出生第X天，恢复期注意卫生
                //宝宝出生第
                memcpy(phys_remind_info_s.remind_info_buf, hot_mom_words_it_a, strlen(hot_mom_words_it_a));
                phys_remind_info_s.data_size = strlen(hot_mom_words_it_a);
                //days 
                Util_Itoa(days, (char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size]);
                phys_remind_info_s.data_size = strlen((const char *)phys_remind_info_s.remind_info_buf);
                //天
                memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], menstrual_words_it_b, strlen(menstrual_words_it_b));            
                phys_remind_info_s.data_size += strlen(menstrual_words_it_b);
                //，请恢复期注意卫生
                memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], hot_mom_words_it_b, strlen(hot_mom_words_it_b));            
                phys_remind_info_s.data_size += strlen(hot_mom_words_it_b);
            }
            else if(days == 30)
            {//宝宝满月(30天)了，值得纪念的一天              
                memcpy(phys_remind_info_s.remind_info_buf, hot_mom_words_it_c, strlen(hot_mom_words_it_c));
                phys_remind_info_s.data_size = strlen(hot_mom_words_it_c);  
                memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], hot_mom_words_it_f, strlen(hot_mom_words_it_f));            
                phys_remind_info_s.data_size += strlen(hot_mom_words_it_f);
            }
            else if(days == 100)
            {//宝宝一百天，值得纪念的一天
                memcpy(phys_remind_info_s.remind_info_buf, hot_mom_words_it_d, strlen(hot_mom_words_it_d));
                phys_remind_info_s.data_size = strlen(hot_mom_words_it_d); 
                memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], hot_mom_words_it_f, strlen(hot_mom_words_it_f));            
                phys_remind_info_s.data_size += strlen(hot_mom_words_it_f);
            }
            else if(days == 365)
            {//宝宝一周岁，值得纪念的一天
                memcpy(phys_remind_info_s.remind_info_buf, hot_mom_words_it_e, strlen(hot_mom_words_it_e));
                phys_remind_info_s.data_size = strlen(hot_mom_words_it_e); 
                memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], hot_mom_words_it_f, strlen(hot_mom_words_it_f));            
                phys_remind_info_s.data_size += strlen(hot_mom_words_it_f);
            }
            else if(days < 365)
            {//宝宝出生第x天
                //宝宝出生第
                memcpy(phys_remind_info_s.remind_info_buf, hot_mom_words_it_a, strlen(hot_mom_words_it_a));
                phys_remind_info_s.data_size = strlen(hot_mom_words_it_a);
                //days 
                Util_Itoa(days, (char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size]);
                phys_remind_info_s.data_size = strlen((const char *)phys_remind_info_s.remind_info_buf);
                //天
                memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], menstrual_words_it_b, strlen(menstrual_words_it_b));            
                phys_remind_info_s.data_size += strlen(menstrual_words_it_b);
            }
            else
            {//请更新您的个人信息(如果经期信息有效,该信息不提醒)
                memcpy(phys_remind_info_s.remind_info_buf, hot_mom_words_it_g, strlen(hot_mom_words_it_g));
                phys_remind_info_s.data_size = strlen(hot_mom_words_it_g);
            }
        }
    }
    else
    {//非法
        if(hours == 9 && minutes == 0)
        {//09：00信息错误，请更新
            memcpy(phys_remind_info_s.remind_info_buf, menstrual_words_it_n, strlen(menstrual_words_it_n));
            phys_remind_info_s.data_size = strlen(menstrual_words_it_n);  
        }
    }        
}





