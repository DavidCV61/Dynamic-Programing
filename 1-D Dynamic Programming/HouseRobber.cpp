#include<bits/stdc++.h>
#define int long long int

using namespace std;

vector <int> memo(1e5);

int robber(int i, int n, vector <int> v){

	if(memo[i]!=-1) return memo[i];

	if(i==n-1 || i==n-2) return memo[i]=v[i];
	

	int ans=0;


	for(int k=i+2;k<n;k++){

		ans=max(ans,v[i]+robber(k,n,v));
		
	}

	return memo[i]=ans;

}
 int rob(vector<int>& nums) {
        int n=nums.size();
 

for(int i=0;i<n;i++)memo[i]=-1;
	
int ans=0;

	for(int i=0;i<n;i++){

		ans=max(ans,robber(i,n,nums));
	}

	return ans;
	
    }

int32_t main() {

vector <int> nums={2,7,9,3,1};
cout<<rob(nums)<<endl;
nums={1,2,3,1};
cout<<rob(nums)<<endl;




return 0;

}

//Problem: https://leetcode.com/problems/house-robber/description/
