#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    int m,a,b,c;cin>>m>>a>>b>>c;
    int t_seat= m*2;
    int x,y,m1=m,m2=m;
    if(m1>=a) {x=a;}
    else {x=m1;}

    if(m2>=b){y=b;}
    else{y=m2;}

    int em = c;

    if(x+y < t_seat){
        int ex = t_seat- (x+y);
        if(em>ex) cout<<x+y+ex<<endl;
        else cout<<x+y+em<<endl;


    }
    else cout<<x+y<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }

    return 0;
}