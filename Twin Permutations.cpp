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
        int curr=n;
        sort(b,b+n);
        int z[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[j]==b[i]){
                    z[j]=curr;
                    curr--;
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<z[i]<<" ";
        }
        cout<<"\n";
        

    }
    return 0;
}
