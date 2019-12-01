#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    long sum = 0; 
    long mass;

    while (cin >> mass)
    {
        long fuel = (mass / 3) - 2;
        sum += fuel;
        cout << fuel << '\n'; 
    }

    cout << sum << '\n';
}
