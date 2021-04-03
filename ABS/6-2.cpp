#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int sum(int x){
    int temp=0;
    while(x>0){
        temp+=x%10;
        x/=10;
    }
    return temp;
}

int main(){
    int n,a,b;
    cin >> n >> a >> b;
    int ans=0;
    for(int i=0;i<=n;i++){
        int temp2 = sum(i);
        if(temp2>=a && temp2<=b){
            ans += i;
        }
    }
    cout << ans << endl;
    return 0;
}