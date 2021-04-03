#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    string n;
    cin >> n;
    if(n=="RRR") cout << 3 <<endl;
    else if(n=="SSS") cout << 0 << endl;
    else if(n=="RRS" || n=="SRR") cout << 2 << endl;
    else cout << 1 << endl;

    return 0;
}