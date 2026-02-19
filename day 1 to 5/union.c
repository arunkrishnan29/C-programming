#include <stdio.h>

union sensorData {
    float temperature;
    int pressure;
    char status[20];
};

int main() {
    union sensorData data;
    
    printf("Enter the temperature   :   ");
    scanf("%lf",&data.temperature);
    
    printf("Enter the pressure      :   ");
    scanf("%d",&data.pressure);
    

    printf("Current Temp: %.1f C\n",data.temperature);
    printf("Current Pressure: %d hPa\n",data.pressure);

    printf("\nTrying to read temp again: %.1f", data.temperature); 

    return 0;
}       