#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    int n;cin>>n;
    if(n%2==0)
        cout << "Sakurako"<<endl;
    else
        cout << "Kosuke"<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }

    return 0;
}