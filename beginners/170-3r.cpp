#include<bits/stdc++.h>
using namespace std;
#include<cstdlib>
int main(){
    int x,n;
    cin>>x>>n;
    vector<int> a(112);
    vector<int> b(n);
    for(int i=0;i<a.size();i++){
        a.at(i)=i-10;
    }
    for(int i=0;i<n;i++){
        cin>>b.at(i);
    }
    for(int i=0;i<n;i++){
        remove(a.begin(),a.end(),b.at(i));
    }
    int min=100;
    int ans=0;
    for(int i=a.size()-1;i>=0;i--){
        int f=abs(a.at(i)-x);
        if(f<=min){
            min=f;
            ans=a.at(i);
        }
    }
    cout << ans << endl;
}