#include<bits/stdc++.h>
using namespace std;
#define ll long long

    ll int fx(ll int a){
    if(a>100)return a-10;
    else{
    return fx(fx(a+11));
    }
		}
    int main(){
    while(1){
    ll int a;
    cin>>a;
    if(a==0)break;
    cout<<"f91("<<a<<") = "<<fx(a)<<"\n";
	}
	return 0;
}



