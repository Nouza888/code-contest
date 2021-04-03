#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> a(2,vector<int>(m));
    rep(i,m){
        cin >> a.at(0).at(i) >> a.at(1).at(i); 
    }
    for(int bit=0;bit<(1<<n);bit++){
        for(int i=0;i<n;i++){
            
        }
    }
    return 0;
}