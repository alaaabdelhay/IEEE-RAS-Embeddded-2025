#include "gpio.h"

void Motor_Init() {
    GPIO_Init('B', 0, OUTPUT); // M1_IN1
    GPIO_Init('B', 1, OUTPUT); // M1_IN2
    GPIO_Init('B', 2, OUTPUT); // M2_IN1
    GPIO_Init('B', 3, OUTPUT); // M2_IN2
}

void Motor_Forward() {
    // M1 forward
    GPIO_Write('B', 0, 1);
    GPIO_Write('B', 1, 0);
    // M2 forward
    GPIO_Write('B', 2, 1);
    GPIO_Write('B', 3, 0);
}

void Motor_Backward() {
    // M1 backward
    GPIO_Write('B', 0, 0);
    GPIO_Write('B', 1, 1);
    // M2 backward
    GPIO_Write('B', 2, 0);
    GPIO_Write('B', 3, 1);
}

void Motor_Left() {
    // M1 stop
    GPIO_Write('B', 0, 0);
    GPIO_Write('B', 1, 0);

    // M2 forward
    GPIO_Write('B', 2, 1);
    GPIO_Write('B', 3, 0);
}
void Motor_Right() {
    // M1 forward
    GPIO_Write('B', 0, 1);
    GPIO_Write('B', 1, 0);

    // M2 stop
    GPIO_Write('B', 2, 0);
    GPIO_Write('B', 3, 0);
}
void Motor_Stop() {
    GPIO_Write('B', 0, 0);
    GPIO_Write('B', 1, 0);
    GPIO_Write('B', 2, 0);
    GPIO_Write('B', 3, 0);
}
