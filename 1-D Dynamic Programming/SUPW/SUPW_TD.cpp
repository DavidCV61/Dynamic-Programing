#include<bits/stdc++.h>

using namespace std;
 vector <int> memo;

int solver(vector <int> v,int n, int i){

	int ans=v[i];
	

	if(i>n-3){

		
		return ans;


	}

	if(i+3<n){
if(memo[i]!=-1) return memo[i];

	int mini=min(solver(v,n,i+1),solver(v,n,i+2));
	mini=min(mini,solver(v,n,i+3));
	ans+=mini;
	memo[i]=ans;
	 return ans;

	} return v[i];

	


}


int supw(vector <int> v,int n){

	int mini=INT_MAX;

	for(int i=0;i<3;i++){
	
	memo.resize(n,-1);

	mini=min(solver(v,n,i),mini);
	
	}

	return mini;

}
int main()
{

	int n=10;
	vector<int> v={3,2,1,1,2,3,1,3,2,1};

	
	

	cout<<supw(v,n)<<endl;
	

		

	return 0;
}
