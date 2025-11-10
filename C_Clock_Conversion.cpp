#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    string str;cin>>str;
    string str1,str2;
    str1+=str[0];
    str1+=str[1];

    str2+=str[3];
    str2+=str[4];

    int hh = stoi(str1);
    int mm = stoi(str2);
    bool flag=0;
    if(hh>11) flag = 1;

    if(hh>12) hh-=12;
    if(hh==0) {hh=12;flag=0;}
    
    if(hh<10) cout<<"0"<<hh<<":";
    else cout<<hh<<":";

    if(mm<10) cout<<"0"<<mm;
    else cout<<mm;

    if(flag) cout<<" PM"<<endl;
    else cout<<" AM"<<endl;


    
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }

    return 0;
}