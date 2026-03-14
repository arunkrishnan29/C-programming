#include <stdio.h>

union sensorData {
    float temperature;
    int pressure;
    char status[20];
};

int main() {
    union sensorData data;
    
    // 1. Handle Temperature
    printf("Enter the temperature   :   ");
    // FIX: Use %f for float (not %lf which is for double)
    scanf("%f", &data.temperature);
    printf("Current Temp: %.1f C\n", data.temperature);
    
    // 2. Handle Pressure
    // Note: Writing to 'pressure' will OVERWRITE 'temperature'
    printf("\nEnter the pressure      :   ");
    scanf("%d", &data.pressure);
    printf("Current Pressure: %d hPa\n", data.pressure);

    // 3. The Reality Check
    printf("\n--- The Union Reality Check ---");
    printf("\nTrying to read temp again: %.1f", data.temperature); 
    printf("\n(Notice how it's now garbage? That's because pressure overwrote it!)\n");

    return 0;
}