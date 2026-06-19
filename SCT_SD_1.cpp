#include <iostream>
using namespace std;

int main() {
    int choice;
    double temp, result;

    cout << "Temperature Converter\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Celsius to Kelvin\n";
    cout << "3. Fahrenheit to Celsius\n";
    cout << "4. Fahrenheit to Kelvin\n";
    cout << "5. Kelvin to Celsius\n";
    cout << "6. Kelvin to Fahrenheit\n";
    cout << "Enter your choice (1-6): ";
    cin >> choice;

    cout << "Enter temperature value: ";
    cin >> temp;

    switch (choice) {
        case 1:
            result = (temp * 9.0 / 5.0) + 32;
            cout << "Temperature in Fahrenheit: " << result << " °F";
            break;

        case 2:
            result = temp + 273.15;
            cout << "Temperature in Kelvin: " << result << " K";
            break;

        case 3:
            result = (temp - 32) * 5.0 / 9.0;
            cout << "Temperature in Celsius: " << result << " °C";
            break;

        case 4:
            result = (temp - 32) * 5.0 / 9.0 + 273.15;
            cout << "Temperature in Kelvin: " << result << " K";
            break;

        case 5:
            result = temp - 273.15;
            cout << "Temperature in Celsius: " << result << " °C";
            break;

        case 6:
            result = (temp - 273.15) * 9.0 / 5.0 + 32;
            cout << "Temperature in Fahrenheit: " << result << " °F";
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}