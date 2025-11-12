#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    int n;cin>>n;
    string s,t;cin>>s>>t;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    bool con = true;
    for(int i = 0;i<n;i++){
        if(s[i]!=t[i]){
            con=false;
            break;
        }
    }

    if(con) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }

    return 0;
}