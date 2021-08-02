#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter n "<<endl;
	cin>>n;
	int ar[n];
	cout<<"Enter array "<<endl;
	for(int i=0; i<n; i++){
		cin>>ar[i];
	}
	
	int k;
	cout<<"Enter k "<<endl;
	cin>>k;
	int count=0;
	
	for(int i=0; i<n ;i++){
		for(int j=0; j<n; j++){
			if(i==j)
			continue;
			
			if(ar[j]<=ar[i]+k && ar[j]>=ar[i]-k){
				count++;
				break;
			}
		}
	}
	
	cout<<"All happy elements "<<count<<endl;
}
