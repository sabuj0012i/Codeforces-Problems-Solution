#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string str1 = "##";
        string str2 = "..";

        for(int i = 0;i<2*n;i++){
            for(int k=0;k<2*n;k++){
                cout<<((i/2) + (k/2) &1 ? '.' : '#');
            }
            cout<<endl;
        }
    }
}