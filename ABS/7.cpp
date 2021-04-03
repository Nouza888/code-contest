#include<bits/stdc++.h>
using namespace std;
int getsum(vector<int> vec){
    int sum=0;
    for(int i=0;i<vec.size();i++){
        sum+=vec[i];
    }
    return sum;
}

int main(){
    int n;
    cin >>n;
    vector<int> all(n),a(n),b(n);
    for(int i=0;i<n;i++){
        cin >> all.at(i);
    }
    sort(all.begin(),all.end());
    reverse(all.begin(),all.end());//allを降順ソート
    for(int i=0;i<all.size();i++){
        if(i%2==0){
            a.at(i)=all.at(i);
        }else if(i%2==1){
            b.at(i)=all.at(i);
        }
    }
    int ans=getsum(a)-getsum(b);
    cout<<ans<<endl;
}