#include<bits/stdc++.h>

using namespace std;

int main()
{

int n=20;
int fibo[n+1];
fibo[0]=0;
fibo[1]=fibo[2]=1;

for(int i=3;i<=n;i++){

	fibo[i]=fibo[i-1]+fibo[i-2];


}

cout<<fibo[n]<<endl;





	return 0;
}
