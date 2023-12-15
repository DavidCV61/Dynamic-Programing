#include<bits/stdc++.h>
#define int long long int

using namespace std;

string s;


int solver(string s){


 	int n=s.size();
 	vector <int> ans;

 	ans.resize(n+1,0);

 	reverse(s.begin(),s.end());

 	ans[0]=1;

 	if(s[0]=='0') ans[1]=0;
 	else ans[1]=1;

 	

 	for(int i=1;i<n;i++){

 		if(s[i]=='0'){

 			ans[i+1]=0;

 		}else if((s[i]=='1' || s[i]=='2') && s[i-1]=='0'){

 			ans[i+1]=ans[i]+ans[i-1];
 		}else if(s[i]=='1' || (s[i]=='2'&& s[i-1]<='6')){

 			ans[i+1]=ans[i]+ans[i-1];
 		}else{

 			ans[i+1]=ans[i];
 		}

 	}


return ans[n];



 }

int32_t main() {

	while (1) {
		cin >> s;
		if (s[0] == '0') break;

	

		cout << solver(s) << '\n';

	}

return 0;
}
