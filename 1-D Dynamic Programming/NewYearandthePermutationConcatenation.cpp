#include <bits/stdc++.h>

using namespace std;
#define int long long
#define MOD 998244353


int32_t main(){

 int n;
 cin>>n;
 vector<int> fac(n+2);
 vector<int> prod(n+2);
fac[0]=1;
prod[0]=n;

 for(int i=1;i<=n;i++){

    fac[i]=((i%MOD)*(fac[i-1]%MOD))%MOD;
    prod[i]=(((n-i)%MOD)*(prod[i-1]%MOD))%MOD;

 }



 int ans=fac[n];

 for(int i=1;i<=n-2;i++){
    
    int piv=((fac[n-i]-1)*(prod[i-1]))%MOD;
    ans=(ans+piv)%MOD;


 }

cout<<ans<<endl;
    




    return 0;
}
