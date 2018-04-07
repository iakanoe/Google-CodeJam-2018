#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a; cin >> a;
        int gridSize = a + a % 3;
        int height = gridSize / 3;
        bool grid[gridSize][3];
        for(int i = 0; i < gridSize; i++)
            for(int j = 0; j < 3; j++)
                grid[i][j] = false;
        int actualI=1;
        bool done = false;
        while(!done){
            cout << actualI+1 << " 2" << endl;
            int i,j; cin >> i >> j;
            if(i < 1 && j < 1) break;
            grid[i-1][j-1] = true;
            if(!(grid[actualI - 1][0] &&
               grid[actualI - 1][1] &&
               grid[actualI - 1][2] &&
               grid[actualI][1] &&
               grid[actualI][2] &&
               grid[actualI][0] &&
               grid[actualI + 1][1] &&
               grid[actualI + 1][2] &&
               grid[actualI + 1][0]))
               continue;
            actualI += 3;
            while(actualI+1 >= height) actualI--;
        }
    }
}
