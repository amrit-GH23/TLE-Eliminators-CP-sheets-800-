#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,a,b;
        cin>>n>>a>>b;
        // int a[n];
        // for(int i=0;i<n;i++){
        //     cin>>a[i];
        // }
        if(n==a && a==b)cout<<"YES\n";
       else if(a+b>=n){
            cout<<"NO\n";
        }
        else if(n-(a+b)<=1){
             cout<<"NO\n";
         }
         else{
            cout<<"YES\n";
         }
    }
    return 0;
}
