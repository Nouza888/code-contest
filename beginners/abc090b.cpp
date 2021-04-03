#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    int a,b;
    cin >> a >> b;
    int cnt=0;
    for(int i=a;i<=b;i++){
        int x=i%10;
        int xx=i%100000;
        int y=i%100;
        int yy=i%10000;
        if(x==xx&&y==yy) cnt++;
    }
    cout << cnt << endl;
    return 0;
}