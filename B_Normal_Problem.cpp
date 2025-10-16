#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
//This is Md. Sabuj Hossain
//This is solution hunting ,not problem solving

void solve(){
    string str,str3;cin>>str;
    string str2 = string(str.rbegin(),str.rend());
    for(int i=0;i<str2.size();i++){
        if(str2[i]=='p') str3 += "q";
        else if(str2[i]=='q') str3 += "p";
        else str3 += str2[i];
    }

    cout<<str3<<endl;
}

int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }

    return 0;
}