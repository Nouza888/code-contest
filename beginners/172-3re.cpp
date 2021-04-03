#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    vector<ll> a(n);
    vector<ll> b(m);
    ll sum=0;
    ll cnt=0;
    rep(i,n)    cin >> a[i];
    rep(i,m)    cin >> b[i];
    rep(i,n+m){
        if((a[0]!=0 && a[0]<=b[0])||b[0]== 0){
            if(a[0]<=k-sum){
                sum+=a[0];
                cnt++;
                a.erase(a.begin());
                a.push_back(0);
            }else break;
        }else if((b[0]!=0&&a[0]>b[0])||a[0]==0){
            if(b[0]<=k-sum){
                sum+=b[0];
                cnt++;
                b.erase(a.begin());
                b.push_back(0);
            }else break;
        }
    }
    cout<<cnt<<endl;
    cout <<sum<<endl;
    return 0;
}