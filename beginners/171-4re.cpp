#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

const ll num = 100005;

int main(){
    int n,q;
    cin >> n;
    vector<ll> cnt(num);
    rep(i,n){
        int a;
        cin >> a;
        cnt[a]++;
    }
    ll total=0;
    rep(i,num) total+=i*cnt[i];
    cin >>q;
    rep(i,q){
        int b,c;
        cin >> b >> c;
            total -= b*cnt[b];
    total -= c*cnt[c];
    cnt[c] += cnt[b]; cnt[b] = 0;
    total += b*cnt[b];
    total += c*cnt[c];
        cout << total << endl;
    }
    return 0;
}