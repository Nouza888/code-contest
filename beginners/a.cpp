#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    int a;
    cin >> a;

    if(a>=400 && a<=599){
        cout << 8 <<endl;
    }else if(a>=600 && a<=799){
        cout << 7 << endl;
    }else if(a>=800 && a<=999){
        cout << 6 << endl;
    }else if(a>=1000 && a<=1199){
        cout << 5 << endl;
    }else if(a>=1200 && a<=1399){
        cout << 4 << endl;
    }else if(a>=1400 && a<=1599){
        cout << 3 << endl;
    }else if(a>=1600 && a<=1799){
        cout << 2 << endl;
    }else if(a>=1800 && a<=1999)        cout << 1 << endl;
    

    return 0;
}