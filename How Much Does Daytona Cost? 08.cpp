#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t; 
    while (t--) {
      int n,k;
      cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    int flag=1;
    for(int i=0;i<n;i++){
      if(a[i]==k){
        flag=0;
        cout<<"YES\n";
        break;
      }
    }
    if(flag)cout<<"NO\n"; 
    }
    return 0;
}
