#ifndef INPUT_H
#define INPUT_H

#include <string>
#include "TelemetryRecord.h"
using namespace std;

bool loadDataFromFile(const string& fileName, TelemetryRecord& Record);

#endif