#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    int n;
    int t[100005],x[100005],y[100005];//t,x,y
    cin >> n;
    rep(i,n){
        cin >> t[i+1] >> x[i+1] >> y[i+1];
    }
    bool flg=false;
    rep(i,n){
        int dt=t[i+1]-t[i];
        int dd=abs(x[i+1]-x[i])+abs(y[i+1]-y[i]);
        if(dt<dd){
            flg=false;
            break;
        }else if(dt%2==dd%2){
            flg=true;
        }
    }
    cout << (flg?"Yes":"No") << endl;

    return 0;
}