#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int>b;
        vector<int>c;
        sort(arr,arr+n);
        b.push_back(arr[0]);
        int temp=arr[0];
        int i=1;
        while(i<n){
             if(temp%arr[i]!=0)c.push_back(arr[i]);
             else {
                b.push_back(arr[i]);
                temp=arr[i];
             }
             i++;
        }
        if(b.size()==0 || c.size()==0)cout<<-1<<"\n";
        else{
            cout<<b.size()<<" "<<c.size()<<"\n";
            for(int j=0;j<b.size();j++){
                cout<<b[j]<<" ";
            }
            cout<<"\n";
            for(int j=0;j<c.size();j++){
                cout<<c[j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
