#include <bits/stdc++.h>

using namespace std;

bool ordenado(vector<int> v,int i, int n){
	


	if(i==n-1) return true;
	if(v[i]<v[i+1]) return ordenado(v,i+1,n);

	return false; 
}

int main(){
	

vector <int> v={1,2,3,4,5};

int n=v.size();

bool flag=ordenado(v,0,n);

if(flag) cout<<"YES"<<endl;
else cout<<"NO"<<endl;




 return 0;
	
}
