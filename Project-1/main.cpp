#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm> 

using namespace std;

int main() {
    ifstream inputFile("iot_telemetry_data.csv");
    if (!inputFile.is_open()) {
        cerr << "Error: Could not open input file." << endl;
        return 1;
    }

    ofstream coFile("co_output.csv");
    ofstream humidityFile("humidity_output.csv");
    ofstream lightFile("light_output.csv");
    ofstream lpgFile("lpg_output.csv");
    ofstream motionFile("motion_output.csv");
    ofstream smokeFile("smoke_output.csv");
    ofstream tempFile("temp_output.csv");


    coFile << "ts,device,co" << endl;
    humidityFile << "ts,device,humidity" << endl;
    lightFile << "ts,device,light" << endl;
    lpgFile << "ts,device,lpg" << endl;
    motionFile << "ts,device,motion" << endl;
    smokeFile << "ts,device,smoke" << endl;
    tempFile << "ts,device,temp" << endl;

    cout << "Reading data..." << endl;

    string line;

    getline(inputFile, line); 

    int recordCount = 0;

    while (getline(inputFile, line)) {

        line.erase(remove(line.begin(), line.end(), '\"'), line.end());

        stringstream ss(line);
        string token;
        vector<string> row;

        while (getline(ss, token, ',')) {
            row.push_back(token);
        }

        if (row.size() >= 9) {
            string ts = row[0];
            string device = row[1];


            coFile       << ts << "," << device << "," << row[2] << endl;
            humidityFile << ts << "," << device << "," << row[3] << endl;
            lightFile    << ts << "," << device << "," << row[4] << endl;
            lpgFile      << ts << "," << device << "," << row[5] << endl;
            motionFile   << ts << "," << device << "," << row[6] << endl;
            smokeFile    << ts << "," << device << "," << row[7] << endl;

            try {

                double tempF = stod(row[8]);
                double tempC = (tempF - 32.0) * (5.0 / 9.0);
                
                tempFile << ts << "," << device << "," << tempC << endl;
            } 
            catch (...) {
                tempFile << ts << "," << device << "," << row[8] << endl;
            }

            recordCount++;
        }
    }

    inputFile.close();
    coFile.close();
    humidityFile.close();
    lightFile.close();
    lpgFile.close();
    motionFile.close();
    smokeFile.close();
    tempFile.close();

    cout << "Total records read: " << recordCount << endl;
    cout << "Converted temperatures to Celsius." << endl;

    return 0;
}