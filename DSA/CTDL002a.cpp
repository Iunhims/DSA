#include<bits/stdc++.h>
using namespace std;

void generate_binary_strings(string s){
	size_t found =s.find('?');
	if(found == string::npos){
		cout<<s;
		
	}
	else{
		s[found] = '0';
		generate_binary_strings(s);
		s[found] ='1';
		generate_binary_strings(s);  
	}
}
string Nhapchuoi(){
	string s;
	getline(cin,s);
	return s;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		string s = Nhapchuoi();
		generate_binary_strings(s) ;
	}
	cout<<"\n";
}