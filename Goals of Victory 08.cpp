#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t; 
    while (t--) {
      int n;
      cin>>n;
    int a[n-1];
    int count=0;
    for(int i=0;i<n-1;i++){
      cin>>a[i];
      count+=a[i];
    }
    cout<<count*-1<<"\n";


    }
    return 0;
}
