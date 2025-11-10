#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    string time;cin>>time;
    string hh,mm;
    hh+=time[0];
    hh+=time[1];

    mm+=time[3];
    mm+=time[4];

    int h = stoi(hh);
    int m = stoi(mm);

    bool flag = 0;
    if(h>=12) flag=1;
    if(h<=12){
        if(h==0)
        {
            h = 12;
            flag=1;
        }
        if(h<10){

            cout << "0" << h << ":";
            if (m < 10)
                cout << "0" << m;
            else
                cout << m ;
        }
        else{
            cout << h << ":";
            if (m < 10)
                cout << "0" << m ;
            else
                cout << m ;
        } 
    }else{
        h=h-12;
        if (h < 10){
            cout << "0" << h << ":";
            if (m < 10)
                cout << "0" << m;
            else
                cout << m ;
        }
          
        else{
            cout << h << ":";
            if (m < 10)
                cout << "0" << m ;
            else
                cout << m ;
        }  
    }
    if(flag==0) cout<<" AM"<<endl;
    else cout<<" PM"<<endl;
    
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }

    return 0;
}