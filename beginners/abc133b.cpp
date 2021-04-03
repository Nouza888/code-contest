#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    int n,d;
    cin >> n >> d;
    vector<vector<int>> x(n,vector<int>(d));
    for(int i=0;i<n;i++){
        for(int j=0;j<d;j++){
            cin >> x.at(i).at(j);
        }
    }
    int cnt=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            double distance=0;
            for(int k=0;k<d;k++){
                distance+=pow((abs(x.at(i).at(k)-x.at(j).at(k))),2.0);
            }
        distance=sqrt(distance); 
        if(ceil(distance)==floor(distance)) cnt++; //整数判定
        }
    }
    cout << cnt << endl;

    return 0;
}