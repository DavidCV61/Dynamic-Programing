#include<bits/stdc++.h>

using namespace std;
 vector <int> memo;

int solver(vector <int> v,int n, int i){

	int ans=v[i];
	

	if(i>n-3){

		
		return ans;


	}

	if(memo[i]!=-1 && i>1) return memo[i];

	int mini=min(solver(v,n,i+1),solver(v,n,i+2));
	mini=min(mini,solver(v,n,i+3));
	ans+=mini;
	cout<<"memo["<<i<<"]="<<ans<<endl;;
	memo[i]=ans;
	 return ans;


}

int solver2(vector <int> v,int n, int i){

	int ans=v[i];
	

	if(i>n-3){

		
		return ans;


	}

	

	int mini=min(solver2(v,n,i+1),solver2(v,n,i+2));
	mini=min(mini,solver2(v,n,i+3));
	ans+=mini;
	 return ans;


}
int supw(vector <int> v,int n){

	int mini=0;

	for(int i=0;i<3;i++){
	mini=INT_MAX;
	memo.resize(n,-1);
	mini=min(solver(v,n,i),mini);
	}


	



	return mini;

}
int main()
{

	int n=8;
	vector<int> v={1,2,3,4,5,6,7,8};

	memo.resize(n,-1);
	

	cout<<supw(v,n)<<endl;
	

		

	return 0;
}
