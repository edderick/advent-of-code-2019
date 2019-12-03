#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[]) {
    int value;
    vector<int> values;

    while (cin >> value) {
        values.push_back(value);
        cin.ignore();
    }

    values[1] = 12; 
    values[2] = 2;

    int pc = 0;

    while (true) {
        for (const auto v: values) {
            cout << v << ","; 
        }
        cout << "\nPC = " << pc << " Value = " << values[pc] << "\n";

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
                cout << "Answer: " << values[0] << "\n";
                return 0;
        }
    }
}
