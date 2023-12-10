#include <bits/stdc++.h>


 using namespace std;
 
void printSudoku(vector <vector<int>> mat){


	for(int i=0;i<9;i++){

		cout<<"| ";

		for(int j=0;j<9;j++){

			cout<<mat[i][j]<<" | ";
		}
		cout<<endl;
	}
}

bool verificar(vector<vector<int>> mat,int i,int j,int comp){

	

	for(int k=0;k<9;k++){

		if(j==k)continue;
		else if(comp==mat[i][k]) return false;
	}


	for(int k=0;k<9;k++){

		if(i==k)continue;
		else if(comp==mat[k][j]) return false;
	}

	int sx=(i/3)*3;
	int sy=(j/3)*3;

	for(int x=sx;x<sx+3;x++){

		for(int y=sy;y<sy+3;y++){

			if(mat[x][y]==comp) return false;

		}
	}
	return true;


}
bool solver(vector <vector<int>> mat,int i,int j){




	if(i==9){

		printSudoku(mat);
		return true;
	}

	if(j==9){
		return solver(mat,i+1,0);
	}

	if(mat[i][j]!=0){
		return solver(mat,i,j+1);
	}


		for(int k=1;k<=9;k++){



			
		 if(verificar(mat,i,j,k)){
		 	

		 	mat[i][j]=k;

		 	bool solvSubProblem=solver(mat,i,j+1);
		 	if(solvSubProblem==true){
		 		return true;
		 	}

		 }
		 

	}
	mat[i][j]=0;
	return false;
	

	

	



}
 
int main() {


vector <vector<int>> mat={{5,3,0,0,7,0,0,0,0},
						  {6,0,0,1,9,5,0,0,0},
						  {0,9,8,0,0,0,0,6,0},
						  {8,0,0,0,6,0,0,0,3},
						  {4,0,0,8,0,3,0,0,1},
						  {7,0,0,0,2,0,0,0,6},
						  {0,6,0,0,0,0,2,8,0},
						  {0,0,0,4,1,9,0,0,5},
						  {0,0,0,0,8,0,0,7,9}};


if(solver(mat,0,0))cout<<"YES"<<endl;
else cout<<"NO"<<endl;



}
