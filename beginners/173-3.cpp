#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

vector<vector<char>> dela(int a, vector<vector<char>> x){
    rep(i,x.at(a).size()){
        x.at(i).at(a)=='#'
    }
    return x;
}

vector<vector<char>> delb(int a,vector<vector<char>> x){
    rep(i,x.size()){
        x.at(a).at(i)==''
    }
}

int main(){
    int h,w,k;
    cin >> h >> w >> k;
    int ans=0;
    vector<vector<char>> c(h,vector<char>(w));
    vector<int> a(w);
    vector<int> b(h);
    rep(i,h){
        string s;
        cin >> s;
        int bcnt=0;
        rep(j,w){
            
            if(s.at(j)=='#') {
                ans++;
                bcnt++;
            }
            c.at(i).at(j)=s.at(j);
        }
        b.at(i)=bcnt;
    }
    rep(i,w){
        int acnt=0;
        rep(j,h){
            if(c.at(j).at(i)=='#') acnt++;
        }
        a.at(i)=acnt;
    }
    int cnt=0;





    /*表示
    rep(i,h){
        rep(j,w){
            cout << c.at(i).at(j);
        }
        cout << endl;
    }*/

    return 0;
}