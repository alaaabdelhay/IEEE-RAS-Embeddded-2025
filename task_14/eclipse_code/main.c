#include <util/delay.h>
#include "motor.h"
#include "switch.h"

int main() {
    Motor_Init();
    Switch_Init();

    while (1) {
    	if (Switch_Read(0)) Motor_Forward();
    	else if (Switch_Read(1)) Motor_Backward();
    	else if (Switch_Read(2)) Motor_Left();
    	else if (Switch_Read(3)) Motor_Right();
    	else if (Switch_Read(4)) Motor_Stop();

    }
}
