#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    vector<ll> a(n+m);
    ll sum=0;
    int cnt=0;
    rep(i,n+m)    cin >> a[i];
    sort(a.begin(),a.end());
    rep(i,n+m){
        if(a[i]<=k-sum){
            sum+=a[i];
            cnt++;
        }else{
            break;
        }
    }
    cout << cnt <<endl;
    return 0;
}