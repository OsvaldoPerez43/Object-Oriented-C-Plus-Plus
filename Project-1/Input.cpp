#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include "TelemetryRecord.h"
#include "Input.h"
using namespace std;

bool loadDataFromFile(const string& filename, TelemetryRecord& Record){ //It's a bool for debugging purposes, if the file fails to open I'll know due to it return false
    ifstream in(filename); // Opens the file in the argument
    if(!in.is_open()){ // This is the check for whether or not the file opens. Quits function if it doesn't with an error
        return false;
    }

    string line; // This just temporarily stores each line in a string, allowing the program to go line by line and do its thing without having to rememeber every line
    getline(in, line); // This just skips the header line (the one with all the titles of the data). It reads through the file until it counters a new line (the default delimitter) 

    //This repeats until the file runs out of values to be inputted
    while(getline(in, line)){
        stringstream ss(line);
        string tsStr, deviceStr, coStr, humidityStr, lightStr, lpgStr, motionStr, smokeStr, tempStr;

        getline(ss, tsStr, ','); // ss is the stream where its reading the strings from
        getline(ss, deviceStr, ','); // the deviceStr (and all the other Str's) are the strings where the input is stored
        getline(ss, coStr, ','); // The final argument is the delimitter, or the character that it looks for to know when to stop, in this case a comma ','
        getline(ss, humidityStr, ',');
        getline(ss, lightStr, ',');
        getline(ss, lpgStr, ',');
        getline(ss, motionStr, ',');
        getline(ss, smokeStr, ',');
        getline(ss, tempStr, ',');

        double ts = stod(tsStr); // stod converts the strings into the desired data type (with stod its string to double)
        string device = deviceStr; // This does not need to be converted as the desired output is a string, which it already is
        double co = stod(coStr);
        double humidity = stod(humidityStr);

        bool light; // This chunk of code is to convert string to bool, since bool doesn't have a consistent representation it has to be done on a case to case basis
        if(lightStr == "FALSE"){ // In this case, it considers "FALSE" as a 0 bool and "TRUE" as a 1 bool
            light = 0;
        }
        else if(lightStr == "TRUE"){
            light = 1;
        }

        double lpg = stod(lpgStr);

        bool motion; // Same as for light
        if(motionStr == "FALSE"){
            motion = 0;
        }
        else if(motionStr == "TRUE"){
            motion = 1;
        }

        double smoke = stod(smokeStr);
        double temp = stod(tempStr);
        /*
        Calling add_row so each of these temporarily stored values can be permanently stored in TelemetryRecord vectors
        */
        Record.add_row(ts, device, co, humidity, light, lpg, motion, smoke, temp); 
    }
    return true; // Means the program ran to completion
}