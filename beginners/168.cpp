#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    int n;
    cin >>n;
    int a=n%10;
    if(a==3){
        cout << "bon"<<endl;
    }else if(a==0||a==1||a==6||a==8){
        cout << "pon"<<endl;
    }else{
        cout << "hon"<<endl;
    }
    return 0;
}