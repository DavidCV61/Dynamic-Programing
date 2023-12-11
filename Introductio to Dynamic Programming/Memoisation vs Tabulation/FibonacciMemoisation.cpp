#include<bits/stdc++.h>

using namespace std;
int ct=0;
vector <int> memo;
int fibo(int n){
	ct++;


	//Base case
	if(n<=2)return 1;

	if(memo[n]!=-1) return memo[n];

	//Recursive relation
	return memo[n]=fibo(n-1)+fibo(n-2);

}


int main()
{

int n=20;
memo.resize(n+1,-1);

ct=0;
cout<<"fibo= "<<fibo(n)<<endl;
cout<<"veces: "<<ct<<endl;





	return 0;
}
