#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a.at(i);
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        bool flg=false;
        for(int j=0;j<n;j++){
            if(i!=j){
                if(a.at(i)%a.at(j)==0){
                    flg=true;
                    break;
                }
            }
        }
        if(flg){
            cnt+=1;
        }
    }
    cout << (a.size()-cnt) <<endl;
}