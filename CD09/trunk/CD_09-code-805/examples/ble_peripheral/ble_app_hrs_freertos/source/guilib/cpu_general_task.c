/***************************Copyright(c)***********************************
**                       Veepoo Tech
**                  COPYRIGHT (C) 2016-2019
**-----------File Info-----------------------------------------------------
** File        name:     cpu_general_task.c
** Last modified Date:   2017-08-01
** Last SYS_VERSION:     0.0.0
** Descriptions:            
**-------------------------------------------------------------------------
** Created  by:          WJ
** Created  date:        2017-08-01
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
#include "cpu_general_task.h"
#include "gui_page_display.h"
#include "gui_data_inteface.h"
#include "gui_thread.h"

#include "app_type.h"

#define GUI_DISPLAY_TIME_3S         3 * 4
#define GUI_DISPLAY_TIME_4S         4 * 4
#define GUI_DISPLAY_TIME_5S         5 * 4
#define GUI_DISPLAY_TIME_HEART     240//60
#define GUI_DISPLAY_TIME_BP         280//70


static uint8_t task_interval_cnt = 0xFF;     //���ļ�������������ж��Ƿ�ˢ��UI�Ͷ�ͼ�л�

extern uint8_t  posture_to_bright_flg1;
extern low_energe_protocol_data_t low_energe_protocol_data;

/****************************************************************
** Function name:           Cpu_TaskClearIntervalCnt
** Descriptions:            //����ˢ�¼��������
** input parameters:        ��
** output parameters:       ��
** Returned value:          ��
** Created by:              WJ              
** Created Date:            2017-08-12
*****************************************************************/ 
void Cpu_TaskClearIntervalCnt(void)
{
    task_interval_cnt = 0xFF;
}

/****************************************************************
** Function name:           Cpu_TaskMain
** Descriptions:            �����洦��
** input parameters:        p_controller��UI�¼�����״̬��p_gui����ʾ��صĲ���
** output parameters:       ��
** Returned value:          ��
** Created by:              WJ              
** Created Date:            2017-08-12
*****************************************************************/ 
void Cpu_TaskMain(cpu_task_controller_t *p_controller, gui_controller_t *p_gui)
{
    uint32_t all_step = 0;
	uint8_t time_format = 0;
    uint8_t year = 0;
    uint8_t month = 0;
    uint8_t day = 0;
	uint8_t hour = 0;
 	uint8_t minute = 0;
    uint8_t week = 0;
    uint8_t battery_level = 0;
    uint8_t battery_charging = 0;
    uint8_t ble_con_state = 0;
    static uint8_t last_minute = 0;
    uint8_t phys_menstrual = 0;
//    uint8_t weather = 0;
	if(p_controller->init == 1)
	{ 
        TASK_ENTRY_INIT(p_controller, 5 * 4);
        p_controller->key_press_hold = 1; 
		
		//!ע��:�˴�����������Ϊ������ˢ�¶���,������ܻ���ʱ
        task_interval_cnt = 0xFF;
        last_minute = 0xFF;
		p_gui->page_frame_counter = 0;
		Gui_PageClearBackground(p_gui->start_column, p_gui->start_page, p_gui->column_size, p_gui->page_size);
	} 
    
    //300ms��ˢ�¼��
    p_gui->updata_ui_interval = 250;//300; 
    if(posture_to_bright_flg1 == 1 
       && low_energe_protocol_data.state == 1
       && p_gui->page_frame_counter >= low_energe_protocol_data.posture_time_value / 2)
    {
        //��������ʱ��
        posture_to_bright_flg1 = 0;
        //ZZZ.20190722.�͹���ʱ������3�룬����δ��ʾmac��Ϩ�����������ʱ�а���ʱ���˳���
        if(!Gui_DataBspKeyPressedState())
        {
            Gui_ThreadTaskClear();
        }
       
        return;
    }
    
    else if(low_energe_protocol_data.state == 1 
      && low_energe_protocol_data.normal_light_time_value != 0
      && p_gui->page_frame_counter >= low_energe_protocol_data.normal_light_time_value /2 )
    {
         //ZZZ.20190722.�͹���ʱ������3�룬����δ��ʾmac��Ϩ�����������ʱ�а���ʱ���˳���
        if(!Gui_DataBspKeyPressedState())
        {
            Gui_ThreadTaskClear();
        }
        
        return;
    }
    
	if(task_interval_cnt != p_gui->page_frame_counter)
	{
        Gui_ThreadSetDisPlayArea(0, 0, 80, 160);
        task_interval_cnt = p_gui->page_frame_counter; 
        hour = Gui_DataGetSystemTimeHour(); 
        minute = Gui_DataGetSystemTimeMinute();
        week = Gui_DataGetSystemTimeWeek();
        time_format = Gui_DataTimeFormatDisplay();
        Gui_DataGetSystemTimeDate(&year, &month, &day);
        ble_con_state = Gui_DataGetBleState();
        battery_charging = Gui_DataGetBatteryLevelAndState(&battery_level);
        phys_menstrual = Gui_DataGetPhysMenstrualPeriodType();
        
        all_step = Gui_DataGetAllSteps();
        Gui_PageMainAssisant(task_interval_cnt, all_step, ble_con_state, time_format, 
                             battery_charging, battery_level, display_language, phys_menstrual);
        if(last_minute != minute || task_interval_cnt == 0)
        {
            last_minute = minute;
            Gui_PageMainDateHour(month, day, hour, minute, week, display_language, time_format, 0, 0, 0);
        } 
	}
}

/****************************************************************
** Function name:           Cpu_TaskStep
** Descriptions:            �Ʋ����洦��
** input parameters:        p_controller��UI�¼�����״̬��p_gui����ʾ��صĲ���
** output parameters:       ��
** Returned value:          ��
** Created by:              WJ              
** Created Date:            2017-08-12
*****************************************************************/ 
void Cpu_TaskStep(cpu_task_controller_t *p_controller, gui_controller_t *p_gui)
{	
    uint32_t all_step = 0;
//    uint32_t distance_m = 0;
//    float distance_km = 0.0f;
//    float distance_mile = 0.0f;
    
	if(p_controller->init == 1)
	{ 
        TASK_ENTRY_INIT(p_controller, GUI_DISPLAY_TIME_5S); 
        p_controller->key_press_hold = 0;
        
		//!ע��:�˴�����������Ϊ������ˢ�¶���,������ܻ���ʱ
        task_interval_cnt = 0xFF;
		p_gui->page_frame_counter = 0;
		
		//�������ͼ		
		Gui_PageClearBackground(p_gui->start_column, p_gui->start_page, p_gui->column_size, p_gui->page_size);
	}
	 
    //300ms��ˢ�¼��
    p_gui->updata_ui_interval = 200;   
	if(task_interval_cnt != p_gui->page_frame_counter)
	{
        Gui_ThreadSetDisPlayArea(0, 0, 80, 160);
        task_interval_cnt = p_gui->page_frame_counter; 
        all_step = Gui_DataGetAllSteps();
              
	    Gui_PageStep(all_step, Gui_DataGetSportsToMarkProgress(), task_interval_cnt, display_language);    
	}      
}

/****************************************************************
** Function name:           Cpu_TaskDistance
** Descriptions:            ������洦��
** input parameters:        p_controller��UI�¼�����״̬��p_gui����ʾ��صĲ���
** output parameters:       ��
** Returned value:          ��
** Created by:              WJ              
** Created Date:            2017-08-12
*****************************************************************/ 
void Cpu_TaskDistance(cpu_task_controller_t *p_controller, gui_controller_t *p_gui)
{	
    uint8_t distance_dis_unit = 0;
    uint32_t distance_m = 0;
    float distance_km = 0.0f;
    float distance_mile = 0.0f;
    
	if(p_controller->init == 1)
	{ 
        TASK_ENTRY_INIT(p_controller,GUI_DISPLAY_TIME_5S); 
		p_controller->key_press_hold = 0;
		
		//!ע��:�˴�����������Ϊ������ˢ�¶���,������ܻ���ʱ
        task_interval_cnt = 0xFF;
		p_gui->page_frame_counter = 0;
		
		//�������ͼ		
		Gui_PageClearBackground(p_gui->start_column, p_gui->start_page, p_gui->column_size, p_gui->page_size);
	}
 
    //300ms��ˢ�¼��
    p_gui->updata_ui_interval = 200;//300; 
    
//    if(low_energe_protocol_data.state == 1 
//      && low_energe_protocol_data.normal_light_time_value != 0
//      && p_gui->page_frame_counter >= low_energe_protocol_data.normal_light_time_value)
//    {
//        Gui_ThreadTaskClear();
//        return;
//    }
//    
    
	if(task_interval_cnt != p_gui->page_frame_counter)
	{
        Gui_ThreadSetDisPlayArea(0, 0, 80, 160);
        task_interval_cnt = p_gui->page_frame_counter; 
        Gui_DataGetDistanceValue(&distance_m, &distance_km, &distance_mile);
        distance_dis_unit = Gui_DataDistanceIsKM(); 
        if(distance_dis_unit == 1 || display_language == 0)
        {
            Gui_PageDistance(distance_km, task_interval_cnt, 0, display_language);
        }
        else
        {
            Gui_PageDistance(distance_mile, task_interval_cnt, 1, display_language);
        }
        
	}      
}

/****************************************************************
** Function name:           Cpu_TaskCalories
** Descriptions:            ��·����洦��
** input parameters:        p_controller��UI�¼�����״̬��p_gui����ʾ��صĲ���
** output parameters:       ��
** Returned value:          ��
** Created by:              WJ              
** Created Date:            2017-08-12
*****************************************************************/ 
void Cpu_TaskCalories(cpu_task_controller_t *p_controller, gui_controller_t *p_gui)
{	   
	if(p_controller->init == 1)
	{ 
        TASK_ENTRY_INIT(p_controller, GUI_DISPLAY_TIME_5S); 
		p_controller->key_press_hold = 0;
		
		//!ע��:�˴�����������Ϊ������ˢ�¶���,������ܻ���ʱ
        task_interval_cnt = 0xFF;
		p_gui->page_frame_counter = 0;
		
		//�������ͼ		
		Gui_PageClearBackground(p_gui->start_column, p_gui->start_page, p_gui->column_size, p_gui->page_size);
	}
 
    //250ms��ˢ�¼��
    p_gui->updata_ui_interval = 200;//300; 
    
//    if(low_energe_protocol_data.state == 1 
//      && low_energe_protocol_data.normal_light_time_value != 0
//      && p_gui->page_frame_counter >= low_energe_protocol_data.normal_light_time_value)
//    {
//        Gui_ThreadTaskClear();
//        return;
//    }
    
	if(task_interval_cnt != p_gui->page_frame_counter)
	{
        Gui_ThreadSetDisPlayArea(0, 0, 80, 160);
        task_interval_cnt = p_gui->page_frame_counter; 
        Gui_PageCalories(Gui_DataGetCalorie(), task_interval_cnt, display_language); 
	}      
}

/****************************************************************
** Function name:           Cpu_TaskRun
** Descriptions:            �˶����洦��
** input parameters:        p_controller��UI�¼�����״̬��p_gui����ʾ��صĲ���
** output parameters:       ��
** Returned value:          ��
** Created by:              WJ              
** Created Date:            2017-08-12
*****************************************************************/ 
void Cpu_TaskRun(cpu_task_controller_t *p_controller, gui_controller_t *p_gui)
{
    uint8_t movement_mode_busy = 0;
    static uint8_t last_state = 0;
    uint8_t  uint_type = 0;
    uint8_t  heart = 0;
    uint16_t seconds = 0;
    float calories = 0.0f;
    float distance_m = 0.0f;
    uint32_t tcalories = 0;
    uint32_t tdistance_m = 0;
    uint32_t all_step = 0;

	if(p_controller->init == 1)
	{ 
        if(Gui_DataMovementModeIsBusy())
        {
            TASK_ENTRY_INIT(p_controller, GUI_DISPLAY_TIME_5S);
        }
        else
        {
            TASK_ENTRY_INIT(p_controller, GUI_DISPLAY_TIME_5S);
        }
        p_controller->key_press_hold = 1;  

		//!ע��:�˴�����������Ϊ������ˢ�¶���,������ܻ���ʱ
        task_interval_cnt = 0xFF;
		p_gui->page_frame_counter = 0;
        last_state = 0;
		//�������ͼ		
		Gui_PageClearBackground(p_gui->start_column, p_gui->start_page, p_gui->column_size, p_gui->page_size);
	} 
 
    //200ms��ˢ�¼��
    p_gui->updata_ui_interval = 200;//100; 
    
//    if(low_energe_protocol_data.state == 1 
//      && low_energe_protocol_data.normal_light_time_value != 0
//      && p_gui->page_frame_counter >= low_energe_protocol_data.normal_light_time_value)
//    {
//        Gui_ThreadTaskClear();
//        return;
//    }
//    
	if(task_interval_cnt != p_gui->page_frame_counter)
	{
        Gui_ThreadSetDisPlayArea(0, 0, 80, 160);
        task_interval_cnt = p_gui->page_frame_counter; 
        movement_mode_busy = Gui_DataMovementModeIsBusy(); 
        if(movement_mode_busy == 1)
        { 
            p_gui->updata_ui_interval = 100;
            Gui_DataGetMovementModeUiData(&seconds, &heart, &tdistance_m, &tcalories, &all_step);

            calories = tcalories;
            if(Gui_DataDistanceIsKM() == 0 && display_language != 0)
            {
                distance_m = ((uint32_t)((tdistance_m / 1000.0f) * 1000)) / 1000.0f;//������λС����
                distance_m = distance_m * (0.62138f);
                uint_type = 1;
            } 
            else 
            {
                distance_m = tdistance_m / 1000.0f;
                uint_type = 0;
            }
            calories = calories / 1000.0f; 
            Gui_PageRunModeData(seconds, heart, distance_m, calories, all_step, uint_type, display_language);
            last_state = 1;
        }
        else            
        {
            if(last_state == 1)
            {
                last_state = 0;
                Gui_PageClearBackground(p_gui->start_column, p_gui->start_page, p_gui->column_size, p_gui->page_size);
            }
            Gui_PageRunMode(task_interval_cnt, display_language);
        }        
	}    
}

/****************************************************************
** Function name:           Cpu_TaskBP
** Descriptions:            Ѫѹ���洦��
** input parameters:        p_controller��UI�¼�����״̬��p_gui����ʾ��صĲ���
** output parameters:       ��
** Returned value:          ��
** Created by:              WJ              
** Created Date:            2017-08-12
*****************************************************************/ 
void Cpu_TaskBP(cpu_task_controller_t *p_controller, gui_controller_t *p_gui)
{
    static uint8_t bp_sp = 0;
    static uint8_t bp_dp = 0;
    static uint8_t test_mode = 0;
    static uint8_t test_state = 0;
 
	if(p_controller->init == 1)
	{ 
        TASK_ENTRY_INIT(p_controller, GUI_DISPLAY_TIME_BP);  
        Gui_DataOpenBPOpreation();   //��Ѫѹ 
		p_controller->key_press_hold = 0;

		//!ע��:�˴�����������Ϊ������ˢ�¶���,������ܻ���ʱ
        task_interval_cnt = 0xFF;      
		p_gui->page_frame_counter = 0;

		//�������ͼ		
		Gui_PageClearBackground(p_gui->start_column, p_gui->start_page, p_gui->column_size, p_gui->page_size);
        bp_sp = 0;
        bp_dp = 0;
        test_mode = 0;
        test_state = 0;
	} 
 
    //350ms��ˢ�¼��
    p_gui->updata_ui_interval = 300;
    
	if(task_interval_cnt != p_gui->page_frame_counter)
	{
        Gui_ThreadSetDisPlayArea(0, 0, 80, 160); 
        if(!Gui_DataGetWearDectState() && p_controller->init != 1 && test_state == 0)
        {
            //�����жϣ�����
            Gui_ThreadTaskClear();
            // JSH.20181122.�������Ѫѹ�����ͨ��������Ϣ���ͣ����ͽ�����������������
            return;
        }       
        task_interval_cnt = p_gui->page_frame_counter;  
        if((task_interval_cnt != 0 && task_interval_cnt != 0xFF) && test_state != 0)
        {
            return;
        }
        
        if(test_state == 0 )
        {
            Gui_DataGetBPdata(&bp_sp, &bp_dp, &test_mode, &test_state);
            if(test_state != 0)
            {
                /* ���Ѫѹ������ɻ���������ʵƲ����������� */
                Gui_DataCloseBPOpreation();	
                Gui_PageClearBackground(p_gui->start_column, p_gui->start_page, p_gui->column_size, p_gui->page_size);       
                task_interval_cnt = 0;
            }
        }
                  
        Gui_PageBP(task_interval_cnt, bp_sp, bp_dp, test_mode, test_state);
	} 
}

/****************************************************************
** Function name:           Cpu_TaskHeart
** Descriptions:            ���ʽ��洦��
** input parameters:        p_controller��UI�¼�����״̬��p_gui����ʾ��صĲ���
** output parameters:       ��
** Returned value:          ��
** Created by:              WJ              
** Created Date:            2017-08-12
*****************************************************************/ 
void Cpu_TaskHeart(cpu_task_controller_t *p_controller, gui_controller_t *p_gui)
{
    static uint8_t heart = 0;
        
	if(p_controller->init == 1)
	{ 
        TASK_ENTRY_INIT(p_controller, GUI_DISPLAY_TIME_HEART);
        Gui_DataOpenHeartOpreation();   //������ 
		
		p_controller->key_press_hold = 0;
		heart = 0;

		//!ע��:�˴�����������Ϊ������ˢ�¶���,������ܻ���ʱ
        task_interval_cnt = 0xFF;  
		p_gui->page_frame_counter = 0;

		//�������ͼ		
		Gui_PageClearBackground(p_gui->start_column, p_gui->start_page, p_gui->column_size, p_gui->page_size);
	}  
    //ˢ�¼��
    p_gui->updata_ui_interval = 350; 
    
	if(task_interval_cnt != p_gui->page_frame_counter)
	{
        Gui_ThreadSetDisPlayArea(0, 0, 80, 160);
        task_interval_cnt = p_gui->page_frame_counter;  
        if(!Gui_DataGetWearDectState() && p_controller->init != 1)
        {
            //�����жϣ�����
            Gui_ThreadTaskClear();
            // JSH.20181122.�������Ѫѹ�����ͨ��������Ϣ���ͣ����ͽ�����������������
            return;
        }
        if(Gui_DataGetHeart() != 0)
        {
            heart = Gui_DataGetHeart();
        } 
		Gui_PageHeart(task_interval_cnt, heart);
	}
}

/****************************************************************
** Function name:           Cpu_TaskSleep
** Descriptions:            ˯�߽��洦��
** input parameters:        p_controller��UI�¼�����״̬��p_gui����ʾ��صĲ���
** output parameters:       ��
** Returned value:          ��
** Created by:              WJ              
** Created Date:            2017-08-12
*****************************************************************/ 
void Cpu_TaskSleep(cpu_task_controller_t *p_controller, gui_controller_t *p_gui)
{ 
	if(p_controller->init == 1)
	{ 
        TASK_ENTRY_INIT(p_controller, GUI_DISPLAY_TIME_5S);
        p_controller->key_press_hold = 1; 
		
		//!ע��:�˴�����������Ϊ������ˢ�¶���,������ܻ���ʱ
        task_interval_cnt = 0xFF;  
		p_gui->page_frame_counter = 0;
		
		//�������ͼ
		Gui_PageClearBackground(p_gui->start_column, p_gui->start_page, p_gui->column_size, p_gui->page_size);
	} 
    
    //300ms��ˢ�¼��
    p_gui->updata_ui_interval = 200;//300; 
    
    
    
//    if(low_energe_protocol_data.state == 1 
//      && low_energe_protocol_data.normal_light_time_value != 0
//      && p_gui->page_frame_counter >= low_energe_protocol_data.normal_light_time_value)
//    {
//        Gui_ThreadTaskClear();
//        return;
//    }
//    
//    
	if(task_interval_cnt != p_gui->page_frame_counter)
	{
        Gui_ThreadSetDisPlayArea(0, 0, 80, 160);
        task_interval_cnt = p_gui->page_frame_counter; 
        Gui_PageSleep(task_interval_cnt, Gui_DataGetSleepTime(), display_language); 
	}
}

/****************************************************************
** Function name:           Cpu_TaskFindPhone
** Descriptions:            ���ֻ����洦��
** input parameters:        p_controller��UI�¼�����״̬��p_gui����ʾ��صĲ���
** output parameters:       ��
** Returned value:          ��
** Created by:              WJ              
** Created Date:            2017-08-12
*****************************************************************/ 
void Cpu_TaskFindPhone(cpu_task_controller_t *p_controller,gui_controller_t *p_gui)
{
    if(p_controller->init == 1)
	{ 
        TASK_ENTRY_INIT(p_controller, GUI_DISPLAY_TIME_5S);
        p_controller->key_press_hold = 1; 
        
        //!ע��:�˴�����������Ϊ������ˢ�¶���,������ܻ���ʱ
        task_interval_cnt = 0xFF;
		p_gui->page_frame_counter = 0;
		
		//�������ͼ
		Gui_PageClearBackground(p_gui->start_column, p_gui->start_page, p_gui->column_size, p_gui->page_size);
	} 
    
    //250ms��ˢ�¼��
    p_gui->updata_ui_interval = 250; 
    
	if(task_interval_cnt != p_gui->page_frame_counter)
	{
        Gui_ThreadSetDisPlayArea(10, 50, 70, 110);
        task_interval_cnt = p_gui->page_frame_counter; 
        Gui_PageFindPhone(p_gui->animation_enable, task_interval_cnt);//(p_gui->animation_enable, task_interval_cnt);
        if(((task_interval_cnt % 20) == 0) && (p_gui->animation_enable == 1))
        {
            Gui_DataFindSendData();
        } 
	} 
}

/****************************************************************
** Function name:           Cpu_TaskPowerOff
** Descriptions:            �ػ����洦��
** input parameters:        p_controller��UI�¼�����״̬��p_gui����ʾ��صĲ���
** output parameters:       ��
** Returned value:          ��
** Created by:              WJ              
** Created Date:            2017-08-12
*****************************************************************/ 
void Cpu_TaskPowerOff(cpu_task_controller_t *p_controller, gui_controller_t *p_gui)
{   
	if(p_controller->init == 1)
	{ 
        TASK_ENTRY_INIT(p_controller, GUI_DISPLAY_TIME_5S);
        p_controller->key_press_hold = 1; 
		
		//!ע��:�˴�����������Ϊ������ˢ�¶���,������ܻ���ʱ
        task_interval_cnt = 0xFF;  
		p_gui->page_frame_counter = 0;
		
		//�������ͼ
		Gui_PageClearBackground(p_gui->start_column, p_gui->start_page, p_gui->column_size, p_gui->page_size);
	}
		
    //1000ms��ˢ�¼��
    p_gui->updata_ui_interval = 300;
    
	if(task_interval_cnt != p_gui->page_frame_counter)
	{
        Gui_ThreadSetDisPlayArea(10, 50, 70, 110);
        task_interval_cnt = p_gui->page_frame_counter;
		Gui_PagePower();        
	} 
}

/****************************************************************
** Function name:           Cpu_TaskStopWatch
** Descriptions:            ������洦��
** input parameters:        p_controller��UI�¼�����״̬��p_gui����ʾ��صĲ���
** output parameters:       ��
** Returned value:          ��
** Created by:              WJ              
** Created Date:            2017-08-12
*****************************************************************/ 
void Cpu_TaskStopWatch(cpu_task_controller_t *p_controller, gui_controller_t *p_gui)
{
    static uint8_t last_state = 0;
    uint8_t millisecond = 0;
    uint16_t total_second = 0;
	
	if(p_controller->init == 1)
	{ 
        TASK_ENTRY_INIT(p_controller, GUI_DISPLAY_TIME_5S);
        p_controller->key_press_hold = 1; 
		
		//!ע��:�˴�����������Ϊ������ˢ�¶���,������ܻ���ʱ
        task_interval_cnt = 0xFF;  
		p_gui->page_frame_counter = 0;
        
        //�������ͼ
		Gui_PageClearBackground(p_gui->start_column, p_gui->start_page, p_gui->column_size, p_gui->page_size);   
        last_state = Gui_DataStopWatchIsBusy();
	}
 
    //100ms��ˢ�¼��
    p_gui->updata_ui_interval = 300; 
    
	if(task_interval_cnt != p_gui->page_frame_counter)
	{
        Gui_ThreadSetDisPlayArea(0, 0, 80, 160);
        task_interval_cnt = p_gui->page_frame_counter; 
        if(last_state != Gui_DataStopWatchIsBusy())
        {
            Gui_PageClearBackground(p_gui->start_column, p_gui->start_page, p_gui->column_size, p_gui->page_size);
            last_state = Gui_DataStopWatchIsBusy();
        }
        Gui_DataGetStopWatchSecond(&total_second, &millisecond); 
		GUI_StopWatchPage(last_state, total_second, millisecond, task_interval_cnt);
	} 
}

/****************************************************************
** Function name:           Gui_TaskCountDown
** Descriptions:            ����ʱ���洦��
** input parameters:        p_controller��UI�¼�����״̬��p_gui����ʾ��صĲ���
** output parameters:       ��
** Returned value:          ��
** Created by:              WJ              
** Created Date:            2017-08-12
*****************************************************************/ 
void Gui_TaskCountDown(cpu_task_controller_t *p_controller, gui_controller_t *p_gui)
{
	if(p_controller->init == 1)
	{ 
        TASK_ENTRY_INIT(p_controller, GUI_DISPLAY_TIME_5S);
        p_controller->key_press_hold = 1; 
        
        //!ע��:�˴�����������Ϊ������ˢ�¶���,������ܻ���ʱ
        task_interval_cnt = 0xFF;  
		p_gui->page_frame_counter = 0;
        
		//�������ͼ
		Gui_PageClearBackground(p_gui->start_column, p_gui->start_page, p_gui->column_size, p_gui->page_size);
	}
 
    //250ms��ˢ�¼��
    p_gui->updata_ui_interval = 300; 
    
	if(task_interval_cnt != p_gui->page_frame_counter)
	{
        Gui_ThreadSetDisPlayArea(10, 50, 70, 110);
        task_interval_cnt = p_gui->page_frame_counter; 
        Gui_PageCountDown(Gui_DataCountDownIsBusy(), task_interval_cnt); 
	} 
}



/****************************************************************
** Function name:           Cpu_RunModePause
** Descriptions:            �˶���ͣ�����¼�����
** input parameters:        ��
** output parameters:       ��
** Returned value:          ��
** Created by:              WJ              
** Created Date:            2017-08-12
*****************************************************************/ 
void Cpu_TaskRunModePause(cpu_task_controller_t *p_controller, gui_controller_t *p_gui)
{
	if(p_controller->init == 1)
	{ 
        TASK_ENTRY_INIT(p_controller, GUI_DISPLAY_TIME_5S);
        p_controller->key_press_hold = 1;    
		 
		//!ע��:�˴�����������Ϊ������ˢ�¶���,������ܻ���ʱ
		task_interval_cnt = 0xFF;
		p_gui->page_frame_counter = 0;
		
		//�������ͼ
        Gui_PageClearBackground(p_gui->start_column, p_gui->start_page, p_gui->column_size, p_gui->page_size);
	}
	 
    //300ms��ˢ�¼��
    p_gui->updata_ui_interval = 300; 
    
	if(task_interval_cnt != p_gui->page_frame_counter)
	{
        Gui_ThreadSetDisPlayArea(0, 0, 80, 160);
        task_interval_cnt = p_gui->page_frame_counter; 
        Gui_PageRunModePause(Gui_DataMovementModeIsRun(), display_language); 
	}
}

/****************************************************************
** Function name:           Cpu_EventRunModeExit
** Descriptions:            �˶��˳������¼�����
** input parameters:        ��
** output parameters:       ��
** Returned value:          ��
** Created by:              WJ              
** Created Date:            2017-08-12
*****************************************************************/ 
void Cpu_TaskRunModeExit(cpu_task_controller_t *p_controller, gui_controller_t *p_gui)
{
	if(p_controller->init == 1)
	{ 
        TASK_ENTRY_INIT(p_controller, GUI_DISPLAY_TIME_5S);
        p_controller->key_press_hold = 1; 
		 
		//!ע��:�˴�����������Ϊ������ˢ�¶���,������ܻ���ʱ
		task_interval_cnt = 0xFF;
		p_gui->page_frame_counter = 0;
		//�������ͼ
        Gui_PageClearBackground(p_gui->start_column, p_gui->start_page, p_gui->column_size, p_gui->page_size);
	}
	
    //500ms��ˢ�¼��
    p_gui->updata_ui_interval = 300;
    
	if(task_interval_cnt != p_gui->page_frame_counter)
	{
        Gui_ThreadSetDisPlayArea(0, 0, 80, 160);
        task_interval_cnt = p_gui->page_frame_counter;
        Gui_PageRunModeExit(display_language);
	}
}