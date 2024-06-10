#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t; 
    while (t--) {
      int n;
      cin>>n;
     string s;
     cin>>s;
     int flag=0;
     for(int i=1;i+1<n;i++){
       if(s[i]=='.'){
            if(s[i-1]=='.' && s[i+1]=='.'){
                  flag=1;
                  break;
            }
       }
     }
     if(flag)cout<<2<<"\n";
     else{
      int count=0;
        for(int i=0;i<n;i++){
               if(s[i]=='.')count++;
        }
        cout<<count<<"\n";
     }
    }

    return 0;
}
