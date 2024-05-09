#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t; 
    while (t--) {
      int n,x;
      cin>>n>>x;
      int a[n+2];
      a[0]=0;
      a[n+1]=x;
      for(int i=1;i<n+1;i++){
        cin>>a[i];
      }
      int maxi=INT_MIN;
      for(int i=0;i+1<n+2;i++){
         int temp=0;
         if(i!=n){
             temp=(a[i+1]-a[i]);
         }
         else{
             temp=2*(a[i+1]-a[i]);
         }
         maxi=max(maxi,temp);
      }
      cout<<maxi<<"\n";
    }
    return 0;
}
