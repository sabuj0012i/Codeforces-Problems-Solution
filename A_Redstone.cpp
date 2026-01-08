#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        set<int> seen;
        bool found = false;

        for(int i = 0; i < n; i++){
            if(seen.find(v[i]) != seen.end()){
                cout << "YES\n";
                found = true;
                break;
            }
            seen.insert(v[i]);
        }

        if(!found) cout << "NO\n";
    }
    return 0;
}
