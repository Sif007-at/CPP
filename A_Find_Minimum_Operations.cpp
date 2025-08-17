#include <iostream>
using namespace std;
int main(){
    int c;
    cin>>c;
    while(c--){
        int n,m;
        cin>>n>>m;
        if(m == 1){
            cout<<n<<endl;  // if base is 1, result is just n
            continue;
        }
        int res=0;
        while(n>0){ 
            res += n % m ;  // add remainder when dividing by m

            n/=m;   // reduce n by factor of m 
        }
        cout<<res<<endl;
    }
return 0 ;
}
