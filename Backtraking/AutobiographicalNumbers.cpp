#include<bits/stdc++.h>

using namespace std;

bool lastverificar(vector<int> contar, vector <int> number, int n){

	for(int i=0;i<n;i++){

		if(contar[i]!=number[i]) return false;
	}
return true;
}

bool verficar(vector <int> contar, vector<int> number, int pos){


	for(int i=0;i<=pos;i++){

		if(contar[i]>number[i]) return false;
	}
	return true;
}
void imprimirVector(vector <int> v){

	for(int i=0;i<v.size();i++){

		cout<<v[i]<<" ";
	}
	cout<<endl;
}

bool solver(vector <int> contar, vector<int> number, int n, int nodo,int i){


	if(i==n){

		if(lastverificar(contar,number,n)){
			imprimirVector(number);
			return true;

		}
		else return false;


	}

	contar[nodo]++;
	number[i]=nodo;

	for(int k=0;k<n;k++){

	
		

	if(verficar(contar,number,i)){
		 if (solver(contar,number,n,k,i+1))return true;
		
	}
	}

contar[nodo]--;
	number[i]=0;
	return false;




}


void AutoBioNumbers(int n,vector <int> contar, vector<int> number){

	for(int i=0;i<n;i++){

		solver(contar,number,n,i,0);



		
	}

}




int main()
{

	int n;
	cin>>n;
	vector <int> contar(n);
	vector <int> number(n);
	AutoBioNumbers(n,contar,number);










	return 0;
}
