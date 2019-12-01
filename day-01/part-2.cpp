#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
    long sum = 0; 
    long mass;

    while (cin >> mass)
    {
        long fuel = (mass / 3) - 2;
        long fuelTotal = fuel;
        sum += fuel;

        while (fuel > 0)
        {
            fuel = (fuel / 3) - 2;
            if (fuel >= 0)
            {
                sum += fuel;
                fuelTotal += fuel;
            }
            cout << "  " << fuel << '\n'; 
        }
    
        cout << fuelTotal << '\n'; 
    }

    cout << sum << '\n';
}
