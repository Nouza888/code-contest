#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    ll a;
    cin >>a;
    double b;
    cin >>b;
    ll ib = b*100+0.5;
    a*=ib;
    a/=100;
    cout<<a << endl;
    return 0;
}