#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

const double PI = acos(-1);

double calc(int a,int b,double c){
    double ans = sqrt(a*a + b*b - 2*a*b*cos(c));
    return ans;
}

int main(){
    int a,b,h,m;
    cin >> a >> b >> h >> m;
    double c=abs((double(m)/60*2*PI)-(double(h*60+m)/720*2*PI));
    double ans=calc(a,b,c);
    printf("%.20f\n",ans);
    return 0;
}