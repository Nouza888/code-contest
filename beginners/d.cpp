#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    int n;
    cin >> n;
    int m=1000;
    vector<int> a(n);
    rep(i,n) cin >> a.at(i);
    for(int i=1; i<n; i++){
        if(a.at(i)>a.at(i-1)){
            m*=(1+((a.at(i)-a.at(i-1))/a.at(i-1)));
        }
    }
    cout << m << endl;
    return 0;
}