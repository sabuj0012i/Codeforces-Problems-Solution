#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    sort(v.rbegin(),v.rend());

    cout<<v[0]<<endl;

    return;
    

    
}

int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}