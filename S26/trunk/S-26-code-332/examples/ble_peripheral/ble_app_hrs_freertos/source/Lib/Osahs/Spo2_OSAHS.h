/********************************Copyright(c)***********************************
**                           Veepoo Tech
**                         COPYRIGHT (C) 2016
**--------------File Info-------------------------------------------------------

**------------------------------------------------------------------------------
** Modified by:             FWT
** Modified date:           2019-05-23
** SYS_VERSION:             02.05.00.01
** Descriptions:            创建算法文件
**------------------------------------------------------------------------------
** Modified by:             FWT
** Modified date:           2019-05-23
** SYS_VERSION:             0x02050002
** Descriptions:
1. 在头文件中增加宏定义以便调试使用 修改算法版本只02050002 
2. 在输出结构体中增加内存使用统计
**------------------------------------------------------------------------------
** Modified by:             FWT
** Modified date:           2019-05-23
** SYS_VERSION:             0x02050003
** Descriptions:
1. 修改输出结构体中数组 修改算法版本02050003
**------------------------------------------------------------------------------
** Modified by:             FWT
** Modified date:           2019-05-24
** SYS_VERSION:             0x02050004
** Descriptions:
1. 修改输出结构体中低氧时间数据类型 修改算法版本02050004
**------------------------------------------------------------------------------
** Modified by:             FWT
** Modified date:           2019-05-27
** SYS_VERSION:             0x02050005
** Descriptions:
1. 增加运动量限制判断呼吸暂停 修改算法版本02050005
**------------------------------------------------------------------------------
*******************************************************************************/
#ifndef __SPO2_OSAHS_
#define __SPO2_OSAHS_



// 头文件包含
#include            <stdint.h>
#include            <string.h>
#include            <stdlib.h>

// 宏定义
#define             LOW_SPO2_DETEC_TIME_LEN         (20)        // 判断呼吸暂停需要的最少低氧时间
#define             CHANGE_SPO2_VALUE               (97)        // 将血氧值修正到多少
#define             VALUE_85_90_TIME_LINE1          (60)        // 85-90 时间限制一
#define             VALUE_00_85_TIME_LINE1          (35)        // 0--85 时间限制一

#define             VALUE_JUDGE_LINE1               (90)        // 判断的血氧值界限1
#define             VALUE_JUDGE_LINE2               (85)        // 判断的血氧值界限2

#define             MAX_ALLOW_OSAHS_NUM             (10)        // 最多允许的呼吸暂停次数
#define             ALGO_ENTRY_MOVE_ARR_LEN         (5)         // 算法输出参数的运动量数组长度

// =========================================================================
// =========================================================================

// 呼吸暂停算法输入输出结构体
typedef struct
{
    // 血氧结果数组头地址  该数组长度需为300 从开始采样开始存 到5分钟结束  数据应该为 n个0 后面跟有效值
    // 注意！！！！！该数组值将会被算法更改。
    uint8_t         * spo2_data;
    // 运动量数组头地址,长度为5
    uint16_t        * move_arr;
    // 血氧数组的实际有效长度，数组前面的0包含于计数内，数组后面的0不包含于计数内
    uint16_t        spo2_arr_len;
}osahs_entry_param_t;
// =========================================================================
// =========================================================================
typedef struct
{
    // 血氧每分钟结果均值数组，长度为5，保存到FLASH和上传APP画曲线使用 
    uint8_t         spo2_one_min_aver[5];
    // 呼吸暂停结果
    // 呼吸暂停等级 0:无呼吸暂停  1：呼吸暂停等级1  2：呼吸暂停等级2  3：呼吸暂停等级3
    uint8_t         osahs_degree;
    // 呼吸暂停报警标志位
    uint8_t         osahs_warning;
    // 呼吸暂停次数
    uint8_t         osahs_times;
    // 呼吸暂停时间
    uint8_t         osahs_cnt;

    // 内存使用部分
    uint16_t        osahs_using_local;
    uint16_t        osahs_using_global;
    uint16_t        osahs_using_malloc; 
    // 算法版本信息
    uint32_t        osahs_detec_version;

}osahs_out_param_t;
// =========================================================================
// =========================================================================
// 呼吸暂停算法计算中结构体
typedef struct
{
    // 当前段呼吸暂停长度
    uint16_t cur_os_len;
    // 当前段呼吸暂停最低值
    uint16_t min_os_val;

}osahs_calc_arr_t;

// =========================================================================
// =========================================================================
// 呼吸暂停算法初始化
void Osahs_DetecInit(void);

// 呼吸暂停算法入口及结果
void Osahs_DetecEntry(
    osahs_entry_param_t     * osahs_entry_param_s,
    osahs_out_param_t       * osahs_out_param_s);
#endif










