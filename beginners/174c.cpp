#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    ll k;
    cin >> k;
    int ans=-1;
    int k1=k%10;
    int kd=0;
    int num=k;
    while(num>0){
        num /= 10;
        kd++;
    }
    bool flg=true;
    string s7="";
    rep(i,kd){
        s7=s7+"7";
    }
    if(k1==1||k1==3||k1==7||k1==9){
        while(flg){
            
        }
    return 0;
}