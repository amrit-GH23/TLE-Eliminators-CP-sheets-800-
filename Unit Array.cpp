#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int sum=0;
        int counto=0,countm=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==-1)countm++;
            else counto++;
            sum+=a[i];
        }
        if(sum>=0){
            if(countm%2==0)cout<<0<<"\n";
            else{
                cout<<1<<"\n";
            }
        }
        else{
            int count=0;
            if(countm%2!=0){
                countm--;
                counto++;
                count++;
                while(counto<countm){
                    counto+=2;
                    countm-=2;
                    count+=2;
                }
            }
            else{
                while(counto<countm){
                    counto+=2;
                    countm-=2;
                    count+=2;
                }
            }
            cout<<count<<"\n";
        }

    }
    return 0;
}
