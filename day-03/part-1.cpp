#include <iostream>
#include <vector>
#include <string>
#include <sstream> 
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]) {

    const int GRID_SIZE = 20000;

    vector<vector<int>> grid(GRID_SIZE, vector<int>(GRID_SIZE, 0)); 

    string line1; 
    getline(cin, line1);

    string line2; 
    getline(cin, line2);

    stringstream ss(line1);

    int curX = GRID_SIZE / 2;
    int curY = GRID_SIZE / 2;

    char c; 
    int d; 
    while (ss >> c >> d) {

        int dX = 0; 
        int dY = 0; 

        switch (c) {
            case 'U': 
                dY = -1; 
                break; 
            case 'D':
                dY = 1; 
                break;
            case 'L': 
                dX = -1; 
                break;
            case 'R': 
                dX = 1; 
                break;
        }

        cout << curX << "," << curY << ":" << d << "\n";

        for (int i = 0; i < d; i++){
            grid[curX][curY] = 1;
            curX += dX; 
            curY += dY; 
        }

        ss.ignore(); 
    }

    stringstream ss2(line2);

    curX = GRID_SIZE / 2;
    curY = GRID_SIZE / 2;

    cout << "NEXT" << line2 << "\n";

    while (ss2 >> c >> d) {
        int dX = 0; 
        int dY = 0; 

        switch (c) {
            case 'U': 
                dY = -1; 
                break; 
            case 'D':
                dY = 1; 
                break;
            case 'L': 
                dX = -1; 
                break;
            case 'R': 
                dX = 1; 
                break;
        }

        cout << curX << "," << curY << ":" << d << "\n";

        for (int i = 0; i < d; i++){
            if (grid[curX][curY] == 1)
            {
                grid[curX][curY] = 3;
            }
            else {
                grid[curX][curY] = 2;
            }
            curX += dX; 
            curY += dY; 
        }

        ss2.ignore(); 
    }

    //for (int i = 0; i < GRID_SIZE; i++)
   // {
   //     for (int j = 0; j < GRID_SIZE; j++)
   //     {
   //         cout << grid[j][i] << ", ";
   //     }
    //    cout << "\n";
   // }

    
    for (int i = 0; i < GRID_SIZE; i++)
    {
        for (int j = 0; j < GRID_SIZE; j++)
        {
            if (grid[j][i] == 3)
            {
                cout << i << ", "  << j << ": " << (abs(i - (GRID_SIZE /2)) + abs(j - (GRID_SIZE / 2))) << "\n"; 
            }
        }
    }

    return 0;
}
