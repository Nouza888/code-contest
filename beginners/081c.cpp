#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> d(n+1,0);//バケット
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        d.at(a)++;//各数字が何個あるかカウントしていく。
    }
    int kx;//整数が何種類あるかのカウント
    rep(i,d.size()){ 
        if(d.at(i)) kx++;//バケットの各要素が1以上ならカウント
    }
    int ans=0;
    if(kx<=k) ans=0;//種類がそもそもkより小さかったらans=0。これにて完
    else{//種類がkより大きいと計算が必要
        sort(d.begin(), d.end());//まずバケットを昇順ソート。「少なくとも」なので最小の個数を求めていく
        int cnt=0;
        while(cnt<kx-k){
            rep(i,d.size()){
                if(d.at(i)){
                    ans+=d.at(i);
                    cnt++;
                }
            }
        }
    }
    cout <<ans << endl;
    return 0;
}