#include<bits/stdc++.h>
using namespace std;
#define ll long long
unsigned ll a[200];

void fibo (){
	for (int i = 0; i< 200; i++){
		a[i] = -1;
	}
}

unsigned ll fiboQHD(int n){
	if(a[n] == -1){
		if( n<= 1){
			a[n] = n; 
		}
		else{
			a[n] = fiboQHD(n - 1) + fiboQHD(n - 2);
		}
	}
	return a[n];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
	    fibo();
		cout<< 	fiboQHD(n) << endl;
			
	}
}