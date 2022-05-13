/*
 * @Descripttion: 
 * @version: 
 * @Author: congsir
 * @Date: 2022-05-13 21:40:10
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2022-05-14 00:39:46
 */
#pragma once

#include <Arduino.h>

struct KnobConfig {
    //可以运动的个数
    int32_t num_positions;        
    //位置
    int32_t position;             
    //位置宽度弧度 或者是每一步的度数
    float position_width_radians; 
    //制动强度
    float detent_strength_unit;  
    //end stop强度 
    float endstop_strength_unit;  
    //中断点 
    float snap_point; 
    //描述符            
    char descriptor[50];          
};

struct KnobState {
    int32_t current_position;
    float sub_position_unit;
    KnobConfig config;
};
