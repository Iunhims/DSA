#include<bits/stdc++.h>
using namespace std;

int Three(string s){
	int num=0;
	for(int i=0;i<s.size();++i){
		if(s[i]=='5') s[i]='3';
			num = num*10 + s[i]-'0';
	}
	return num;
}

int Five(string s){
	int num=0;
	for(int i=0;i<s.size();++i){
		if(s[i]=='3') s[i]='5';	  
			num=num*10 + s[i]-'0';
}
	return num;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		string s,s1;
		cin>>s>>s1;
		cout<< Three(s) + Three(s1)<<" "<<Five(s)+Five(s1)<<"\n";
	}
	return 0;
}