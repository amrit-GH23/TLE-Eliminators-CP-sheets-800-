#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
      int n,k,x;
      cin>>n>>k>>x;
      if(x!=1){
         cout<<"YES\n";
         cout<<n<<"\n";
         for(int i=0;i<n;i++){
            cout<<1<<" ";
         }
         cout<<"\n";
      }
      else{
         if(x!=2 && (n%2==0)){
               cout<<"YES\n";
               cout<<n/2<<"\n";
               for(int i=0;i<n/2;i++){
                  cout<<2<<" ";
               }
               cout<<"\n";
                 }
            else{
               
            }
         }

      }
    return 0;
}