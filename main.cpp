// Use of structures
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// declare struct weatherStats
struct WeatherStats
{
    int rain;
    int highTemp;
    int lowTemp;
    double avgTemp;
};

// function prototype
void getData(WeatherStats &);
double monthlyAvgRain(const WeatherStats[], const int);
int totalRain(const WeatherStats[], const int);
void getHighest(const WeatherStats[], const int);
void getLowest(const WeatherStats[], const int);
double getYearlyAvgTemp(const WeatherStats[], const int);

// global constant
const int NUM_MONTHS = 12;

// a global string array to get month names
string monthNames[NUM_MONTHS] = {"January", "February", "March",
                                "April", "May", "June", "July",
                                "August", "September", "October",
                                "November", "December"};

int main(int argc, char* argv[])
{
    // defien array of 12 WeatherStats structure variables
    WeatherStats data[NUM_MONTHS];

    // get data for all months
    for (int i = 0; i < NUM_MONTHS; i++)
    {
        cout << "Enter data for " << monthNames[i];
        cout << endl;
        getData(data[i]);
        cout << endl << endl;
    }

    // print the output
    cout << "Average monthly rainfall: ";
    cout << monthlyAvgRain(data, NUM_MONTHS);
    cout << "\nYearly total rainfall: ";
    cout << totalRain(data, NUM_MONTHS);
    getHighest(data, NUM_MONTHS);
    getLowest(data, NUM_MONTHS);
    cout << "Yearly average temperature: ";
    cout << getYearlyAvgTemp(data, NUM_MONTHS);
    
    return EXIT_SUCCESS;
}