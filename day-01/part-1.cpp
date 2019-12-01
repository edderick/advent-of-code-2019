#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    long sum = 0; 
    long mass;

    while (cin >> mass) {
        const long fuel = (mass / 3) - 2;
        sum += fuel;
        cout << "Mass: " << mass << " => Fuel: " <<  fuel << '\n';
    }

    cout << "Total: " << sum << '\n';
}
