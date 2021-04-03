#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> a(n,vector<int>(2));
    rep(i,n){
        cin >> a[i][0];
        cin >> a[i][1];
    }
    double max=sqrt(pow(a[0][0]-a[1][0],2)+pow(a[0][1]-a[1][1],2));
    //cout << max << endl;
    //int x,y;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            double temp=sqrt(pow(a[i][0]-a[j][0],2)+pow(a[i][1]-a[j][1],2));
            //cout << temp << endl;
            if(temp>=max){
                max=temp;
                //x=i;
                //y=j;
            }
        }
    }
    cout << max << endl;
    //cout << x << y <<endl;
    return 0;
}