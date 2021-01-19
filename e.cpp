#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll int a,b,c;
	while(cin>>a){
		cin>>b>>c;
		if(c<a)swap(a,c);
		if(c<b)swap(b,c);
		if(a*a+b*b==c*c)cout<<"right\n";
		else cout<<"wrong\n";
		if(a==0 && b==0 && c==0) break;
	}
	
return 0;
}
