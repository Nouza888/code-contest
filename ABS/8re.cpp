#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    int n,y;
    cin >> n >> y;
    int sum;  //お金の合計金額
    int a,b,c; //それぞれ野口の枚数、樋口の枚数、諭吉の枚数
    rep(i,n+1){
        rep(j,n-i+1){
            sum=1000*i+5000*j+10000*(n-i-j); //お金の合計金額
            if(sum==y){
                a=i;
                b=j;
                c=n-i-j;
                cout <<c <<" "<<b <<" "<<a << endl; //合計金額がyと一致したら
                return 0;                    //それぞれの枚数を出力して終了
            }
        }
    }
    cout << "-1 -1 -1" << endl; //合計金額がy円となる組み合わせがなかったら
    return 0;                   //-1 -1 -1を出力 
}