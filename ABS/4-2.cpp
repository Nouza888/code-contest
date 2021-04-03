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
    int ans=-1;
    bool flg=true;
    while(flg){
        for(int i=0;i<a.size();i++){
            if(a.at(i)%2==0) a.at(i)=a.at(i)/2;
            else flg=false;
        }
        ans++;
    }
    cout << ans << endl;
    return 0;
}