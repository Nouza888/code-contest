#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    int n=5;

    //{0,1,・・・,n-1}の部分集合の全探索
    for(int bit=0;bit<(1<<n);++bit){
        //bitの表す集合を求める
        vector<int> s;
        for(int i=0;i<n;i++){
            if(bit&(1<<i)){
                s.push_back(i);
            }
        }
        //bitの表す集合の出力
        cout << bit << ": {";
        for(int i=0;i<(int)s.size();++i){
            cout << s[i] << " ";
        }
        cout << "}" << endl;
    }


    return 0;
}