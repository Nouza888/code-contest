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
    reverse(a.begin(),a.end());
    int alice=0;
    int bob=0;
    for(int i=0;i<n;i++){
        if(i%2==0) alice += a.at(i);
        else bob += a.at(i);
    }
    cout << alice-bob << endl;
    return 0;

}