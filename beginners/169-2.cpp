#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;
const ll limit =1e18;
int main(){
    int n;
    cin >> n;
    ll ans=1;
    bool flg = false;
    rep(i,n){
        ll a;
        cin >> a;
        if(a==0){
            cout << 0 << endl;
            return 0;
        }else if(flg || a>(limit/ans)){
            flg=true;
            continue;
        }
        ans*=a;
    }
    if(flg) cout<<-1<<endl;
    else cout << ans << endl;
    return 0;
}