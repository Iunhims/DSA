#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		for(int i=1; i<=n;i++){
			a[i]=i;
			//  tao ra day tu 1 den n
		}
		while(1){
			for(int i=1;i<=n;i++){
				cout<<a[i];
				// in ra day so dau tien
			}
			cout<<" ";
			int ok=0;
			for(int i=n-1;i>=1;i--){
				if(a[i]< a[i+1]){
					ok=1;
					sort(a+i+1,a+n+1);
					for(int j=i+1;j<=n;j++){
						if(a[j]>a[i]){
							swap(a[i], a[j]);
							break;
						}
					}
					break;
				}
			}
			if(ok==0)
				break;
		}
		cout<<endl;
	}
	
}
