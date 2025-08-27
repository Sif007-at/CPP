#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        long long int diff = b - a;
        if(diff == 0) cout<<1<<endl;
        else{long long int k = (-1 + sqrt(1+8*diff))/2;
        cout<<k+1<<endl;}
    }
