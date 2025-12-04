#ifndef HUB_H
#define HUB_H
#include <string>
#include <vector>
#include "TelemetryRecord.h"
using namespace std;

class Hub{
    public:
        Hub();
        void convertTemp(TelemetryRecord &Record);
        bool writeCoToCsv(const string& fileName, const TelemetryRecord &Record);
        bool writeHumidityToCsv(const string& fileName, const TelemetryRecord &Record);
        bool writeLightToCsv(const string& fileName, const TelemetryRecord &Record);
        bool writeLpgToCsv(const string& fileName, const TelemetryRecord &Record);
        bool writeMotionToCsv(const string& fileName, const TelemetryRecord &Record);
        bool writeSmokeToCsv(const string& fileName, const TelemetryRecord &Record);
        bool writeTempToCsv(const string& fileName, const TelemetryRecord &Record);
        ~Hub();
};

#endif