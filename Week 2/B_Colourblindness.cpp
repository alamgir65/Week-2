#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        char a[2][n];
        for(int i=0;i<2;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        bool flag=true;
        for(int i=0;i<2;i++){
            for(int j=0;j<n;j++){
                if(a[0][j] != a[1][j]){
                    if(a[0][j] == 'B' && a[1][j]=='G' || a[0][j] == 'G' && a[1][j]=='B'){
                        continue;
                    }
                    else{
                        flag=false;
                    }
                }
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}