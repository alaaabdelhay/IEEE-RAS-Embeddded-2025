#include <stdio.h>
#include <string.h>

union SensorValue {
    int temperature;
    float pressure;
    char status;
};

struct SensorData {
    int sensorID;
    char sensorType[20];
    union SensorValue data;
};

void printSensorData(struct SensorData sensor) {
    printf("Sensor ID: %d\n", sensor.sensorID);
    printf("Sensor Type: %s\n", sensor.sensorType);

    if (strcmp(sensor.sensorType, "Temperature") == 0) {
        printf("Temperature: %d°C\n", sensor.data.temperature);
    } else if (strcmp(sensor.sensorType, "Pressure") == 0) {
        printf("Pressure: %.2f Pa\n", sensor.data.pressure);
    } else if (strcmp(sensor.sensorType, "Status") == 0) {
        printf("Status: %c\n", sensor.data.status);
    } else {
        printf("Unknown sensor type.\n");
    }

    printf("--------------------------\n");
}

int main() {
    struct SensorData sensors[3];

    sensors[0].sensorID = 1;
    strcpy(sensors[0].sensorType, "Temperature");
    sensors[0].data.temperature = 25;

    sensors[1].sensorID = 2;
    strcpy(sensors[1].sensorType, "Pressure");
    sensors[1].data.pressure = 1013.25;

    sensors[2].sensorID = 3;
    strcpy(sensors[2].sensorType, "Status");
    sensors[2].data.status = 'A';

    for (int i = 0; i < 3; i++) {
        printSensorData(sensors[i]);
    }

    return 0;
}
