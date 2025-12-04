#include <iostream>
#include <string>
#include <vector>
#include "TelemetryRecord.h"
#include "Input.h"
#include "Hub.h"
using namespace std;

int main()
{
    TelemetryRecord T1 = TelemetryRecord();
    Hub H1 = Hub();
    loadDataFromFile("iot_telemetry_data.csv", T1);

    H1.convertTemp(T1);

    H1.writeCoToCsv("output_co.csv", T1);
    H1.writeHumidityToCsv("output_humidity.csv", T1);
    H1.writeLightToCsv("output_light.csv", T1);
    H1.writeLpgToCsv("output_lpg.csv", T1);
    H1.writeMotionToCsv("output_motion.csv", T1);
    H1.writeSmokeToCsv("output_smoke.csv", T1);
    H1.writeTempToCsv("output_temp.csv", T1);
    
}