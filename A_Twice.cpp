#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        set<int>s;
        int a=0;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            if(s.count(x)) {++a;s.erase(x);}
            else s.emplace(x);
        }

        cout<<a<<endl;

    }

    return 0;
}