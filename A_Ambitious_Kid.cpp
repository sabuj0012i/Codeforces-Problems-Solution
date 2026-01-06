#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x<0) x=x*-1;
        v[i]=x;
    }

    sort(v.begin(),v.end());

    cout<<v[0]<<endl;
    return 0;
}