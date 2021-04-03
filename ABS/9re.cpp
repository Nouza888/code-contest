#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    string s;
    cin >> s;
    reverse(s.begin(),s.end());
    string a[4]={
        "dream","dreamer",
        "erase","eraser"
    };
    rep(i,4) reverse(a[i].begin(),a[i].end());
    bool flg=true;//最終的にYesかNoか？フラグ
    for(int i=0;i<s.size();){ //i++は書かない！(flg2=trueの時のみiを進める)
        bool flg2=false; //用意された4つの文字列と一致するか？フラグ
        for(int j=0;j<4;j++){ //用意された4つの文字列のどれかと一致するか調べる
            string x = a[j];
            if(x==s.substr(i,x.size())){ //substrで文字列を切り取り。i番目からx.sise番目まで
                i+=x.size();//一致したらiを文字列の長さだけ進める
                flg2=true;
            }
        }
        if(flg2=false){
            flg=false;//一致する文字列がなかった場合flgをfalseに
            break;//そしてループを抜ける
        }
    }
    cout << (flg ? "Yes" : "No") << endl;
    return 0;
}