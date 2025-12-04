#include <string>
#include <vector>
#include "TelemetryRecord.h"
using namespace std;

TelemetryRecord::TelemetryRecord() //Just the constructor
{
}

double TelemetryRecord::get_ts(int i) const{ //All the get_blank functions are just accessor functions for later use
    return ts[i];
}

string TelemetryRecord::get_device(int i) const{
    return device[i];
}

double TelemetryRecord::get_co(int i) const{
    return co[i];
}

double TelemetryRecord::get_humidity(int i) const{
    return humidity[i];
}

bool TelemetryRecord::get_light(int i) const{
    return light[i];
}

double TelemetryRecord::get_lpg(int i) const{
    return lpg[i];
}

bool TelemetryRecord::get_motion(int i) const{
    return motion[i];
}

double TelemetryRecord::get_smoke(int i) const{
    return smoke[i];
}

double TelemetryRecord::get_temp(int i) const{
    return temp[i];
}

/*
Just adds the values in the argument to the storage vectors in TelemetryRecord
*/
void TelemetryRecord::add_row(double new_ts, string new_device, double new_co, double new_humidity, bool new_light, double new_lpg, bool new_motion, double new_smoke, double new_temp){
    ts.push_back(new_ts);
    device.push_back(new_device);
    co.push_back(new_co);
    humidity.push_back(new_humidity);
    light.push_back(new_light);
    lpg.push_back(new_lpg);
    motion.push_back(new_motion);
    smoke.push_back(new_smoke);
    temp.push_back(new_temp);
}

int TelemetryRecord::get_size() const{ //Gets the size of the data set so it can be used when needing to iterate through the entire data set
    return ts.size();
}

void TelemetryRecord::update_temp(int i, double upd_temp){
    temp[i] = upd_temp;
}

TelemetryRecord::~TelemetryRecord()
{
}