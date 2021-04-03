#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    int n;
    cin >> n;
    int cnt=200;
    int a;
    rep(i,n){
        int temp=0;
        cin >>a;
        while(a%2==0){
            a/=2;
            temp++;
        }
        if(temp<=cnt) cnt=temp;
    }        
    cout << cnt << endl;
    return 0;
}