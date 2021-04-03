#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    int a,b,c,x;
    cin >> a >> b >> c >> x;
    int cnt=0;
    rep(i,a+1){
        rep(j,b+1){
            rep(k,c+1){
                if(500*i+100*j+50*k==x) cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}