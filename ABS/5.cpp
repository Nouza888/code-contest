#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,x;
    cin >>a>>b>>c>>x;
    int cnt=0;
    int sum=0;
    for(int i=0;i<a+1;i++){
        for(int j=0;j<b+1;j++){
            for(int k=0;k<c+1;k++){
                sum=500*i+100*j+50*k;
                if(sum==x){
                    cnt+=1;
                }
            }
        }
    }
    cout<<cnt<<endl;
}