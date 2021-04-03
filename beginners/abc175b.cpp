#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    int n;
    cin >> n;
    vector<int> l(n);
    rep(i,n) cin >> l.at(i);
    sort(l.begin(),l.end()); //昇順ソート
    reverse(l.begin(),l.end());  //反転で降順ソートに
    int cnt=0;
    for(int i=0;i<l.size()-2;i++){
        for(int j=i+1;j<l.size()-1;j++){
            for(int k=j+1;k<l.size();k++){
                if(l.at(i)!=l.at(j)&&l.at(j)!=l.at(k)&&l.at(k)!=l.at(i)){
                    if(l.at(i)<l.at(j)+l.at(k)) cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}