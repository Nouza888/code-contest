#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    int n;
    cin >> n;
    double t,a;
    cin >> t >> a;
    vector<int> h(n);
    double tdiff=100000;
    int ans=0;
    for(int i=0;i<n;i++){
        cin >> h.at(i);
        double temp = t-(0.006*h.at(i));
        if(abs(a-temp)<tdiff){
            tdiff=abs(a-temp);
            ans=i+1;
            }
    }
    cout << ans << endl;

    
    return 0;
}