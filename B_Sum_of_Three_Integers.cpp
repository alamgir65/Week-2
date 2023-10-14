#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int k,s; cin>>k>>s;
    int cnt=0;
    for(int i=0;i<=k;i++){
        for(int j=0;j<=k;j++){
            int m=s-(i+j);
            if(m>=0 && m<=k){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}