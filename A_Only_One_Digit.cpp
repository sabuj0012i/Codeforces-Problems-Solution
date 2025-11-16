#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    int x;cin>>x;
    int a,b=9;
    while(1){
         a =x%10;
        if(b>a){
            b=a;
        }
        x=x/10;

        if(x==0){
            cout<<b<<endl;
            break;
        } 
        
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}