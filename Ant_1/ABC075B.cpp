#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<string>> a(h,vector<string>(w));
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin >> a.at(i).at(j);
        }
    }
    
    return 0;
}