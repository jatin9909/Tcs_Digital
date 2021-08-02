#include<bits/stdc++.h>
using namespace std;
typedef  long long  ll;
ll inf=1000000000000000000,mod=1000000007,BS,k;
#define en printf("\n");
int main(){
        string a,b;
        getline(cin,a);
		
		int res=0,p,c,f,a_len,b_len;
        a_len=a.length();
        
        
		for(int i=0;i<a_len;i++){
            if(a[i]==' ')continue;
            if(isdigit(a[i])){
                res=res*10+a[i]-'0';
                cout<<res<<" ";
            }
            else{
                if(a[i]=='P')
                p=res;
                else if(a[i]=='C')
                c=res;
                else
                f=res;
                res=0;
            }
        }
        
        
        getline(cin,b);
		
		int pp,cc,ff;
        
		b_len=b.length();
        
	    return 0;
}
