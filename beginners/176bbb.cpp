#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

ll wa(ll num){
    int dig;
    int sum;
    while(num){
        dig=num%10;
        sum+=dig;
        num/=10;
    }
    return sum;
}

int main(){
    ll n;
    cin >> n;
    while(n>=10){
        n=wa(n);
        cout << "wa:" << n << endl;
        }
    if(n%9==0) cout << "Yes" << endl;
    else if(n%9!=0) cout << "No" << endl;
    return 0;
}