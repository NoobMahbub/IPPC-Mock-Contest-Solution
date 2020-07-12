#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int t;
	double pi=2.0*acos(0.0);
	cin>>t;
	for(int i=1;i<=t;i++){
	double r;
	cin>>r;
	printf("Case %d: %.2lf\n",i,r*r*(4-pi));
	}
		
}

