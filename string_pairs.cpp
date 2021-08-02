#include<bits/stdc++.h>
using namespace std;

int main(){
	string dx[]={"Empty","one", "two", "three", "four", "five",
"six", "seven", "eight", "nine", "ten", "eleven",
"twelve", "thirteen", "fourteen", "fifteen",
"sixteen", "seventeen", "eighteen", "nineteen"}; //20

	string dy[]={"Empty","Empty","twenty", "thirty", "forty", "fifty",
"sixty", "seventy", "eighty", "ninety"}; //9

	string dz[]={"hundred"}; //1
 
int n;
cout<<"Enter how many nmbers "<<endl;
cin>>n;
int a[n];

cout<<"Enter numbers "<<endl;
for(int i=0; i<n; i++){
	cin>>a[i];
}

string temp; int count=0;

for(int i=0; i<n; i++){
	if(a[i]<=19){
	int index=a[i];
	temp = dx[index];
	for(int j=0; j<temp.size(); j++){
		if(temp[j]=='a' || temp[j]=='e'||temp[j]=='i'||temp[j]=='o'||temp[j]=='u')
		count++;
	}
	}
	else if(a[i]>19 && a[i]<100){
			int x = a[i]%10;
			int y =(a[i]/10);
			int index = y;
			
			temp=dy[index];
			temp+=dx[x];
			
			for(int j=0; j<temp.size(); j++){
				if(temp[j]=='a' || temp[j]=='e'||temp[j]=='i'||temp[j]=='o'||temp[j]=='u')
					count++;
			}
			cout<<temp;
		}
	else{
		count+=2;
	}
}
cout<<"Count is "<<count<<endl;

unordered_map<int,int>mp; vector<int>v;

for(int i=0; i<n; i++){
	if(mp.find(count-a[i])!=mp.end()){
		v.push_back(mp[count-a[i]]);
		cout<<mp[count-a[i]]<<endl;
		v.push_back(i);
	}
	mp[a[i]]=i;
}

cout<<"count pairs "<<endl;
for(int i=0; i<v.size(); i++){
	cout<<a[v[i]]<<" ";
}

}
