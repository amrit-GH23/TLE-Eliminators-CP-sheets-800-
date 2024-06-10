#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t; 
    while (t--) {
      int n,m;
      cin>>n>>m;
    int a[n];
   string x;
   cin>>x;
   string s;
   cin>>s;
      int p=x.find(s);
      if(p!=-1)cout<<0<<"\n";
      else{
        int flag=0;
        int count=0;
        int z=ceil(log2(m));
        while(z--){
           x+=x;
           count++;
           p=x.find(s);
           if(p!=-1){
            cout<<count<<"\n";
            flag=1;
            break;
           }
        }
        if(flag==0)cout<<-1<<"\n";        
      }
    }
    return 0;
}
