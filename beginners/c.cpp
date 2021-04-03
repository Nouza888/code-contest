#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    int n,k;
    cin >> n>> k;
    vector<int> a(n+4,1);
    rep(i,n) cin >> a.at(i);
    vector<ll> b(n+4,1);
    for(int i=k-1; i<n; i++){
        for(int j=i; j>i-k; j--){
            b.at(i)*=a.at(j);
        }
    }
    return 0;
}