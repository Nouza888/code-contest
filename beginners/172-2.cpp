#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    string s,t;
    cin >> s >> t;
    int cnt=0;
    rep(i,s.length()){
        if(s[i]!=t[i]){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}