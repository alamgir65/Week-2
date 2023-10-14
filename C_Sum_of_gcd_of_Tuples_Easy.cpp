#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    long long sum=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                sum += __gcd(i,__gcd(j,k));
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}