#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    string s;
    cin >> s;
    int a,z;
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='A'){
            a=i;
            break;
        }
    }
    for(int i=s.length()-1;i>=0;i--){
        if(s.at(i)=='Z'){
            z=i;
            break;
        }
    }
    cout << z-a+1 << endl;
    return 0;
}