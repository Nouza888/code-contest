#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    ll n,cnt;
    cin >>n;
    string ans="";
    while(n){
        n--;
        ans+='a'+n%26;
        n/=26;
    }
    reverse(ans.begin(),ans.end());
    cout << ans << endl;
    return 0;
}