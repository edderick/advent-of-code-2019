#include <iostream>
#include <vector>

using namespace std;

int runProgram(vector<int> values, int noun, int verb)
{
    values[1] = noun; 
    values[2] = verb;

    int pc = 0;

    while (true) {
        switch (values[pc]) {
            case 1:
                values[values[pc + 3]] = values[values[pc + 1]] + values[values[pc + 2]];
                pc += 4;
                break; 
            case 2: 
                values[values[pc + 3]] = values[values[pc + 1]] * values[values[pc + 2]];
                pc += 4; 
                break; 
            case 99: 
                return values[0];
        }
    }
}

int main(int argc, char* argv[]) {
    int value;
    vector<int> values;

    while (cin >> value) {
        values.push_back(value);
        cin.ignore();
    }

    for (int i = 0; i <= 100; i++) {
        for (int j = 0; j <= 100; j++) {
            if (runProgram(values, i, j) == 19690720) {
                cout << "Answer: " << (100 * i + j) << '\n'; 
                return 0;
            }
        }
    }
}
