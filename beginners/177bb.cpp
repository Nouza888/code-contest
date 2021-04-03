#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
    string s,t;
    cin >> s >> t;
    int temp=0;
    for(int i=0;i<t.length();i++){
        for(int j=1;j<t.length()-i;j++){
            string t1=t.substr(i,j);
            for(int k=0;k<s.length();k++){
                string s1=s.substr(k,j);
                if(s1==t1 && j>= temp && k>=i){
                    temp=j;
                    //a=i;
                    //b=j;
                    //x=t1;
                } 
            }
        }
    }
int ans=0;
if(temp==0) ans=t.length();
else ans=t.length()-temp;
cout << ans << endl;
    return 0;
}