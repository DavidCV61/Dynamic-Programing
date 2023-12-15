#include<bits/stdc++.h>

 using namespace std;

void imprimir(vector<int> v){

	int n=v.size();

	for(int i=0;i<n;i++){

		cout<<"v["<<i<<"]="<<v[i]<<endl;
	}

	cout<<endl;
}
int main()
{

	int n=10;

	vector <int> v;

	v.resize(n+1,-1);

v[0]=0;
v[1]=0;
	for(int i=1;i<=n;i++){

		if(i+1<=n){

			if(v[i+1]==-1) v[i+1]=v[i]+1;
			else v[i+1]=min(v[i+1],v[i]+1);
		}

		if(i*2<=n){
			if(v[i*2]==-1) v[i*2]=v[i]+1;
			else v[i*2]=min(v[i*2],v[i]+1);

		}

		if(i*3<=n){
			if(v[i*3]==-1) v[i*3]=v[i]+1;
			else v[i*3]=min(v[i*3],v[i]+1);

		}

		
		//imprimir(v);

	
	}
	

	imprimir(v);

	
	return 0;
}
