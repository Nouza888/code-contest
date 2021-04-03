#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    int k;
    string s,ans;
    cin >>k >> s;
    if(s.length()<=k){
        cout << s <<endl;
    }else{
        ans=s.substr(0,k)+"...";
        cout << ans << endl;
    }
    return 0;
}