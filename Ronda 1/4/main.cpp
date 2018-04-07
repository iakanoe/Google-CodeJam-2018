#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

#define PI 3.1415926535

int main(){
    cout << setprecision(10);
    int t; cin >> t;
    for(int casen = 1; casen <= t; casen++){
        cout << "Case #" << casen << ":" << endl;
        double a; cin >> a;
        double alpha = acos(a/sqrt(2));
        double x = cos(alpha + PI/4)/2;
        double y = sin(alpha + PI/4)/2;
        cout << x << " " << y << " 0" << endl;
        x = cos(alpha - PI/4)/2;
        y = sin(alpha - PI/4)/2;
        cout << x << " " << y << " 0" << endl << "0 0 0.5" << endl;
    }
}
