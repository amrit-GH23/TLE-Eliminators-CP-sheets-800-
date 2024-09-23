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
        int count=0;
        int maxi=INT_MIN;
        if(n==1 && a[0]==0){
            cout<<1<<"\n";
            continue;
        } 
        for(int i=0;i<n;i++){
               if(a[i]==0){
                count++;
             while(a[i+1]==0 and i+1<n){
                        i++;
                        count++;
                    }
               }
               else{
                  maxi=max(count,maxi);
                  count=0;
               }
        }
                     maxi=max(count,maxi);
        cout<<maxi<<"\n"; 

    }
    return 0;
}
