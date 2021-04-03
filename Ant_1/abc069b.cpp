#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    string s;
    cin >> s;
    string s2 = s.substr(1,s.length()-2);
    int t = s2.length();
    cout << s.at(0) << t << s.at(s.length()-1) << endl;
    return 0;
}