#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,x;
        cin>>n;
        vector<long long>v;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            v.push_back(x);
        }
        int c=1;//flag=true
        for(int i=n-1; i>0; i=i-2)
        {
            if(v[i]<v[i-1])
            {
                if(i-1==0)
                    c=0;
                else
                    v[i-2] = v[i-2] - (v[i-1] - v[i]);
            }
            else if(i-2>=0)
                v[i-2]= v[i-2] + (v[i] - v[i-1]);
        }
        if(c)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
