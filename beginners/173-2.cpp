#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int ac,wa,tle,re;


int main(){
    int n;
    cin >> n;
    rep(i,n){
        string s;
        cin >> s;
        if(s=="AC") ac++;
        else if(s=="WA") wa++;
        else if(s=="TLE") tle++;
        else if(s=="RE") re++;
    }
    cout << "AC x " << ac << endl;
    cout << "WA x " << wa << endl;
    cout << "TLE x " << tle << endl;
    cout << "RE x " << re << endl;
    return 0;
}