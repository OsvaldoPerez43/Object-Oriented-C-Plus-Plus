#ifndef TELEMETRYRECORD_H
#define TELEMETRYRECORD_H

#include <string>
#include <vector>
using namespace std;

class TelemetryRecord{
    public:
        //Constructor
        TelemetryRecord();
        //Accessor Functions
        double get_ts(int i) const;
        string get_device(int i) const;
        double get_co(int i) const;
        double get_humidity(int i) const;
        bool get_light(int i) const;
        double get_lpg(int i) const;
        bool get_motion(int i) const;
        double get_smoke(int i) const;
        double get_temp(int i) const;
        int get_size() const;
        //Mutator Functions
        void add_row(double new_ts, string new_device, double new_co, double new_humidity, bool new_light, double new_lpg, bool new_motion, double new_smoke, double new_temp);
        void update_temp(int i, double upd_temp);
        ~TelemetryRecord();
    private:
        vector<double> ts;
        vector<string> device;
        vector<double> co;
        vector<double> humidity;
        vector<bool> light;
        vector<double> lpg;
        vector<bool> motion;
        vector<double> smoke;
        vector<double> temp;
};
#endif