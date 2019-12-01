#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    long sum = 0; 
    long mass;

    while (cin >> mass) {
        long fuel = (mass / 3) - 2;
        long fuelTotal = fuel;
        sum += fuel;

        cout << "Mass: " << mass << " => Fuel: " << fuelTotal << '\n';

        while (fuel > 0) {
            long fuelCost = (fuel / 3) - 2;
            if (fuelCost >= 0) {
                sum += fuelCost;
                fuelTotal += fuelCost;
            }
            cout << "  Fuel Mass: " << fuel << " Cost: " << fuelCost << '\n';
            fuel = fuelCost;
        }
    
        cout << "With Fuel Cost: " << fuelTotal << '\n';
    }

    cout << "Total: " << sum << '\n';
}
