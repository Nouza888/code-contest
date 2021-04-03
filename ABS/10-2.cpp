#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    string s;
    cin >> s;
    reverse(s.begin(),s.end());
    vector<string> t(4);
    t={"maerd","ermaerd","esare","resare"};
    bool flg = true;
        for(int i=0;i<s.length();){
            bool flg2=false;
            for(int j=0;j<4;j++){
                string temp=t.at(j);
                if(temp==s.substr(i,temp.length())){
                    flg2=true;
                    i+=temp.length();
                }
            }
            if(flg2==false){
                flg=false;
                break;
            }
        }
    if(flg) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}