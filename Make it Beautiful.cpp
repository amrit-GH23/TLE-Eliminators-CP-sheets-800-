#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     int a[n];
     int b[n];
     for(int i=0;i<n;i++){
      cin>>a[i];
      b[i]=a[i];
     }
     sort(b,b+n,greater<int>());
     if(b[0]==b[n-1])cout<<"NO\n";
     else if(b[0]!=b[1]){
          cout<<"YES\n";
          for(int i=0;i<n;i++){
            cout<<b[i]<<" ";
          }
          cout<<"\n";
      }
      else{
         int temp=b[n-1];
         b[n-1]=b[0];
         b[0]=temp;
         cout<<"YES\n";
         for(int i=0;i<n;i++){
          cout<<b[i]<<" ";
         }
         cout<<"\n";
      }

      }
    return 0;
}
