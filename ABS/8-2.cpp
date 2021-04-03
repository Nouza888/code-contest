#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a.at(i);
    sort(a.begin(),a.end());
    int ans=1;
    for(int i=0;i<n-1;i++){
        if(a.at(i)!=a.at(i+1)) ans++;
    }
    cout << ans << endl;
    return 0;
}