#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long r=n%k;
        if(n%2==0 || n%k==0)cout<<"YES\n";
        else if(r%2==0)cout<<"YES\n";
        else if(k==1)cout<<"YES\n";
        else{
            if(((n-k)%2==0))cout<<"YES\n";
            else{
                cout<<"NO\n";
            }
        }


    }
    return 0;
}
