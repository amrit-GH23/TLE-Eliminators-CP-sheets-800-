#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if(z%2==0){
         if(x>y){
            cout<<"First\n";
         }
         else{
            cout<<"Second\n";
         }
        }
        else{
           if((x+1)>y){
              cout<<"First\n";
           }
           else{
            cout<<"Second\n";
           }
         }
         
    }
    return 0;
}
