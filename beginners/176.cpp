#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    int n;
    cin >> n;
    vector<ll> a(n);
    rep (i,n){
        cin >> a.at(i);
    }
    ll ans=0;
    for(int i=1;i<a.size();i++){
        if(a.at(i)<a.at(i-1)){
            ans+=a.at(i-1)-a.at(i);
            a.at(i)=a.at(i-1);
        }
    }
    cout << ans << endl;
    return 0;
}