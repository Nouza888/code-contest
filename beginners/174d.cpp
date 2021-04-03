#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    int n;
    cin >> n;
    string a;
    cin >> a;
    int Rcnt=0;
    int ans=0;
    rep(i,n){
        if(a[i]=='R') Rcnt++;
    }
    if(a.length()>Rcnt){
        for(int i=Rcnt;i<a.length();i++){
            if(a[i]=='R') ans++;
        }
    }
    cout << ans << endl;
    return 0;
}