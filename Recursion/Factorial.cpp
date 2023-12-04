#include <bits/stdc++.h>

using namespace std;

int factorial(int n){

	if(n==1) return 1;
	if(n==0) return 1;
	cout<<"n="<<n<<endl;

	return n*factorial(n-1);

}


int main(){
	

	int n;
	cin>>n;
	cout<<"ans="<<factorial(n)<<endl;
	
}
