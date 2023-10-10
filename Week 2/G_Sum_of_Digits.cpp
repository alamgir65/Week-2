#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    int cnt=0;
    while(n>9){
        int x=0;
        while(n!=0){
            x+=(n%10);
        }
        cnt++;
        n=x;
    }
    cout<<cnt<<endl;
    return 0;
}