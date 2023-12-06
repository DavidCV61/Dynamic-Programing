#include <bits/stdc++.h>


 using namespace std;
 void brack(int n, char *brackets, int contB1, int contB2, int i){
 		int m=n/2;

 		//cout<<"cadena: "<<brackets<<endl;

 		if(contB1>m || contB2>m) return;
 		else if(i==n-2){

 			if(contB2==m-1){

 				brackets[n-1]=')';
 				cout<<brackets<<endl;
 				return;
 			}
 		}


 		if(contB1==contB2){

 			brackets[i]='(';
 			brackets[i+1]='\0';
 			//cout<<"primer if"<<endl;
 			brack(n,brackets,contB1+1,contB2,i+1);


 		}else{

 			//cout<<"segundo if"<<endl;

 			brackets[i]='(';
 			brackets[i+1]='\0';
 			brack(n,brackets,contB1+1,contB2,i+1);
 			brackets[i]=')';
 			brackets[i+1]='\0';
 			brack(n,brackets,contB1,contB2+1,i+1);

 		}

 		



 }

int main() {
char brackets[100];
brackets[0]='\0';


int n;
cin>>n;
n++;
brack(2*n,brackets,0,0,0);
}
