#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    int n;
    cin >> n;
    int t,x,y;
    bool flg=false;
    for(int i=0;i<n;i++){
        int dt,dx,dy;
        cin >> dt >> dx >> dy;
        if(dt<(dx+dy)){
            flg=false;
            break;
        }else if(dt%2==(dx+dy)%2){
            flg=true;
        }else{
            flg=false;
            break;
        }
    }
    cout << (flg ? "Yes" : "No") << endl;  
    return 0;
}