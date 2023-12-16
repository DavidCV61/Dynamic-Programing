#include<bits/stdc++.h>
#define int long long int

using namespace std;


int32_t main() {


	int n;
	cin >> n;
	vector <int> prices(n);
	vector <int> dp;

	dp.resize(n+1,0);
	for (int i = 0; i < n; i++) {
		cin >> prices[i];
	}


dp[1]=prices[0];


for(int i=1;i<=n;i++){

	for(int j=0;j<i;j++){

		dp[i]=max(dp[i],dp[j]+prices[i-j-1]);

	}

}
	
cout<<dp[n]<<endl;


return 0;

}
