#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

ll sum(ll num){
    if(num < 10) return num;
    return sum(num/10) + num%10;
}

int main(){
    ll n;
    cin >> n;
    while(n>= 10 )
    {
        n=sum(n);
    }
    if(n%9==0) cout << "Yes" << endl;
    else if(n%9!=0) cout << "No" << endl;
    return 0;
}