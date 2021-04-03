#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    ll x,k,d;
    cin >> x >> k >> d;
    x=abs(x);
    ll temp=0;
    if(x-(k*d)<d){
    while(x>=d){
        x=x-d;
        temp++;
        if(temp>=k) break;
    }
    if(temp>=k){
        cout << x << endl;
        return 0;
    }else{
        k = k-temp;
    }
    if(k%2==0){
        cout << abs(x) << endl;
        return 0;
    }else if(k%2==1){
        cout << abs(x-d) <<endl;
        return 0; 
    }}
    else if(x-(k*d)>=d){
        cout << abs(x-(k*d)) << endl;
        return 0;
    }
}