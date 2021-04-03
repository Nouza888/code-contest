#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    int a, b, c, k;
    cin >> a >> b >> c >> k;
    int cnt=0;
    bool flg=true;
    while(flg){
        if(a>=b){
            b*=2;
            cnt++;
        }if(b>=c){
            c*=2;
            cnt++;
        }
        if(a<b && b<c) flg=false;
    }
    if(cnt<=k) cout << "Yes"<<endl;
    else cout << "No" << endl;
    return 0;
}