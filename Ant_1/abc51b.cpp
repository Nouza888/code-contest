#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    int k,s;
    cin >> k >> s;
    int c=0;
    int cnt=0;
    for(int i=0;i<=k;i++){
        for(int j=0;j<=k;j++)
            if(i+j>s) continue;
            else if(i+j==s) cnt++;
            else{
                c=s-(i+j);
                if(c<=k) cnt++;
            }
    }
    cout << cnt << endl;
    return 0;
}
