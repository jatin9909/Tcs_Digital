#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	char mat[3][n];
	
	for(int i=0; i<3; i++){
		for(int j=0; j<n; j++){
			cin>>mat[i][j];
		}
	}
	
	for(int i=0; i<n; i++){
		if(mat[0][i]=='#' && mat[1][i]=='#'&&mat[2][i]=='#'){
			cout<<'#'<<" ";
		}
		
		else if(mat[0][i]=='.' && mat[1][i]=='.' && mat[2][i]=='.'){
			
		}
		else{
			char a=mat[0][i];
			char a1=mat[0][i+1];
			char a2=mat[0][i+2];
			char b=mat[1][i];
			char b1=mat[1][i+1];
			char b2=mat[1][i+2];
			char c=mat[2][i];
			char c1=mat[2][i+1];
			char c2=mat[2][i+2];
			
			if(a=='.' && a1=='*'&& a2=='.' && b=='*' && b1=='*' && b2=='*' && c=='*' && c1=='.' && c2=='*'){
				cout<<"A"<<" "; i=i+2;
			}
			if(a=='*' && a1=='*'&& a2=='*' && b=='*' && b1=='*' && b2=='*' && c=='*' && c1=='*' && c2=='*'){
				cout<<"E"<<" "; i=i+2;
			}
			if(a=='*' && a1=='*'&& a2=='*' && b=='.' && b1=='*' && b2=='.' && c=='*' && c1=='*' && c2=='*'){
				cout<<"I"<<" "; i=i+2;
			}
			if(a=='*' && a1=='*'&& a2=='*' && b=='*' && b1=='.' && b2=='*' && c=='*' && c1=='*' && c2=='*'){
				cout<<"O"<<" "; i=i+2;
			}
			if(a=='*' && a1=='.'&& a2=='*' && b=='*' && b1=='.' && b2=='*' && c=='*' && c1=='*' && c2=='*'){
				cout<<"U"<<" "; i=i+2;
			}
		}
	}
}
