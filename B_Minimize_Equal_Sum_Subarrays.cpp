#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> p;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            p.push_back(x);
        }
        for (int i = 0; i < n-1; ++i) {
            cout << p[i+1] << " ";
        }
        cout<<p[0]<<endl;
    }
}
