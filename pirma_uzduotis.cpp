#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    // Read from the text file:
    ifstream dataFile("data_1.txt");

    // Check if the data file is open:
    if (!dataFile.is_open()) {
        cerr << "Error opening file 'data_1.txt'" << endl;
        return 1; // Return an error code
    }

    // Opening 'results_1.txt' file:
    ofstream resultsFile("results_1.txt");

    // Check if the results file is open:
    if (!resultsFile.is_open()) {
        cerr << "Error opening file 'results_1.txt'" << endl;
        return 1; // Return an error code
    }

    int cities;
    const int days = 7;

    if (dataFile >> cities) {

        if (cities > 0) {

            for(int i=0; i<cities; i++) { // Going through all cities

                int totalWeekTemperature = 0;

                for(int j=0; j<days; j++) { // Going through all temperatures
                    int tempDayTemperature;
                    // Storing each day temperature into variable 'tempDayTemperature':
                    dataFile >> tempDayTemperature;
                    // Calculating week's total temperature:
                    totalWeekTemperature += tempDayTemperature;
                }

                // Calculating average city temperature for the week:
                double averageWeekTemperature = (totalWeekTemperature * 1000.0 / 7) / 1000.0;

                // Writing index (i+1) and averageWeek temperature into results file:
                resultsFile << i+1 << " " << fixed << setprecision(3) << averageWeekTemperature <<"\n";
            }
        }
    }

    // Close both data & results files:
    dataFile.close();
    resultsFile.close();

    cout << "Program has ended, please check 'results_1.txt' file" << endl;
    return 0;
}
