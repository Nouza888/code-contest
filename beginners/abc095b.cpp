#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    int n,x;
    cin >> n >> x;
    vector<int> m(n);
    int min=100000; //一番お菓子の素の消費量が少ないドーナツの時の消費量
    int sum=0; //ドーナツを一個ずつ作った時の合計
    for(int i=0;i<n;i++){
        cin >> m.at(i);
        sum+=m.at(i);
        if(m.at(i)<=min){
            min=m.at(i);
        }
    }
    int ans=n+(x-sum)/min;
    cout << ans << endl;
    return 0;
}