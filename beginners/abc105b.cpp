#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    int n;
    cin >> n;
    bool flg=false;
    for(int i=0;i<30;i++){
        for(int j=0;j<30-i;j++){
            if(4*i+7*j==n){
                flg=true;
                break;
            }
        }
    }
    cout << (flg ? "Yes" : "No") << endl;
    return 0;
}