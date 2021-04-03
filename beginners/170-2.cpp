#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cin >>x>>y;
    int sum=0;
    bool flg=false;
    for(int i=0;i<=x;i++){
        sum=i*2+4*(x-i);
        if(sum==y){
            flg=true;
        }
    }
    if(flg){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}