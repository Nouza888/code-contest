#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    string s,t;
    cin >> s >> t;
    int temp=0;
    int a,b;
    string x;
    for(int i=0;i<t.length();i++){
        for(int j=1;j<t.length()-i;j++){
            string t1=t.substr(i,j);
            if(s.find(t1)==string::npos) continue;
            else{
                if(j>=temp && i<=s.find(t1)){
                    temp=j;
                    a=i;
                    b=j;
                    x=t1;
                }
            } 
            
        }
    }
int ans=0;
if(temp==0) ans=t.length();
else ans=t.length()-temp;
cout << t.length() << endl;
cout << temp << endl;
cout << ans << endl;
cout << a << " " << b << " " << x <<endl;
    return 0;
}