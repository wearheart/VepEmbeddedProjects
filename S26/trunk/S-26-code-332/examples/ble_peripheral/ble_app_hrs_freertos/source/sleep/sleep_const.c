#include <stdint.h>
#include "sleep_const.h"
#include "flash_data_type.h"
#include "SystemTime.h"
#include "api_flash.h"

const uint8_t first_day_virtual_sleep_data[] =
{
    18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
18,0,5,0,0,0,30,80,0,0,0,0,0,0,0,0,
18,0,10,0,12,0,70,0,0,0,0,0,0,0,0,0,
18,0,15,0,0,0,46,0,0,0,0,0,0,0,0,0,
18,0,20,0,0,0,42,0,0,0,0,0,0,0,0,0,
18,0,25,0,0,0,61,0,0,0,0,0,0,0,0,0,
18,0,30,0,0,0,30,68,0,0,0,0,0,0,0,0,
18,0,35,0,0,0,55,0,0,0,0,0,0,0,0,0,
18,0,40,0,0,0,22,76,0,0,0,0,0,0,0,0,
18,0,45,0,0,0,21,71,0,0,0,0,0,0,0,0,
18,0,50,0,0,0,44,0,0,0,0,0,0,0,0,0,
18,0,55,0,70,0,89,0,0,0,0,0,0,0,0,0,
18,1,0,0,0,0,5,68,0,0,0,0,0,0,0,0,
18,1,5,0,0,0,20,64,0,0,0,0,0,0,0,0,
18,1,10,0,0,0,1,64,0,0,0,0,0,0,0,0,
18,1,15,0,0,0,1,60,0,0,0,0,0,0,0,0,
18,1,20,0,0,0,0,62,0,0,0,0,0,0,0,0,
18,1,25,0,0,0,10,61,0,0,0,0,0,0,0,0,
18,1,30,0,0,0,0,54,0,0,0,0,0,0,0,0,
18,1,35,0,0,0,0,58,0,0,0,0,0,0,0,0,
18,1,40,0,0,0,0,58,0,0,0,0,0,0,0,0,
18,1,45,0,0,0,0,61,0,0,0,0,0,0,0,0,
18,1,50,0,0,0,2,59,0,0,0,0,0,0,0,0,
18,1,55,0,0,0,0,59,0,0,0,0,0,0,0,0,
18,2,0,0,0,0,0,60,0,0,0,0,0,0,0,0,
18,2,5,0,0,0,8,55,0,0,0,0,0,0,0,0,
18,2,10,0,0,0,2,60,0,0,0,0,0,0,0,0,
18,2,15,0,0,0,1,61,0,0,0,0,0,0,0,0,
18,2,20,0,0,0,2,63,0,0,0,0,0,0,0,0,
18,2,25,0,0,0,1,57,0,0,0,0,0,0,0,0,
18,2,30,0,0,0,0,56,0,0,0,0,0,0,0,0,
18,2,35,0,0,0,0,55,0,0,0,0,0,0,0,0,
18,2,40,0,0,0,0,57,0,0,0,0,0,0,0,0,
18,2,45,0,0,0,0,55,0,0,0,0,0,0,0,0,
18,2,50,0,0,0,2,54,0,0,0,0,0,0,0,0,
18,2,55,0,0,0,0,54,0,0,0,0,0,0,0,0,
18,3,0,0,0,0,5,53,0,0,0,0,0,0,0,0,
18,3,5,0,0,0,0,55,0,0,0,0,0,0,0,0,
18,3,10,0,0,0,7,58,0,0,0,0,0,0,0,0,
18,3,15,0,0,0,3,63,0,0,0,0,0,0,0,0,
18,3,20,0,0,0,0,60,0,0,0,0,0,0,0,0,
18,3,25,0,0,0,1,65,0,0,0,0,0,0,0,0,
18,3,30,0,0,0,11,62,0,0,0,0,0,0,0,0,
18,3,35,0,0,0,2,55,0,0,0,0,0,0,0,0,
18,3,40,0,0,0,9,53,0,0,0,0,0,0,0,0,
18,3,45,0,0,0,13,71,0,0,0,0,0,0,0,0,
18,3,50,0,0,0,2,59,0,0,0,0,0,0,0,0,
18,3,55,0,0,0,2,60,0,0,0,0,0,0,0,0,
18,4,0,0,0,0,0,65,0,0,0,0,0,0,0,0,
18,4,5,0,0,0,11,63,0,0,0,0,0,0,0,0,
18,4,10,0,0,0,2,55,0,0,0,0,0,0,0,0,
18,4,15,0,0,0,3,56,0,0,0,0,0,0,0,0,
18,4,20,0,0,0,0,55,0,0,0,0,0,0,0,0,
18,4,25,0,0,0,0,55,0,0,0,0,0,0,0,0,
18,4,30,0,13,0,7,56,0,0,0,0,0,0,0,0,
18,4,35,0,0,0,0,56,0,0,0,0,0,0,0,0,
18,4,40,0,0,0,0,57,0,0,0,0,0,0,0,0,
18,4,45,0,0,0,0,57,0,0,0,0,0,0,0,0,
18,4,50,0,0,0,0,57,0,0,0,0,0,0,0,0,
18,4,55,0,0,0,0,57,0,0,0,0,0,0,0,0,
18,5,0,0,0,0,0,58,0,0,0,0,0,0,0,0,
18,5,5,0,0,0,2,58,0,0,0,0,0,0,0,0,
18,5,10,0,0,0,5,52,0,0,0,0,0,0,0,0,
18,5,15,0,0,0,0,62,0,0,0,0,0,0,0,0,
18,5,20,0,0,0,0,60,0,0,0,0,0,0,0,0,
18,5,25,0,0,0,0,60,0,0,0,0,0,0,0,0,
18,5,30,0,0,0,11,52,0,0,0,0,0,0,0,0,
18,5,35,0,0,0,7,49,0,0,0,0,0,0,0,0,
18,5,40,0,0,0,0,49,0,0,0,0,0,0,0,0,
18,5,45,0,0,0,0,61,0,0,0,0,0,0,0,0,
18,5,50,0,0,0,0,59,0,0,0,0,0,0,0,0,
18,5,55,0,0,0,0,58,0,0,0,0,0,0,0,0,
18,6,0,0,0,0,0,59,0,0,0,0,0,0,0,0,
18,6,5,0,0,0,0,57,0,0,0,0,0,0,0,0,
18,6,10,0,0,0,0,56,0,0,0,0,0,0,0,0,
18,6,15,0,0,0,0,57,0,0,0,0,0,0,0,0,
18,6,20,0,0,0,0,46,0,0,0,0,0,0,0,0,
18,6,25,0,0,0,0,64,0,0,0,0,0,0,0,0,
18,6,30,0,0,0,0,64,0,0,0,0,0,0,0,0,
18,6,35,0,0,0,9,54,0,0,0,0,0,0,0,0,
18,6,40,0,0,0,1,58,0,0,0,0,0,0,0,0,
18,6,45,0,0,0,1,62,0,0,0,0,0,0,0,0,
18,6,50,0,0,0,0,68,0,0,0,0,0,0,0,0,
18,6,55,0,0,0,0,62,0,0,0,0,0,0,0,0,
18,7,0,0,0,0,8,54,0,0,0,0,0,0,0,0,
18,7,5,0,0,0,2,60,0,0,0,0,0,0,0,0,
18,7,10,0,0,0,2,54,0,0,0,0,0,0,0,0,
18,7,15,0,16,0,31,64,0,0,0,0,0,0,0,0,
18,7,20,0,16,0,48,62,0,0,0,0,0,0,0,0,
18,7,25,0,0,0,9,57,0,0,0,0,0,0,0,0,
18,7,30,0,67,0,177,0,0,0,0,0,0,0,0,0,
18,7,35,1,14,0,180,0,0,0,0,0,0,0,0,0,
18,7,40,0,155,0,134,0,0,0,0,0,0,0,0,0,
18,7,45,2,54,0,15,0,0,0,0,0,0,0,0,0,
18,7,50,2,45,0,9,0,0,0,0,0,0,0,0,0,
18,7,55,1,17,0,117,0,0,0,0,0,0,0,0,0,
18,8,0,1,1,0,158,0,0,0,0,0,0,0,0,0,
18,8,5,0,20,0,53,0,0,0,0,0,0,0,0,0,
18,8,10,0,17,0,44,0,0,0,0,0,0,0,0,0,
18,8,15,0,0,0,2,55,0,0,0,0,0,0,0,0,
18,8,20,0,0,0,15,0,0,0,0,0,0,0,0,0,
18,8,25,0,0,0,20,56,0,0,0,0,0,0,0,0,
18,8,30,1,57,0,132,0,0,0,0,0,0,0,0,0,
18,8,35,1,217,0,242,1,0,0,0,0,0,0,0,0,
18,8,40,2,26,0,219,1,0,0,0,0,0,0,0,0,
18,8,45,2,35,0,219,78,0,0,0,0,0,0,0,0,
18,8,50,1,143,0,174,0,0,0,0,0,0,0,0,0,
18,8,55,0,0,0,0,36,0,0,0,0,0,0,0,0,
18,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
18,9,5,0,0,0,4,37,0,0,0,0,0,0,0,0,
18,9,10,0,0,0,0,0,0,0,0,0,0,0,0,0,
18,9,15,0,0,0,19,37,0,0,0,0,0,0,0,0,
18,9,20,0,28,0,53,0,0,0,0,0,0,0,0,0,
18,9,25,0,0,0,14,39,0,0,0,0,0,0,0,0,
18,9,30,0,0,0,2,0,0,0,0,0,0,0,0,0,
18,9,35,0,0,0,5,38,0,0,0,0,0,0,0,0,
18,9,40,0,0,0,4,0,0,0,0,0,0,0,0,0,
18,9,45,0,0,0,2,37,0,0,0,0,0,0,0,0,
18,9,50,0,0,0,2,0,0,0,0,0,0,0,0,0,
18,9,55,0,0,0,4,40,0,0,0,0,0,0,0,0,
18,16,55,0,0,0,14,0,0,0,0,0,0,0,0,0,
18,17,0,0,0,0,171,0,0,0,0,0,0,0,0,0,
18,17,5,0,0,0,1,1,0,0,0,0,0,0,0,0,
18,17,10,0,0,0,1,1,0,0,0,0,0,0,0,0,
18,17,15,0,0,0,1,1,0,0,0,0,0,0,0,0,
18,17,20,0,0,0,4,1,0,0,0,0,0,0,0,0,
18,17,25,0,0,0,4,1,0,0,0,0,0,0,0,0,
18,17,30,0,0,0,0,2,0,0,0,0,0,0,0,0,
18,17,35,0,0,0,1,2,0,0,0,0,0,0,0,0,
18,17,40,0,0,0,1,2,0,0,0,0,0,0,0,0,
18,17,45,0,0,0,1,2,0,0,0,0,0,0,0,0,
18,17,50,0,0,0,0,2,0,0,0,0,0,0,0,0,
18,17,55,0,0,0,1,2,0,0,0,0,0,0,0,0,
18,18,0,0,0,0,2,2,0,0,0,0,0,0,0,0,
18,18,5,0,0,0,2,2,0,0,0,0,0,0,0,0,
18,18,10,0,0,0,2,2,0,0,0,0,0,0,0,0,
18,18,15,0,0,0,1,2,0,0,0,0,0,0,0,0,
18,18,20,0,0,0,3,2,0,0,0,0,0,0,0,0,
18,18,25,0,0,0,17,2,0,0,0,0,0,0,0,0,
18,18,30,0,0,0,26,0,0,0,0,0,0,0,0,0,
18,18,35,0,0,0,54,0,0,0,0,0,0,0,0,0,
18,18,40,0,0,0,41,0,0,0,0,0,0,0,0,0,
18,18,45,0,0,0,64,0,0,0,0,0,0,0,0,0,
18,18,50,0,0,0,26,0,0,0,0,0,0,0,0,0,
18,18,55,0,15,0,84,0,0,0,0,0,0,0,0,0,
18,19,5,0,0,0,45,1,0,0,0,0,0,0,0,0,
18,19,10,0,90,0,139,1,0,0,0,0,0,0,0,0,
18,19,15,0,100,0,74,60,0,0,0,0,0,0,0,0,
18,19,20,0,0,0,9,0,0,0,0,0,0,0,0,0,
18,19,25,0,251,0,118,64,0,0,0,0,0,0,0,0,
18,19,30,0,0,0,193,0,0,0,0,0,0,0,0,0,
18,19,35,1,144,0,25,100,0,0,0,0,0,0,0,0,
18,19,40,0,237,0,109,0,0,0,0,0,0,0,0,0,
18,19,45,0,0,0,18,76,0,0,0,0,0,0,0,0,
18,19,50,0,114,0,51,0,0,0,0,0,0,0,0,0,
18,19,55,0,37,0,24,72,0,0,0,0,0,0,0,0,
18,20,0,0,0,0,4,0,0,0,0,0,0,0,0,0,
18,20,5,0,0,0,14,68,0,0,0,0,0,0,0,0,
18,20,10,0,0,0,10,0,0,0,0,0,0,0,0,0,
18,20,15,0,0,0,22,68,0,0,0,0,0,0,0,0,
18,20,20,0,0,0,15,0,0,0,0,0,0,0,0,0,
18,20,25,0,0,0,14,36,0,0,0,0,0,0,0,0,
18,20,30,0,10,0,30,0,0,0,0,0,0,0,0,0,
18,20,35,1,109,0,150,78,0,0,0,0,0,0,0,0,
18,20,40,1,233,0,161,0,0,0,0,0,0,0,0,0,
18,20,45,1,91,0,108,66,0,0,0,0,0,0,0,0,
18,20,50,0,25,0,37,0,0,0,0,0,0,0,0,0,
18,20,55,0,0,0,0,1,0,0,0,0,0,0,0,0,
18,21,0,0,0,0,0,1,0,0,0,0,0,0,0,0,
18,21,5,0,0,0,0,1,0,0,0,0,0,0,0,0,
18,21,10,0,0,0,0,1,0,0,0,0,0,0,0,0,
18,21,15,0,0,0,0,1,0,0,0,0,0,0,0,0,
18,21,20,0,0,0,0,2,0,0,0,0,0,0,0,0,
18,21,25,0,0,0,0,2,0,0,0,0,0,0,0,0,
18,21,30,0,0,0,0,2,0,0,0,0,0,0,0,0,
18,21,35,0,15,0,39,2,0,0,0,0,0,0,0,0,
18,21,40,0,0,0,0,0,0,0,0,0,0,0,0,0,
18,21,45,0,0,0,0,1,0,0,0,0,0,0,0,0,
18,21,50,0,0,0,0,1,0,0,0,0,0,0,0,0,
18,21,55,0,0,0,0,1,0,0,0,0,0,0,0,0,
18,22,0,0,0,0,0,1,0,0,0,0,0,0,0,0,
18,22,5,0,0,0,0,1,0,0,0,0,0,0,0,0,
18,22,10,0,0,0,0,2,0,0,0,0,0,0,0,0,
18,22,15,0,0,0,0,2,0,0,0,0,0,0,0,0,
18,22,20,0,0,0,7,2,0,0,0,0,0,0,0,0,
18,22,25,0,0,0,0,1,0,0,0,0,0,0,0,0,
18,22,30,0,0,0,0,1,0,0,0,0,0,0,0,0,
18,22,35,0,0,0,0,1,0,0,0,0,0,0,0,0,
18,22,40,0,0,0,1,1,0,0,0,0,0,0,0,0,
18,22,45,0,0,0,0,1,0,0,0,0,0,0,0,0,
18,22,50,0,0,0,0,2,0,0,0,0,0,0,0,0,
18,22,55,0,0,0,0,2,0,0,0,0,0,0,0,0,
18,23,0,0,0,0,0,2,0,0,0,0,0,0,0,0,
18,23,5,0,0,0,0,2,0,0,0,0,0,0,0,0,
18,23,10,0,40,0,63,2,0,0,0,0,0,0,0,0,
18,23,15,0,75,0,84,1,0,0,0,0,0,0,0,0,
18,23,20,0,87,0,74,1,0,0,0,0,0,0,0,0,
18,23,25,0,0,0,34,74,0,0,0,0,0,0,0,0,
18,23,30,0,0,0,11,0,0,0,0,0,0,0,0,0,
18,23,35,0,16,0,59,66,0,0,0,0,0,0,0,0,
18,23,40,0,0,0,9,0,0,0,0,0,0,0,0,0,
18,23,45,0,0,0,22,64,0,0,0,0,0,0,0,0,
18,23,50,0,0,0,15,0,0,0,0,0,0,0,0,0,
18,23,55,0,0,0,11,72,0,0,0,0,0,0,0,0,
};

const uint8_t second_day_virtual_sleep_data[] =
{
    19,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
19,0,5,0,0,0,5,68,0,0,0,0,0,0,0,0,
19,0,10,0,0,0,3,68,0,0,0,0,0,0,0,0,
19,0,15,0,0,0,8,69,0,0,0,0,0,0,0,0,
19,0,20,0,0,0,8,71,0,0,0,0,0,0,0,0,
19,0,25,0,0,0,6,62,0,0,0,0,0,0,0,0,
19,0,30,0,0,0,4,61,0,0,0,0,0,0,0,0,
19,0,35,0,0,0,3,66,0,0,0,0,0,0,0,0,
19,0,40,0,0,0,5,61,0,0,0,0,0,0,0,0,
19,0,45,0,0,0,17,65,0,0,0,0,0,0,0,0,
19,0,50,0,0,0,1,61,0,0,0,0,0,0,0,0,
19,0,55,0,0,0,7,63,0,0,0,0,0,0,0,0,
19,1,0,0,0,0,5,58,0,0,0,0,0,0,0,0,
19,1,5,0,0,0,43,83,0,0,0,0,0,0,0,0,
19,1,10,0,20,0,38,62,0,0,0,0,0,0,0,0,
19,1,15,0,2,0,4,64,0,0,0,0,0,0,0,0,
19,1,20,0,0,0,0,50,0,0,0,0,0,0,0,0,
19,1,25,0,0,0,0,56,0,0,0,0,0,0,0,0,
19,1,30,0,0,0,10,56,0,0,0,0,0,0,0,0,
19,1,35,0,0,0,1,56,0,0,0,0,0,0,0,0,
19,1,40,0,0,0,0,51,0,0,0,0,0,0,0,0,
19,1,45,0,0,0,0,53,0,0,0,0,0,0,0,0,
19,1,50,0,0,0,0,58,0,0,0,0,0,0,0,0,
19,1,55,0,0,0,0,59,0,0,0,0,0,0,0,0,
19,2,0,0,0,0,0,58,0,0,0,0,0,0,0,0,
19,2,5,0,0,0,3,56,0,0,0,0,0,0,0,0,
19,2,10,0,0,0,0,61,0,0,0,0,0,0,0,0,
19,2,15,0,0,0,0,59,0,0,0,0,0,0,0,0,
19,2,20,0,0,0,0,57,0,0,0,0,0,0,0,0,
19,2,25,0,0,0,0,58,0,0,0,0,0,0,0,0,
19,2,30,0,0,0,0,57,0,0,0,0,0,0,0,0,
19,2,35,0,0,0,4,50,0,0,0,0,0,0,0,0,
19,2,40,0,0,0,0,56,0,0,0,0,0,0,0,0,
19,2,45,0,0,0,6,50,0,0,0,0,0,0,0,0,
19,2,50,0,0,0,4,50,0,0,0,0,0,0,0,0,
19,2,55,0,0,0,0,59,0,0,0,0,0,0,0,0,
19,3,0,0,0,0,11,55,0,0,0,0,0,0,0,0,
19,3,5,0,0,0,0,62,0,0,0,0,0,0,0,0,
19,3,10,0,0,0,2,59,0,0,0,0,0,0,0,0,
19,3,15,0,0,0,3,54,0,0,0,0,0,0,0,0,
19,3,20,0,0,0,0,54,0,0,0,0,0,0,0,0,
19,3,25,0,0,0,7,57,0,0,0,0,0,0,0,0,
19,3,30,0,0,0,0,63,0,0,0,0,0,0,0,0,
19,3,35,0,0,0,0,59,0,0,0,0,0,0,0,0,
19,3,40,0,0,0,0,60,0,0,0,0,0,0,0,0,
19,3,45,0,0,0,4,61,0,0,0,0,0,0,0,0,
19,3,50,0,0,0,0,58,0,0,0,0,0,0,0,0,
19,3,55,0,0,0,0,58,0,0,0,0,0,0,0,0,
19,4,0,0,0,0,5,54,0,0,0,0,0,0,0,0,
19,4,5,0,0,0,3,53,0,0,0,0,0,0,0,0,
19,4,10,0,0,0,3,54,0,0,0,0,0,0,0,0,
19,4,15,0,0,0,3,55,0,0,0,0,0,0,0,0,
19,4,20,0,0,0,4,55,0,0,0,0,0,0,0,0,
19,4,25,0,0,0,0,67,0,0,0,0,0,0,0,0,
19,4,30,0,0,0,0,68,0,0,0,0,0,0,0,0,
19,4,35,0,0,0,5,52,0,0,0,0,0,0,0,0,
19,4,40,0,0,0,0,56,0,0,0,0,0,0,0,0,
19,4,45,0,0,0,3,52,0,0,0,0,0,0,0,0,
19,4,50,0,0,0,1,57,0,0,0,0,0,0,0,0,
19,4,55,0,0,0,8,69,0,0,0,0,0,0,0,0,
19,5,0,0,0,0,1,54,0,0,0,0,0,0,0,0,
19,5,5,0,11,0,9,62,0,0,0,0,0,0,0,0,
19,5,10,0,0,0,0,60,0,0,0,0,0,0,0,0,
19,5,15,0,0,0,8,61,0,0,0,0,0,0,0,0,
19,5,20,0,0,0,4,49,0,0,0,0,0,0,0,0,
19,5,25,0,0,0,0,56,0,0,0,0,0,0,0,0,
19,5,30,0,0,0,2,61,0,0,0,0,0,0,0,0,
19,5,35,0,0,0,9,59,0,0,0,0,0,0,0,0,
19,5,40,0,0,0,7,58,0,0,0,0,0,0,0,0,
19,5,45,0,0,0,1,56,0,0,0,0,0,0,0,0,
19,5,50,0,0,0,2,50,0,0,0,0,0,0,0,0,
19,5,55,0,0,0,1,58,0,0,0,0,0,0,0,0,
19,6,0,0,0,0,11,62,0,0,0,0,0,0,0,0,
19,6,5,0,0,0,0,65,0,0,0,0,0,0,0,0,
19,6,10,0,0,0,0,61,0,0,0,0,0,0,0,0,
19,6,15,0,0,0,0,64,0,0,0,0,0,0,0,0,
19,6,20,0,0,0,4,52,0,0,0,0,0,0,0,0,
19,6,25,0,0,0,0,61,0,0,0,0,0,0,0,0,
19,6,30,0,0,0,2,60,0,0,0,0,0,0,0,0,
19,6,35,0,0,0,0,58,0,0,0,0,0,0,0,0,
19,6,40,0,0,0,10,52,0,0,0,0,0,0,0,0,
19,6,45,0,0,0,2,56,0,0,0,0,0,0,0,0,
19,6,50,0,0,0,6,53,0,0,0,0,0,0,0,0,
19,6,55,0,0,0,0,52,0,0,0,0,0,0,0,0,
19,7,0,0,0,0,8,57,0,0,0,0,0,0,0,0,
19,7,5,0,0,0,15,70,0,0,0,0,0,0,0,0,
19,7,10,0,21,0,70,74,0,0,0,0,0,0,0,0,
19,7,15,2,6,0,200,0,0,0,0,0,0,0,0,0,
19,7,20,1,25,0,150,0,0,0,0,0,0,0,0,0,
19,7,25,0,223,0,142,60,0,0,0,0,0,0,0,0,
19,7,30,1,96,0,3,0,0,0,0,0,0,0,0,0,
19,7,35,0,119,0,66,59,0,0,0,0,0,0,0,0,
19,7,40,0,0,0,25,81,0,0,0,0,0,0,0,0,
19,7,45,0,0,0,6,73,0,0,0,0,0,0,0,0,
19,7,50,0,0,0,16,66,0,0,0,0,0,0,0,0,
19,7,55,0,0,0,18,0,0,0,0,0,0,0,0,0,
19,8,0,0,0,0,4,69,0,0,0,0,0,0,0,0,
19,8,5,0,0,0,13,0,0,0,0,0,0,0,0,0,
19,8,10,0,0,0,37,0,0,0,0,0,0,0,0,0,
19,8,15,0,0,0,4,60,0,0,0,0,0,0,0,0,
19,8,20,0,0,0,3,0,0,0,0,0,0,0,0,0,
19,8,25,0,0,0,16,68,0,0,0,0,0,0,0,0,
19,8,30,0,0,0,5,0,0,0,0,0,0,0,0,0,
19,8,35,1,218,0,1,78,0,0,0,0,0,0,0,0,
19,8,40,1,7,0,147,0,0,0,0,0,0,0,0,0,
19,8,45,0,150,0,74,65,0,0,0,0,0,0,0,0,
19,8,50,0,0,0,13,0,0,0,0,0,0,0,0,0,
19,8,55,0,0,0,4,1,0,0,0,0,0,0,0,0,    
};

static void Write_OneDayVirtualData(const uint8_t* p_virtual_data, uint16_t len)
{
    daily_data_attr_t m_daily_data = {0};
    
    // 2.д����������
    for(uint16_t index = 0; index < len; index++)
    {
        m_daily_data.month  = clock->month;
        m_daily_data.day    = p_virtual_data[index*16];
        m_daily_data.hour   = p_virtual_data[index*16+1];
        m_daily_data.minute = p_virtual_data[index*16+2];
        m_daily_data.step   = ((p_virtual_data[index*16+3]<<8)|(p_virtual_data[index*16+4]));
        m_daily_data.sport  = ((p_virtual_data[index*16+5]<<8)|(p_virtual_data[index*16+6]));
        
        Api_SaveDailyAttrData(&m_daily_data);
    }
}

void Sleep_OverloadVirtualData(void)
{
    // д���һ����������
    Write_OneDayVirtualData(first_day_virtual_sleep_data, sizeof(first_day_virtual_sleep_data)/16);
    
    // ����
    Api_FlashDailyJumpBlock();
    
    // д��ڶ�����������
    Write_OneDayVirtualData(second_day_virtual_sleep_data, sizeof(second_day_virtual_sleep_data)/16);
    
    Api_FlashInit();
}