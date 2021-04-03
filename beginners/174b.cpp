#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    int n;
    double d=0;
    cin >> n >> d;
    int cnt=0;
    int x,y;
    double d2=0;
    rep(i,n){
        cin >> x >> y;
        d2=sqrt(pow(abs(x),2)+pow(abs(y),2));
        if(d2<=d) cnt++;
    }
    cout << cnt << endl;
    return 0;
}