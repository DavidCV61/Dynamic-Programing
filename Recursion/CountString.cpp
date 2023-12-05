#include <bits/stdc++.h>

using namespace std;

int ct(int n,int i,int boleano){




	if(i==n-1) return 1;
	else if(boleano==1)return ct(n,i+1,0);
	else return ct(n,i+1,0)+ct(n,i+1,1);

}




int main(){
	int n;
	cin>>n;

	cout<<ct(n,0,1)+ct(n,0,0);
	


	



 return 0;
	
}
