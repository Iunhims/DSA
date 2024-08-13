#include<bits/stdc++.h>
using namespace std;

	
	
	//Sinh xau nhi phan n bit
	//b1: khoi tao cau hinh dau tien n bit n so 0
	//b2: while(chua phai cau hinh cuoi cung)
	//in ra cau hinh hien tai
	//Sinh ra cau hinh tiep theo
	
	int n,a[100],check;
	
	//khoi tao cau hinh dau tien n bit 0
	void ktao(){
		for(int i=1;i<=n;i++){
			a[i] = 0;
		}
	}
	void sinh(){
		int i=n;
		while(i>=1 && a[i]==1){
			a[i]=0;
			--i;
		}
		if(i ==0 ){
			check =0;
		}
		else{
			a[i]=1;
		}
	}
	int main(){	
	
	int t;
	cin>>t;
	while(t--){
	cin >> n;
	check =1;
	ktao();
	while(check){
		for(int i=1;i<=n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
		sinh();
	 
	 }	
	}
	
	return 0;
	}
	
	
	
	
	
