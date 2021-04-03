#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a.at(i);
    }
    int q;
    cin >>q;
    vector<int> b(q),c(q);
    for(int i=0;i<q;i++){
        cin>>b.at(i)>>c.at(i);
    }
    vector<long long> sum(q,0);

    for(int i=0;i<q;i++){
        for(int j=0;j<n;j++){
            if(b.at(i)==a.at(j)){
                a.at(j)=b.at(i);
            }
            sum.at(i)+=a.at(j);
        }
    }
    for(int i=0;i<q;i++){
        cout << sum.at(i)<<endl;
    }
}