#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n;
		cin>>n;
		
		int k;
		cin>>k;
		
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		int max;
		while(k--){
			max=a[0];
			for(int i=0; i<n; i++){
				if(a[i]>max)
				max=a[i];
			}
			cout<<"Max element is "<<max<<endl;
			for(int i=0; i<n; i++){
				if(a[i]==max)
				a[i]=a[i]/2;
			}
			
			cout<<"array "<<endl;
			for(int i=0 ;i<n; i++){
			cout<<a[i]<<" ";
		}
			
		}
		cout<<"Elements in array final "<<endl;
		
		int sum=0;
		for(int i=0 ;i<n; i++){
			cout<<a[i]<<" ";
			sum+=a[i];
		}

		cout<<"Minimum sum is "<<endl;
		cout<<sum;
return 0;
}
