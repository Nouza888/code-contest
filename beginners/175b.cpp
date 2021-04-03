#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    int n;
    cin >> n;
    vector<ll> x(n);
    rep(i,n) cin>>x.at(i);
    sort(x.begin(),x.end());
    int ans=0;
    int cnt=0;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                cnt++;
            if(x.at(i)+x.at(j)>x.at(k) && x.at(j)+x.at(k)>x.at(i) && x.at(k)+x.at(i)>x.at(j)){
                if(x.at(i)==x.at(j) || x.at(j)==x.at(k) || x.at(k)==x.at(i)){
                    continue;
                }else{
                ans++;
            }}
    }}}
    cout << ans << endl;
    return 0;
}