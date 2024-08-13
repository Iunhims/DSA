#include<bits/stdc++.h>
using namespace std;
int n,k,a[1005],ok;

void ktao(){
	for(int i=1;i<=k;++i){
		a[i] =i;
	}
}

void next(){
	int i=k;
	while(i>=1 && a[i] == n-k+1){
		--i;
	}
	if(i==0){
		ok=0;
	}
	else {
	a[i]++;
	for(int j=i+1;j<=k;j++){
		a[j]=a[j-1] +1;
    	}	
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<=n;i++){
			a[i] = n-i;
		}
	do{
		for(int i=0;i<n;i++){
			cout<<a[i];
		}
		cout<<" ";
	}
       	while(prev_permutation(a,a+n));
	    cout<<endl;
	}
	return 0;
}