#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;cin>>t;
    while(t--){
        string a,b,c;
        int n,m;cin>>n>>a;
        cin>>m>>b>>c;
        string a_l="";
        for(int i=0;i<m;i++){
            if(c[i]=='V'){
                a_l += b[i];
            }else{
                a+=b[i];
            }
        }

        reverse(a_l.begin(),a_l.end());

        cout<<a_l+a<<endl;
    }

    return 0;
}