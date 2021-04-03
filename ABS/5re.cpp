#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int sum(int x){  //格桁の和を計算し返すメソッド
    int s=0;   //格桁の和
    while(x>0){
        s+=x%10;
        x/=10;
    }
    return s;
}

int main(){
    int n,a,b;
    cin >> n >> a >> b;
    int ans=0;
    rep(i,n+1){
        int c = sum(i);
        if(c>=a&&c<=b){
            ans+=i;
        }
    }
    cout << ans << endl;
    return 0;
}