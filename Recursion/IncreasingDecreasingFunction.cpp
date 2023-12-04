#include <bits/stdc++.h>

using namespace std;

void crece(int n){


	if(n==1){
		cout<<"1"<<endl;
		return;
	}
	else{

		crece(n-1);
		cout<<n<<endl;

	}
}
void decrece(int n){

	if(n==1){
		cout<<"1"<<endl;
		return;
	}
	else{
		cout<<n<<endl;
		decrece(n-1);
		

	}
}

int main(){
	

int n;
cin>>n;
//crece(n);
decrece(n);



 return 0;
	
}
