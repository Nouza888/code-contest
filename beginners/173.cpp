#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    int a,b;
    cin >> a;
    rep(i,100){
        1000*i;
        int ans;
        ans=a-1000*i;
        if(ans<=0){
            b=i;
            break;
        }
    }
    cout << b*1000-a << endl;;

    return 0;
}