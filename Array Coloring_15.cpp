#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++){
         cin>>a[i];
      }
      int so=0;
      int se=0;
      for(int i=0;i<n;i++){
         if(a[i]%2==0){
             se+=a[i];
         }
         else{
            so+=a[i];
         }
      }
      if((so%2==0) && (se%2==0))cout<<"YES\n";
      else if((so%2!=0) && (se%2!=0))cout<<"YES\n";
     else cout<<"NO\n";
         
    }
    return 0;
}
