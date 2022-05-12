#pragma once

#include <Arduino.h>

struct KnobConfig {
    int32_t num_positions;
    int32_t position;             //位置
    float position_width_radians; //位置宽度弧度
    float detent_strength_unit;   //制动强度单位
    float endstop_strength_unit;  //endstop强度单位
    float snap_point;             //对其点 
    char descriptor[50];
};

struct KnobState {
    int32_t current_position;
    float sub_position_unit;
    KnobConfig config;
};
