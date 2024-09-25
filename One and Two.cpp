#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     int a[n];
     int count1=0,count2=0;
     for(int i=0;i<n;i++){
      cin>>a[i];
      if(a[i]==2)count2++;
      else count1++;
     }
     if(count2==0)cout<<1<<"\n";
     else if(count2%2==0){
      int i;
      int temp=count2/2;
       for(i=0;i<n && temp!=0;i++){
          if(a[i]==2){
              temp--;
          }
       }
       cout<<i<<"\n";
     }
     else{
      cout<<-1<<"\n";
     }


      }
    return 0;
}
