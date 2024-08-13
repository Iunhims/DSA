#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
int n;
int tree[MAX];
int Dosau(int p){
	if (p>=n || (tree[p]==-1)) return 0;
	int ldepth = Dosau (2*p+1);
	int rdepth = Dosau (2*p+2);
	if(ldepth > rdepth)
		return ldepth+1;
	else 
		return rdepth +1;
	
}
int main(){
	int t; cin>>t;
	while(t--){
		memset(tree, 0, sizeof(tree));
		cin>>n;
		for (int i=0; i<n;i++) cin>>tree[i];
		int dosaucuacay = Dosau(0);
		cout<<dosaucuacay<<endl;
	}
	return 0;
}