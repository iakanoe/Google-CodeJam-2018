#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    for(int casen = 1; casen <= t; casen++){
        int n; cin >> n;
        long v[n]; for(int i = 0; i < n; i++) cin >> v[i];
        bool done = 0;
        while(!done){
            done = 1;
            for(int i = 0; i < n-2; i++){
                if(v[i] > v[i+2]){
                    done = 0;
                    long aux = v[i];
                    v[i] = v[i+2];
                    v[i+2] = aux;
                }
            }
        }
        done = 0;
        for(int i = 0; i < n-1; i++){
            if(v[i] > v[i+1]){
                done = 1;
                cout << "Case #" << casen << ": " << i << endl;
                break;
            }
        }
        if(!done) cout << "Case #" << casen << ": OK" << endl;
    }
}
