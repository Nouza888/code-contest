#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    int cnt=0;
    vector<int> a(n);
    for(int i=0;i<a.size();i++){
        cin >> a.at(i);
    }
    while(true){
        bool flg=false;
        for(int i=0;i<a.size();i++){
            if(a.at(i)%2==1){
                flg=true;
            }
        }
        if(flg) break;

        for(int i=0;i<a.size();i++){
            if(a.at(i)%2==0){
                a.at(i)/=2;
            }
        }
        cnt+=1;
    }
    cout<<cnt<<endl;
}