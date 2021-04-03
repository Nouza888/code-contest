#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    string s;
    cin >> s;
    int n=s.length();
    ll sum1=0;
    for(int bit=0;bit<(1<<n-1);bit++){
        for(int i=0;i<n;i++){
            int sum2=0;
            if(bit&(1<<i)){
                s.insert(bit,"+");
            }
        }
        cout << s << endl;
    }
    return 0;
}