#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t; 
   while (t--) {
     int arr[10][10]={{1,1,1,1,1,1,1,1,1,1},{1,2,2,2,2,2,2,2,2,1},{1,2,3,3,3,3,3,3,2,1},
                      {1,2,3,4,4,4,4,3,2,1},{1,2,3,4,5,5,4,3,2,1},{1,2,3,4,5,5,4,3,2,1},{1,2,3,4,4,4,4,3,2,1},
                      {1,2,3,3,3,3,3,3,2,1},{1,2,2,2,2,2,2,2,2,1},{1,1,1,1,1,1,1,1,1,1}};
    string a[10];
    for(int i=0;i<10;i++){
      cin>>a[i];
    }           
    int count=0;
    for(int i=0;i<10;i++){
       for(int j=0;j<10;j++){
        if(a[i][j]=='X')count+=arr[i][j];
       }
    }
    cout<<count<<"\n";      
    }
    return 0;
}
