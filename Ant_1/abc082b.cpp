#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    string s,t;
    cin >> s >> t;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    int a = s.length();
    int b = t.length();
    int c = min(a,b);
    bool flg = true;
    int x=0;
    for(int i=0;i<c;){
        bool flg2 = false;
        if(s.at(i)==t.at(i)){
            flg2=true;
            i++;
            if(i==c-1){
                x=i;
                break;
            }
        }
        if(!flg2){
            x=i;
            break;
        }
    }
    if()
    return 0;
}