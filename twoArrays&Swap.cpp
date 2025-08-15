#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,sum=0;
        cin>>n>>k;
        vector<int>v,b;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            b.push_back(x);
        }
        sort(v.begin(),v.end());
        sort(b.begin(),b.end());
        for (int i = 0; i < k; i++)
        {
            if (v[i] < b[n - i - 1])
                swap(v[i], b[n - i - 1]);
        }
        cout << accumulate(v.begin(),v.end(),0) << endl;
    }
return 0 ;
}
