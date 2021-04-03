#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    string s;
    cin >> s;
    int sum=0;
    for(ll i=0;i<s.length();i++){
        sum+=(s.at(i))-'0';
    }
    if(sum%9==0) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}