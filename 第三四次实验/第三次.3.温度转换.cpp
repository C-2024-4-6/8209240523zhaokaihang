#include <iostream>
#include <iomanip> 
#include "mytemperature.h"
using namespace std;
int main() {
        cout << fixed << setprecision(2);
        cout << "Celsius\t\tFahrenheit\t|\tFahrenheit\t\tCelsius" << endl;
        for (double celsius = 40.0; celsius >= 31.0; celsius --) 
        {
            double fahrenheit = celsius_to_fah(celsius);
            double fahrenheit2 = 120.0 - (40.0 - celsius) * 10.0;
            double celsius2 = fahrenheit_to_cels(fahrenheit2);
                    cout << celsius << "\t\t" << fahrenheit << "\t\t|\t"
                << fahrenheit2 << "\t\t" << celsius2 << endl;
        }
    return 0;
}
