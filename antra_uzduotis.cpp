#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // Read from the text file:
    ifstream dataFile("data_2.txt");

    // Check if the data file is open:
    if (!dataFile.is_open()) {
        cerr << "Error opening file 'data_2.txt'" << endl;
        return 1; // Return an error code
    }

    // Opening 'results_2_1.txt' file:
    ofstream resultsFile1("results_2_1.txt");

    // Check if the 1st results file is open:
    if (!resultsFile1.is_open()) {
        cerr << "Error opening file 'results_2_1.txt'" << endl;
        return 1; // Return an error code
    }

    // Opening 'results_2_2.txt' file:
    ofstream resultsFile2("results_2_2.txt");

    // Check if the 2nd results file is open:
    if (!resultsFile2.is_open()) {
        cerr << "Error opening file 'results_2_2.txt'" << endl;
        return 1; // Return an error code
    }

    string strInput;
    int intInput;
    int positiveSum = 0;
    int negativeSum = 0;

    // Reading file by ";" as a separator:
    while (getline(dataFile, strInput,';')) {
        // Converting string to integer
        intInput = stoi(strInput);

        if (intInput>0) {
            // Calculating sum of positive inputs:
            positiveSum += intInput;
            // Writing positive input into 1st results file:
            resultsFile1 << intInput << " ";
        } else {
            // Calculating sum of negative inputs:
            negativeSum += intInput;
            // Writing negative input into 2nd results file:
            resultsFile2 << intInput << " ";
        }
    }

    //Writing the sum of positive inputs into 1st results file:
    resultsFile1 << positiveSum;
    //Writing the sum of negative inputs into 2nd results file:
    resultsFile2 << negativeSum;

    // Close both data & results files:
    dataFile.close();
    resultsFile1.close();
    resultsFile2.close();

    cout << "Program has ended, please check 'results_2_1.txt' & 'results_2_2.txt' file" << endl;
    return 0;
}
