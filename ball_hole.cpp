#include<iostream>
using namespace std;

int main(){
	cout<<"Enter the number of holes "<<endl;
	int h;
	cin>>h;
	
	int H[h];
	cout<<"Enter holes size "<<endl;
	for(int i=0; i<h; i++){
		cin>>H[i];
	}
	
	cout<<"Enter the number of balls "<<endl;
	int b;
	cin>>b;
	
	int B[b];
	cout<<"Enter balls size "<<endl;
	for(int i=0; i<b; i++){
		cin>>B[i];
	}
	
	int in[b]={0};
	
	int out[h];
	for(int i=1; i<=h; i++){
		out[i-1]=i;
	}
	
	int count;
	
	for(int i=0; i<b; i++){
		for(int j=h-1; j>=0; j--){
			if(B[i]<=H[j]){
				if(out[j]!=0){
					in[i]=j+1;
					cout<<"IN array at positio "<<i<<" "<<in[i]<<endl;
					out[j]=out[j]-1;
					cout<<"Out array at position "<<j<<" "<<out[j]<<endl;
					break;
				}
			}
		}
	}
	
	for(int i=0; i<b; i++){
		cout<<in[i]<<" ";
	}
}
