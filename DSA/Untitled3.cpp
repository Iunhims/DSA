#include<bits/stdc++.h>
using namespace std;
#define MAX 32


int n,k,X[MAX];

void Display(int X[],int n){
	for(int i=1;i<=n;i++){
		cout<<X[i];
	}
	cout<<endl;
}

bool Check(int t[],int X[],int n,int S){
	int count =0;
	int countx =0
	for(int i=1;i<=n;i++){
			count +=X[i]*t[i];
			countx += X[i];
	}
   if(count == S) return count
	return (count == S);
}

void Binaryaddition(int X[],int n){
	int mem =1;
	int i =n;
	while(memory ==1){
		memory +=X[i];
		X[i] = memory % 2;
		memory /= 2;
		i--;
	}
}
void Nextbitstring (init X[], int n){
	int i=n;
	while(i>0 && X[i]==0){
		X[i]=0;
		i--;
	}
}
int main(){
	int n,S;
	int t[MAX];
	int X[MAX]; //Tang thai xu lis dong tien
	
	cin>>n>>S;
	for(int i=1;i<=n;i++){
		cin>>t[i];
	}
	// khoi tao
	memset(X, 0, sizeof(X));
	
	while(X[0]==0){
	if(Check(t,X,n,S)){ 
		
	Display(X,n);	
	}
	
	}	
	
	}
}