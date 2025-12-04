#include "Hub.h"
#include <string>
#include <vector>
#include "TelemetryRecord.h"
#include <fstream>

Hub::Hub()
{
}

void Hub::convertTemp(TelemetryRecord &Record){
    for(int i = 0; i < Record.get_size(); i++){
        double upd_temp = ((Record.get_temp(i)) - 32) / 1.8;
        Record.update_temp(i, upd_temp);
    }
}

bool Hub::writeCoToCsv(const string& fileName, const TelemetryRecord &Record){
    ofstream out(fileName);
    if(!out.is_open()){
        return false;
    }

    out << "ts,device,co\n";

    for(int i = 0; i < Record.get_size(); i++){
        out << Record.get_ts(i) << ',' << Record.get_device(i) << ',' << Record.get_co(i) << '\n';
    }
    return true;
}

bool Hub::writeHumidityToCsv(const string& fileName, const TelemetryRecord &Record){
    ofstream out(fileName);
    if(!out.is_open()){
        return false;
    }

    out << "ts,device,humidity\n";

    for(int i = 0; i < Record.get_size(); i++){
        out << Record.get_ts(i) << ',' << Record.get_device(i) << ',' << Record.get_humidity(i) << '\n';
    }
    return true;
}

bool Hub::writeLightToCsv(const string& fileName, const TelemetryRecord &Record){
    ofstream out(fileName);
    if(!out.is_open()){
        return false;
    }

    out << "ts,device,light\n";

    for(int i = 0; i < Record.get_size(); i++){
        out << Record.get_ts(i) << ',' << Record.get_device(i) << ',' << (Record.get_light(i) ? "TRUE" : "FALSE") << '\n';
    }
    return true;
}

bool Hub::writeLpgToCsv(const string& fileName, const TelemetryRecord &Record){
    ofstream out(fileName);
    if(!out.is_open()){
        return false;
    }

    out << "ts,device,lpg\n";

    for(int i = 0; i < Record.get_size(); i++){
        out << Record.get_ts(i) << ',' << Record.get_device(i) << ',' << Record.get_lpg(i) << '\n';
    }
    return true;
}

bool Hub::writeMotionToCsv(const string& fileName, const TelemetryRecord &Record){
    ofstream out(fileName);
    if(!out.is_open()){
        return false;
    }

    out << "ts,device,motion\n";

    for(int i = 0; i < Record.get_size(); i++){
        out << Record.get_ts(i) << ',' << Record.get_device(i) << ',' << (Record.get_motion(i) ? "TRUE" : "FALSE") << '\n';
    }
    return true;
}

bool Hub::writeSmokeToCsv(const string& fileName, const TelemetryRecord &Record){
    ofstream out(fileName);
    if(!out.is_open()){
        return false;
    }

    out << "ts,device,smoke\n";

    for(int i = 0; i < Record.get_size(); i++){
        out << Record.get_ts(i) << ',' << Record.get_device(i) << ',' << Record.get_smoke(i) << '\n';
    }
    return true;
}

bool Hub::writeTempToCsv(const string& fileName, const TelemetryRecord &Record){
    ofstream out(fileName);
    if(!out.is_open()){
        return false;
    }

    out << "ts,device,temp\n";

    for(int i = 0; i < Record.get_size(); i++){
        out << Record.get_ts(i) << ',' << Record.get_device(i) << ',' << Record.get_temp(i) << '\n';
    }
    return true;
}

Hub::~Hub()
{
}