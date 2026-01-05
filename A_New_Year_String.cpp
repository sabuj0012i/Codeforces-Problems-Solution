#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    int n;cin>>n;
    string str;cin>>str;
    
        if (str.find("2025") != string::npos && str.find("2026") == string::npos) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }

    return 0;
}