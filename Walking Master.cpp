#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
     int a,b,c,d;
     cin>>a>>b>>c>>d;
     int diff1=abs(a-c);
     int diff2=abs(b-d);
     long long te,tm,ans=0;
           te=a-c;
       tm=b-d;
     if(diff2>=diff1){
           te=a-c;
           tm=b-d;
           if(tm>0)cout<<-1<<"\n";
           else if(tm==0 && te==0){
                 cout<<0<<"\n";
           }
           else{
              tm=tm*-1;
              ans+=tm;
              a+=tm;
              while(a!=c){
                a--;
                ans++;
              }
              cout<<ans<<"\n";
           }
     }
     else if(te>0 && tm==0){
         cout<<a-c<<"\n";
     }
     else{
         if(b>d){
          cout<<-1<<"\n";
          continue;
         }
         tm=tm*-1;
         ans+=(tm);
         a+=tm;
         if(a>=c){
           while(a!=c){
                a--;
                ans++;
              }
              cout<<ans<<"\n";
         }
         else{
          cout<<-1<<"\n";
         }
        
     }
      }
    return 0;
}
