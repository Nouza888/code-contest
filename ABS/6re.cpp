#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(),a.end()); //配列aを昇順ソート
    reverse(a.begin(),a.end());//さらに逆順にすれば降順になる
    int alice,bob; //アリスとボブそれぞれの手札の総和
    rep(i,a.size()){
        if(i%2==0) alice+=a[i]; //インデックスが0,2,4...番目をアリスに
        else bob+=a[i];         //インデックスが1,3,5...番目をボブに
    }
    int ans=alice-bob;
    cout << ans << endl;
    return 0;
}