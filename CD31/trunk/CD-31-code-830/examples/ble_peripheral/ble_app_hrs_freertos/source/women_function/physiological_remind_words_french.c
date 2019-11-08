/***************************Copyright(c)***********************************
**                       Veepoo Tech
**                  COPYRIGHT (C) 2016-2019
**-----------File Info-----------------------------------------------------
** File        name:     physiological_remind_words_french.c
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
//�¾�����ʾ��
const char menstrual_words_fr_a[] = {0x41,0x75,0x6a,0x6f,0x75,0x72,0x64,0x27,0x68,0x75,0x69,0x20,0x63,0x27,0x65,0x73,0x74,0x20,0x6c,0x65,0x20,  0x00};
const char menstrual_words_fr_a1[] = {0x65,0x20,0x6a,0x6f,0x75,0x72,0x20,0x64,0x65,0x20,0x6c,0x61,0x20,0x70,0xc3,0xa9,0x72,0x69,0x6f,0x64,0x65,  0x00};
const char menstrual_words_fr_b[] = {0x20,0x6a,0x6f,0x75,0x72,0x73,  0x00};
const char menstrual_words_fr_c[] = {0x4e,0x65,0x20,0x73,0x6f,0x79,0x65,0x7a,0x20,0x70,0x61,0x73,0x20,0x61,0x73,0x73,0x69,0x73,0x65,0x20,0x70,0x6f,0x75,0x72,0x20,0x6c,0x6f,0x6e,0x67,0x74,0x65,0x6d,0x70,0x73,  0x00};
const char menstrual_words_fr_d[] = {0x2c,0x52,0x61,0x70,0x70,0x65,0x6c,0x65,0x7a,0x2d,0x76,0x6f,0x75,0x73,0x20,0x64,0x27,0xc3,0xa9,0x63,0x68,0x61,0x6e,0x67,0x65,0x72,0x20,0x64,0x65,0x20,0x73,0x65,0x72,0x76,0x69,0x65,0x74,0x74,0x65,0x73,0x20,0x68,0x79,0x67,0x69,0xc3,0xa8,0x6e,0x65,0x73,  0x00};
const char menstrual_words_fr_e[] = {0x52,0x61,0x70,0x70,0x65,0x6c,0x65,0x7a,0x2d,0x76,0x6f,0x75,0x73,0x20,0x64,0x27,0xc3,0xa9,0x63,0x68,0x61,0x6e,0x67,0x65,0x72,0x20,0x64,0x65,0x20,0x73,0x65,0x72,0x76,0x69,0x65,0x74,0x74,0x65,0x73,0x20,0x68,0x79,0x67,0x69,0xc3,0xa8,0x6e,0x65,0x73,0x20,0x61,0x76,0x61,0x6e,0x74,0x20,0x64,0x65,0x20,0x71,0x75,0x69,0x74,0x74,0x65,0x72,0x20,0x6c,0x65,0x20,0x62,0x75,0x72,0x65,0x61,0x75,  0x00};
const char menstrual_words_fr_e1[] = {0xc3,0x89,0x63,0x68,0x61,0x6e,0x67,0x65,0x72,0x20,0x64,0x65,0x20,0x73,0x65,0x72,0x76,0x69,0x65,0x74,0x74,0x65,0x73,0x20,0x68,0x79,0x67,0x69,0xc3,0xa8,0x6e,0x65,0x73,0x20,0x61,0x76,0x61,0x6e,0x74,0x20,0x64,0x65,0x20,0x76,0x6f,0x75,0x73,0x20,0x63,0x6f,0x75,0x63,0x68,0x65,0x72,0x3b,0x20,0x70,0x72,0x65,0x6e,0x65,0x7a,0x20,0x73,0x6f,0x69,0x6e,0x20,0x64,0x65,0x20,0x76,0x6f,0x74,0x72,0x65,0x20,0x71,0x75,0x61,0x6c,0x69,0x74,0xc3,0xa9,0x20,0x64,0x65,0x20,0x73,0x6f,0x6d,0x6d,0x65,0x69,0x6c,  0x00};

const char menstrual_words_fr_f[] = {0x41,0x75,0x6a,0x6f,0x75,0x72,0x64,0x27,0x68,0x75,0x69,0x20,0x76,0x6f,0x75,0x73,0x20,0xc3,0xaa,0x74,0x65,0x73,0x20,0x64,0x61,0x6e,0x73,0x20,0x6c,0x61,0x20,0x70,0xc3,0xa9,0x72,0x69,0x6f,0x64,0x65,0x20,0x64,0x65,0x20,0x73,0xc3,0xa9,0x63,0x75,0x72,0x69,0x74,0xc3,0xa9,0x2c,0x20,  0x00};
const char menstrual_words_fr_f1[] = {0x20,0x6a,0x6f,0x75,0x72,0x73,0x20,0x6a,0x75,0x73,0x71,0x75,0x27,0xc3,0xa0,0x20,0x6c,0x61,0x20,0x70,0xc3,0xa9,0x72,0x69,0x6f,0x64,0x65,0x20,0x70,0x72,0x6f,0x63,0x68,0x61,0x69,0x6e,0x65,  0x00};
const char menstrual_words_fr_g[] = {0x41,0x75,0x6a,0x6f,0x75,0x72,0x64,0x27,0x68,0x75,0x69,0x20,0x63,0x27,0x65,0x73,0x74,0x20,0x6c,0x65,  0x00};
const char menstrual_words_fr_h[] = {0x65,0x20,0x6a,0x6f,0x75,0x72,0x20,0x64,0x65,0x20,0x6c,0x61,0x20,0x70,0xc3,0xa9,0x72,0x69,0x6f,0x64,0x65,0x20,0x64,0x27,0x6f,0x76,0x75,0x6c,0x61,0x74,0x69,0x6f,0x6e,0x3b,0x20,0x73,0x6f,0x79,0x65,0x7a,0x20,0x70,0x72,0x75,0x64,0x65,0x6e,0x74,0x65,  0x00};
const char menstrual_words_fr_i[] = {0x41,0x75,0x6a,0x6f,0x75,0x72,0x64,0x27,0x68,0x75,0x69,0x20,0x63,0x27,0x65,0x73,0x74,0x20,0x6c,0x65,0x20,0x6a,0x6f,0x75,0x72,0x20,0x64,0x27,0x6f,0x76,0x75,0x6c,0x61,0x74,0x69,0x6f,0x6e,0x3b,0x20,0x73,0x6f,0x79,0x65,0x7a,0x20,0x65,0x78,0x63,0x65,0x70,0x74,0x69,0x6f,0x6e,0x6e,0x65,0x6c,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x20,0x70,0x72,0x75,0x64,0x65,0x6e,0x74,0x65,  0x00};

const char menstrual_words_fr_j1[] = {0x4c,0x61,0x20,0x70,0xc3,0xa9,0x72,0x69,0x6f,0x64,0x65,0x20,0x61,0x72,0x72,0x69,0x76,0x65,0x72,0x61,0x20,0x64,0x61,0x6e,0x73,0x20,  0x00};
const char menstrual_words_fr_j[] = {0x20,0x6a,0x6f,0x75,0x72,0x73,0x3b,0x20,0x70,0x72,0xc3,0xa9,0x70,0x61,0x72,0x65,0x7a,0x2d,0x76,0x6f,0x75,0x73,  0x00};
const char menstrual_words_fr_k[] = {0x53,0x65,0x6c,0x6f,0x6e,0x20,0x6c,0x65,0x20,0x63,0x61,0x6c,0x63,0x75,0x6c,0x20,0x6c,0x61,0x20,0x70,0xc3,0xa9,0x72,0x69,0x6f,0x64,0x65,0x20,0x63,0x6f,0x6d,0x6d,0x65,0x6e,0x63,0x65,0x72,0x61,0x20,0x61,0x75,0x6a,0x6f,0x75,0x72,0x64,0x27,0x68,0x75,0x69,0x3b,0x20,0x72,0x65,0x6e,0x6f,0x75,0x76,0x65,0x6c,0x65,0x7a,0x20,0x6c,0x65,0x73,0x20,0x69,0x6e,0x66,0x6f,0x72,0x6d,0x61,0x74,0x69,0x6f,0x6e,0x73,  0x00};
const char menstrual_words_fr_l[] = {0x4c,0x61,0x20,0x70,0xc3,0xa9,0x72,0x69,0x6f,0x64,0x65,0x20,0x64,0x65,0x20,0x63,0x65,0x20,0x6d,0x6f,0x69,0x73,0x20,0x65,0x73,0x74,0x20,0x72,0x65,0x70,0x6f,0x72,0x74,0xc3,0xa9,0x65,0x20,0x70,0x6f,0x75,0x72,0x20,  0x00};
const char menstrual_words_fr_m[] = {0x20,0x6a,0x6f,0x75,0x72,0x73,0x3b,0x20,0x72,0x65,0x6e,0x6f,0x75,0x76,0x65,0x6c,0x65,0x7a,0x20,0x6c,0x65,0x73,0x20,0x69,0x6e,0x66,0x6f,0x72,0x6d,0x61,0x74,0x69,0x6f,0x6e,0x73,  0x00};
const char menstrual_words_fr_n[] = {0x45,0x72,0x72,0x65,0x75,0x72,0x20,0x64,0x27,0x69,0x6e,0x66,0x6f,0x72,0x6d,0x61,0x74,0x69,0x6f,0x6e,0x73,0x3b,0x20,0x72,0x65,0x6e,0x6f,0x75,0x76,0x65,0x6c,0x65,0x7a,0x2d,0x6c,0x65,0x73,  0x00};
//��������ʾ��
const char pregnant_words_fr_a[] = {0x41,0x75,0x6a,0x6f,0x75,0x72,0x64,0x27,0x68,0x75,0x69,0x20,0x76,0x6f,0x75,0x73,0x20,0xc3,0xaa,0x74,0x65,0x73,0x20,0x64,0x61,0x6e,0x73,0x20,0x6c,0x61,0x20,0x70,0xc3,0xa9,0x72,0x69,0x6f,0x64,0x65,0x20,0x64,0x27,0x6f,0x76,0x75,0x6c,0x61,0x74,0x69,0x6f,0x6e,  0x00};
const char pregnant_words_fr_b[] = {0x41,0x75,0x6a,0x6f,0x75,0x72,0x64,0x27,0x68,0x75,0x69,0x20,0x63,0x27,0x65,0x73,0x74,0x20,0x6c,0x65,0x20,0x6a,0x6f,0x75,0x72,0x20,0x64,0x27,0x6f,0x76,0x75,0x6c,0x61,0x74,0x69,0x6f,0x6e,  0x00};
const char pregnant_words_fr_c[] = {0x2c,0x20,0x67,0x72,0x61,0x6e,0x64,0x65,0x20,0x70,0x6f,0x73,0x73,0x69,0x62,0x69,0x6c,0x69,0x74,0xc3,0xa9,0x20,0x64,0x27,0xc3,0xaa,0x74,0x72,0x65,0x20,0x65,0x6e,0x63,0x65,0x69,0x6e,0x74,0x65,  0x00};
//��������ʾ��
const char gestation_words_fr_a[] = {0x56,0x6f,0x75,0x73,0x20,0xc3,0xaa,0x74,0x65,0x73,0x20,0x65,0x6e,0x63,0x65,0x69,0x6e,0x74,0x65,0x20,0x69,0x6c,0x20,0x79,0x20,0x61,0x20,  0x00};
const char gestation_words_fr_b[] = {0x20,0x73,0x65,0x6d,0x61,0x69,0x6e,0x65,0x73,0x20,  0x00};
const char gestation_words_fr_c[] = {0x3b,0x20,0x61,0x6c,0x6c,0x65,0x7a,0x20,0x63,0x68,0x65,0x7a,0x20,0x6c,0x65,0x20,0x6d,0xc3,0xa9,0x64,0x65,0x63,0x69,0x6e,0x20,0x72,0xc3,0xa9,0x67,0x75,0x6c,0x69,0xc3,0xa8,0x72,0x65,0x6d,0x65,0x6e,0x74,  0x00};
const char gestation_words_fr_d[] = {0x3b,0x20,0x61,0x6c,0x6c,0x65,0x7a,0x20,0x63,0x68,0x65,0x7a,0x20,0x6c,0x65,0x20,0x6d,0xc3,0xa9,0x64,0x65,0x63,0x69,0x6e,0x20,0x72,0xc3,0xa9,0x67,0x75,0x6c,0x69,0xc3,0xa8,0x72,0x65,0x6d,0x65,0x6e,0x74,  0x00};
const char gestation_words_fr_e[] = {0xc3,0x87,0x61,0x20,0x66,0x61,0x69,0x74,0xc2,0xa0,  0x00};
const char gestation_words_fr_e1[] = {0xc2,0xa0,0x6a,0x6f,0x75,0x72,0x73,0xc2,0xa0,0x64,0x65,0x70,0x75,0x69,0x73,0xc2,0xa0,0x6c,0x61,0xc2,0xa0,0x6e,0x61,0x69,0x73,0x73,0x61,0x6e,0x63,0x65,0xc2,0xa0,0x64,0x65,0xc2,0xa0,0x76,0x6f,0x74,0x72,0x65,0x20,0x62,0xc3,0xa9,0x62,0xc3,0xa9,0x3b,0xc2,0xa0,0x61,0x6c,0x6c,0x65,0x7a,0xc2,0xa0,0x63,0x68,0x65,0x7a,0xc2,0xa0,0x6c,0x65,0xc2,0xa0,0x6d,0xc3,0xa9,0x64,0x65,0x63,0x69,0x6e,0xc2,0xa0,0x72,0xc3,0xa9,0x67,0x75,0x6c,0x69,0xc3,0xa8,0x72,0x65,0x6d,0x65,0x6e,0x74,  0x00};
const char gestation_words_fr_f[] = {0x53,0x6f,0x75,0x68,0x61,0x69,0x74,0x65,0x7a,0xc2,0xa0,0xc3,0xa0,0xc2,0xa0,0x6c,0x27,0x61,0x76,0x61,0x6e,0x63,0x65,0xc2,0xa0,0x71,0x75,0x65,0xc2,0xa0,0x6c,0x65,0xc2,0xa0,0x62,0xc3,0xa9,0x62,0xc3,0xa9,0xc2,0xa0,0x76,0x61,0xc2,0xa0,0x6e,0x61,0xc3,0xae,0x74,0x72,0x65,0xc2,0xa0,0x61,0x75,0x6a,0x6f,0x75,0x72,0x64,0x27,0x68,0x75,0x69,0x2c,0xc2,0xa0,0xc3,0xaa,0x74,0x65,0x73,0x2d,0x76,0x6f,0x75,0x73,0xc2,0xa0,0x70,0x72,0xc3,0xaa,0x74,0x65,0x3f,  0x00};
//��������ʾ��
const char hot_mom_words_fr_a[] = {0x4c,0x65,0x20,0x62,0xc3,0xa9,0x62,0xc3,0xa9,0x20,0x61,0x20,  0x00};
const char hot_mom_words_fr_b[] = {0x2c,0x20,0x64,0x61,0x6e,0x73,0x20,0x6c,0x61,0x20,0x70,0xc3,0xa9,0x72,0x69,0x6f,0x64,0x65,0x20,0x64,0x65,0x20,0x63,0x6f,0x6e,0x76,0x61,0x6c,0x65,0x73,0x63,0x65,0x6e,0x63,0x65,0x2c,0x20,0x69,0x6c,0x20,0x66,0x61,0x75,0x74,0x20,0x66,0x61,0x69,0x72,0x65,0x20,0x61,0x74,0x74,0x65,0x6e,0x74,0x69,0x6f,0x6e,0x20,0xc3,0xa0,0x20,0x6c,0x27,0x68,0x79,0x67,0x69,0xc3,0xa8,0x6e,0x65,  0x00};
const char hot_mom_words_fr_c[] = {0x4c,0x65,0x20,0x62,0xc3,0xa9,0x62,0xc3,0xa9,0x20,0x61,0x20,0x73,0x6f,0x6e,0x20,0x70,0x72,0x65,0x6d,0x69,0x65,0x72,0x20,0x6d,0x6f,0x69,0x73,0x20,0x70,0x6c,0x65,0x69,0x6e,0x20,  0x00};
const char hot_mom_words_fr_d[] = {0x4c,0x65,0x20,0x62,0xc3,0xa9,0x62,0xc3,0xa9,0x20,0x61,0x20,0x63,0x65,0x6e,0x74,0x20,0x6a,0x6f,0x75,0x72,0x73,  0x00};
const char hot_mom_words_fr_e[] = {0x4c,0x65,0x20,0x62,0xc3,0xa9,0x62,0xc3,0xa9,0xc2,0xa0,0x61,0xc2,0xa0,0x75,0x6e,0xc2,0xa0,0x61,0x6e,  0x00};
const char hot_mom_words_fr_f[] = {0x2c,0x20,0x63,0x27,0x65,0x73,0x74,0x20,0x75,0x6e,0x20,0x6a,0x6f,0x75,0x72,0x20,0x63,0x6f,0x6d,0x6d,0xc3,0xa9,0x6d,0x6f,0x72,0x61,0x74,0x69,0x66,  0x00};
const char hot_mom_words_fr_g[] = {0x52,0x65,0x6e,0x6f,0x75,0x76,0x65,0x6c,0x65,0x7a,0x20,0x76,0x6f,0x73,0x20,0x69,0x6e,0x66,0x6f,0x72,0x6d,0x61,0x74,0x69,0x6f,0x6e,0x73,  0x00};


/*********************************************************************
* local functions
*/

void Phys_FrenchRemind(uint8_t type, uint16_t days, uint8_t hours, uint8_t minutes)
{
    if(type == PHYS_REMIND_MENSTRUAL_PERIOD)
    {//����
        if(hours == 7 && minutes == 30)
        {//���쾭�ڵ�x�죬�ǵû�������
            //"���쾭�ڵ�"
            memcpy(phys_remind_info_s.remind_info_buf, menstrual_words_fr_a, strlen(menstrual_words_fr_a));
            phys_remind_info_s.data_size = strlen(menstrual_words_fr_a);
            //days 
            Util_Itoa(days, (char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size]);
            phys_remind_info_s.data_size = strlen((const char *)phys_remind_info_s.remind_info_buf);
            //��
            memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], menstrual_words_fr_a1, strlen(menstrual_words_fr_a1));            
            phys_remind_info_s.data_size += strlen(menstrual_words_fr_a1);
            //,�ǵø���������
            memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], menstrual_words_fr_d, strlen(menstrual_words_fr_d));            
            phys_remind_info_s.data_size += strlen(menstrual_words_fr_d);
        }
        else if((hours == 11 || hours == 14) && minutes == 00)
        {//�������,�ǵø���������
            //�������
            memcpy(phys_remind_info_s.remind_info_buf, menstrual_words_fr_c, strlen(menstrual_words_fr_c));
            phys_remind_info_s.data_size = strlen(menstrual_words_fr_c);
            //���ǵø���������
            memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], menstrual_words_fr_d, strlen(menstrual_words_fr_d));            
            phys_remind_info_s.data_size += strlen(menstrual_words_fr_d);
        }
        else if(hours == 17 && minutes == 30)
        {//�°�ǰ�ǵø��������� 
            memcpy(phys_remind_info_s.remind_info_buf, menstrual_words_fr_e, strlen(menstrual_words_fr_e));
            phys_remind_info_s.data_size = strlen(menstrual_words_fr_e);
        }
        else if(hours == 21 && minutes == 30)
        {//˯ǰ����������,ע��˯������
            memcpy(phys_remind_info_s.remind_info_buf, menstrual_words_fr_e1, strlen(menstrual_words_fr_e1));
            phys_remind_info_s.data_size = strlen(menstrual_words_fr_e1);
        }
    }
    else if(type == PHYS_REMIND_SAFETY_PERIOD)
    {//��ȫ��
        if(hours == 9 && minutes == 0)
        {//���찲ȫ�ڣ����´ξ���X��
            //���찲ȫ�ڣ����´ξ���
            memcpy(phys_remind_info_s.remind_info_buf, menstrual_words_fr_f, strlen(menstrual_words_fr_f));
            phys_remind_info_s.data_size = strlen(menstrual_words_fr_f);
            //days ��
            Util_Itoa(days, (char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size]);
            phys_remind_info_s.data_size = strlen((const char *)phys_remind_info_s.remind_info_buf);
            //��
            memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], menstrual_words_fr_f1, strlen(menstrual_words_fr_f1));            
            phys_remind_info_s.data_size += strlen(menstrual_words_fr_f1);
        }
    }
    else if(type == PHYS_REMIND_SAFETY_PERIOD1)
    {//��ȫ��
        if(hours == 9 && minutes == 0)
        {//X�����뾭��(<=3��)��������׼��
            memcpy((char *)&phys_remind_info_s.remind_info_buf[0], menstrual_words_fr_j1, strlen(menstrual_words_fr_j1));            
            phys_remind_info_s.data_size += strlen(menstrual_words_fr_j1); 
            //days 
            Util_Itoa(days, (char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size]);
            phys_remind_info_s.data_size = strlen((const char *)phys_remind_info_s.remind_info_buf);
            //�����뾭�ڣ�������׼��
            memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], menstrual_words_fr_j, strlen(menstrual_words_fr_j));            
            phys_remind_info_s.data_size += strlen(menstrual_words_fr_j);   
        }
    }
    else if(type == PHYS_REMIND_OVIPOSIT_PERIOD)
    {//������
        if(hours == 9 && minutes == 0)
        {//�����������ڵ�X�죬С��Ŷ
            //�����������ڵ�
            memcpy(phys_remind_info_s.remind_info_buf, menstrual_words_fr_g, strlen(menstrual_words_fr_g));
            phys_remind_info_s.data_size = strlen(menstrual_words_fr_g);
            //days 
            Util_Itoa(days, (char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size]);
            phys_remind_info_s.data_size = strlen((const char *)phys_remind_info_s.remind_info_buf);

            //�죬С��Ŷ
            memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], menstrual_words_fr_h, strlen(menstrual_words_fr_h));            
            phys_remind_info_s.data_size += strlen(menstrual_words_fr_h);
        }
    }
    else if(type == PHYS_REMIND_OVIPOSIT_DAY)
    {//������
        if(hours == 9 && minutes == 0)
        {//�����������գ�Ҫ����С��Ŷ
            memcpy(phys_remind_info_s.remind_info_buf, menstrual_words_fr_i, strlen(menstrual_words_fr_i));
            phys_remind_info_s.data_size = strlen(menstrual_words_fr_i);
        }
    }
    else if(type == PHYS_REMIND_OVIPOSIT_PERIOD1)
    {//������������
        if(hours == 9 && minutes == 0)
        {//���������ڣ����м��ʽϴ�
            //���������ڣ�
            memcpy(phys_remind_info_s.remind_info_buf, pregnant_words_fr_a, strlen(pregnant_words_fr_a));
            phys_remind_info_s.data_size = strlen(pregnant_words_fr_a);
            //���м��ʽϴ�
            memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], pregnant_words_fr_c, strlen(pregnant_words_fr_c));            
            phys_remind_info_s.data_size += strlen(pregnant_words_fr_c);
        }
    }
    else if(type == PHYS_REMIND_OVIPOSIT_DAY1)
    {//������������
        if(hours == 9 && minutes == 0)
        {//���������գ����м��ʽϴ�
            //���������գ�
            memcpy(phys_remind_info_s.remind_info_buf, pregnant_words_fr_b, strlen(pregnant_words_fr_b));
            phys_remind_info_s.data_size = strlen(pregnant_words_fr_b);
            //���м��ʽϴ�
            memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], pregnant_words_fr_c, strlen(pregnant_words_fr_c));            
            phys_remind_info_s.data_size += strlen(pregnant_words_fr_c);
        }
    }
    else if(type == PHYS_REMIND_FORECAST_MENSTRUAL_PERIOD)
    {//Ԥ�⾭��
        if(hours == 7 && minutes == 30 && days == 1)
        {//Ԥ�������뾭�ڣ��������Ϣ
            memcpy(phys_remind_info_s.remind_info_buf, menstrual_words_fr_k, strlen(menstrual_words_fr_k));
            phys_remind_info_s.data_size = strlen(menstrual_words_fr_k);
        } 
        else if(hours == 9 && minutes == 0 && days > 1)
        {//�����¾��ӳ�X�죬�������Ϣ
            //�����¾��ӳ�
            memcpy(phys_remind_info_s.remind_info_buf, menstrual_words_fr_l, strlen(menstrual_words_fr_l));
            phys_remind_info_s.data_size = strlen(menstrual_words_fr_l);
            //days 
            Util_Itoa(days, (char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size]);
            phys_remind_info_s.data_size = strlen((const char *)phys_remind_info_s.remind_info_buf);
            //�죬�������Ϣ
            memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], menstrual_words_fr_m, strlen(menstrual_words_fr_m));            
            phys_remind_info_s.data_size += strlen(menstrual_words_fr_m);
        } 
    }
    else if(type == PHYS_REMIND_PREGNANCY_ONE)
    {//���е�һ�׶Σ�1~3���£�
        if(hours == 9 && minutes == 0)
        {//���ѻ���X��X�죬�붨�������
            //���ѻ���
            memcpy(phys_remind_info_s.remind_info_buf, gestation_words_fr_a, strlen(gestation_words_fr_a));
            phys_remind_info_s.data_size = strlen(gestation_words_fr_a);
            //n��
            if(days / 7 != 0)
            {
                //days/7 
                Util_Itoa(days / 7, (char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size]);
                phys_remind_info_s.data_size = strlen((const char *)phys_remind_info_s.remind_info_buf);
                memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], gestation_words_fr_b, strlen(gestation_words_fr_b));            
                phys_remind_info_s.data_size += strlen(gestation_words_fr_b);
            }
            //n��
            if(days % 7 != 0)
            {
                //days%7 
                Util_Itoa(days % 7, (char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size]);
                phys_remind_info_s.data_size = strlen((const char *)phys_remind_info_s.remind_info_buf);
                memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], menstrual_words_fr_b, strlen(menstrual_words_fr_b));            
                phys_remind_info_s.data_size += strlen(menstrual_words_fr_b);
            }
            //,�붨�������
            memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], gestation_words_fr_c, strlen(gestation_words_fr_c));            
            phys_remind_info_s.data_size += strlen(gestation_words_fr_c);
        } 
    }
    else if(type == PHYS_REMIND_PREGNANCY_TWO)
    {//���еڶ��׶Σ�3~6���£�
        if(hours == 9 && minutes == 0)
        {//09��00���ѻ���X��X�죬�뱣�ֺ�����
            //���ѻ���
            memcpy(phys_remind_info_s.remind_info_buf, gestation_words_fr_a, strlen(gestation_words_fr_a));
            phys_remind_info_s.data_size = strlen(gestation_words_fr_a);
            //n��
            if(days / 7 != 0)
            {
                //days/7 
                Util_Itoa(days / 7, (char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size]);
                phys_remind_info_s.data_size = strlen((const char *)phys_remind_info_s.remind_info_buf);
                memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], gestation_words_fr_b, strlen(gestation_words_fr_b));            
                phys_remind_info_s.data_size += strlen(gestation_words_fr_b);
            }
            //n��
            if(days % 7 != 0)
            {
                //days%7 
                Util_Itoa(days % 7, (char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size]);
                phys_remind_info_s.data_size = strlen((const char *)phys_remind_info_s.remind_info_buf);
                memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], menstrual_words_fr_b, strlen(menstrual_words_fr_b));            
                phys_remind_info_s.data_size += strlen(menstrual_words_fr_b);
            }
            //,�붨�������
            memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], gestation_words_fr_d, strlen(gestation_words_fr_d));            
            phys_remind_info_s.data_size += strlen(gestation_words_fr_d);
        }
    }
    else if(type == PHYS_REMIND_PREGNANCY_THU)
    {//���е����׶Σ�6����~����ǰ��
        if(hours == 9 && minutes == 0)
        {//09��00�౦������X�죬�뱣�ֺ�����
            //�౦������
            memcpy(phys_remind_info_s.remind_info_buf, gestation_words_fr_e, strlen(gestation_words_fr_e));
            phys_remind_info_s.data_size = strlen(gestation_words_fr_e);
            //n��
            Util_Itoa(days, (char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size]);
            phys_remind_info_s.data_size = strlen((const char *)phys_remind_info_s.remind_info_buf);
            memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], gestation_words_fr_e1, strlen(gestation_words_fr_e1));            
            phys_remind_info_s.data_size += strlen(gestation_words_fr_e1);
            
//            //,�붨�������
//            memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], gestation_words_fr_d, strlen(gestation_words_fr_d));            
//            phys_remind_info_s.data_size += strlen(gestation_words_fr_d);
        }
    }
    else if(type == PHYS_REMIND_PREGNANCY_BIRTH)
    {//���е��Ľ׶Σ�����������
        if(hours == 9 && minutes == 0)
        {//Ԥף�������쵮����׼��������
            memcpy(phys_remind_info_s.remind_info_buf, gestation_words_fr_f, strlen(gestation_words_fr_f));
            phys_remind_info_s.data_size = strlen(gestation_words_fr_f);
        }
    }
    else if(type == PHYS_REMIND_PREGNANCY_ERROR)
    {//������Ϣ���ڣ�������Ϣ
        if(hours == 9 && minutes == 0)
        {//09��00��������ĸ�����Ϣ(���������Ϣ��Ч,����Ϣ������)
            memcpy(phys_remind_info_s.remind_info_buf, hot_mom_words_fr_g, strlen(hot_mom_words_fr_g));
            phys_remind_info_s.data_size = strlen(hot_mom_words_fr_g);
        }
    }
    else if(type == PHYS_REMIND_BABY_BORN)
    {//����������
        if(hours == 9 && minutes == 30)
        {
            if(days <= 10)
            {//����������X�죬�ָ���ע������
                //����������
                memcpy(phys_remind_info_s.remind_info_buf, hot_mom_words_fr_a, strlen(hot_mom_words_fr_a));
                phys_remind_info_s.data_size = strlen(hot_mom_words_fr_a);
                //days 
                Util_Itoa(days, (char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size]);
                phys_remind_info_s.data_size = strlen((const char *)phys_remind_info_s.remind_info_buf);
                //��
                memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], menstrual_words_fr_b, strlen(menstrual_words_fr_b));            
                phys_remind_info_s.data_size += strlen(menstrual_words_fr_b);
                //����ָ���ע������
                memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], hot_mom_words_fr_b, strlen(hot_mom_words_fr_b));            
                phys_remind_info_s.data_size += strlen(hot_mom_words_fr_b);
            }
            else if(days == 30)
            {//��������(30��)�ˣ�ֵ�ü����һ��              
                memcpy(phys_remind_info_s.remind_info_buf, hot_mom_words_fr_c, strlen(hot_mom_words_fr_c));
                phys_remind_info_s.data_size = strlen(hot_mom_words_fr_c);  
                memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], hot_mom_words_fr_f, strlen(hot_mom_words_fr_f));            
                phys_remind_info_s.data_size += strlen(hot_mom_words_fr_f);
            }
            else if(days == 100)
            {//����һ���죬ֵ�ü����һ��
                memcpy(phys_remind_info_s.remind_info_buf, hot_mom_words_fr_d, strlen(hot_mom_words_fr_d));
                phys_remind_info_s.data_size = strlen(hot_mom_words_fr_d); 
                memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], hot_mom_words_fr_f, strlen(hot_mom_words_fr_f));            
                phys_remind_info_s.data_size += strlen(hot_mom_words_fr_f);
            }
            else if(days == 365)
            {//����һ���ֵ꣬�ü����һ��
                memcpy(phys_remind_info_s.remind_info_buf, hot_mom_words_fr_e, strlen(hot_mom_words_fr_e));
                phys_remind_info_s.data_size = strlen(hot_mom_words_fr_e); 
                memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], hot_mom_words_fr_f, strlen(hot_mom_words_fr_f));            
                phys_remind_info_s.data_size += strlen(hot_mom_words_fr_f);
            }
            else if(days < 365)
            {//����������x��
                //����������
                memcpy(phys_remind_info_s.remind_info_buf, hot_mom_words_fr_a, strlen(hot_mom_words_fr_a));
                phys_remind_info_s.data_size = strlen(hot_mom_words_fr_a);
                //days 
                Util_Itoa(days, (char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size]);
                phys_remind_info_s.data_size = strlen((const char *)phys_remind_info_s.remind_info_buf);
                //��
                memcpy((char *)&phys_remind_info_s.remind_info_buf[phys_remind_info_s.data_size], menstrual_words_fr_b, strlen(menstrual_words_fr_b));            
                phys_remind_info_s.data_size += strlen(menstrual_words_fr_b);
            }
            else
            {//��������ĸ�����Ϣ(���������Ϣ��Ч,����Ϣ������)
                memcpy(phys_remind_info_s.remind_info_buf, hot_mom_words_fr_g, strlen(hot_mom_words_fr_g));
                phys_remind_info_s.data_size = strlen(hot_mom_words_fr_g);
            }
        }
    }
    else
    {//�Ƿ�
        if(hours == 9 && minutes == 0)
        {//09��00��Ϣ���������
            memcpy(phys_remind_info_s.remind_info_buf, menstrual_words_fr_n, strlen(menstrual_words_fr_n));
            phys_remind_info_s.data_size = strlen(menstrual_words_fr_n);  
        }
    }        
}




