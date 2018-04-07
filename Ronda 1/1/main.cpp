#include <iostream>
#include <algorithm>
using namespace std;

int getDmg(string v){
    int gunDmg = 1;
    int dmgMade = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i] == 'S'){
            dmgMade += gunDmg;
        } else if(v[i] == 'C'){
            gunDmg *= 2;
        }
    }
    return dmgMade;
}

string swapChars(string v, int n){
    char aux1 = v[n];
    v[n] = v[n + 1];
    v[n + 1] = aux1;
    return v;
}

int main(){
    int t; cin >> t;
    int initialT = t;
    while(t--){
        int finalAnswer = 0;
        long d; cin >> d;
        string p; cin >> p;
        if(count(p.begin(), p.end(), 'S') > d){
            cout << "Case #" << initialT-t << ": IMPOSSIBLE" << endl;
            continue;
        }
        while(getDmg(p) > d){
            p = swapChars(p, p.rfind("CS"));
            finalAnswer++;
        }
        cout << "Case #" << initialT-t << ": " << finalAnswer << endl;
    }
}
