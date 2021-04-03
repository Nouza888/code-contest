#include<bits/stdc++.h>
using namespace std;

int main(){
    int ans=0;
    vector<int> a(5);
    for(int i=0;i<5;i++){
        cin >> a.at(i);
    }
    for(int i=0;i<5;i++){
        if(a.at(i)==0){
            ans=i+1;
        }
    }
    cout<<ans<<endl;
}