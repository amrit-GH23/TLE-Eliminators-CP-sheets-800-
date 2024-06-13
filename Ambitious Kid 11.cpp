#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    // cin >> t; 
    // while (t--) {
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]=abs(a[i]);
      }
      //cout
      sort(a,a+n);
      cout<<a[0]<<"\n"; 
    //}
    return 0;
}
