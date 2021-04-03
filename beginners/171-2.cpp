#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a.at(i);
    }
    sort(a.begin(),a.end());
    int ans=0;
    for(int i=0;i<k;i++){
        ans+=a.at(i);
    }
    cout<<ans<<endl;
}