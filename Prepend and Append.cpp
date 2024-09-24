#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i=0,j=n-1;
        int flag=0;
        while(i<=j){
           if(s[i]=='0' && s[j]=='1'){
              i++;
              j--;
           }
           else if(s[i]=='1' && s[j]=='0'){
              i++;
            j--;
           }
           else{
            flag=1;
            break;
           }
        }
        if(flag)cout<<(j-i+1)<<"\n";
        else cout<<0<<"\n";

    }
    return 0;
}
