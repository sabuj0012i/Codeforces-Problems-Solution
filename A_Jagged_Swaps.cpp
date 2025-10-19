#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    int n;cin>>n;
    vector<int>v(n),v2;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    v2=v;
    sort(v2.begin(),v2.end());
    if(v2[0]==v[0]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}