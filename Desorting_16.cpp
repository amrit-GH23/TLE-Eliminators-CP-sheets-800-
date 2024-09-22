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
      int mina=INT_MAX;
      int temp;
      int flag=0;
      for(int i=0;i+1<n;i++){
            temp=a[i+1]-a[i];
            if(temp<0){
               flag=1;
               break;
            }
            temp=((temp/2)+1);
            mina=min(mina,temp);
      }
      if(flag)cout<<0<<"\n";
      else cout<<mina<<"\n";  
         
    }
    return 0;
}
