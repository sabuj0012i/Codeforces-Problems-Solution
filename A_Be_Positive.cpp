#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a=0,b=0;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];

            if(v[i]==0) a++;
            if(v[i]==-1) b++;
        }

        if(b%2==1) a+=2;

        cout<<a<<endl;
    }

    return 0;
}