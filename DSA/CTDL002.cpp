#include<bits/stdc++.h>
using namespace std;

void generate_binary_strings(string &s, int index){
	if(index == s.length()){
		cout << s << endl;
		return;
	}
	
	if(s[index] == '?'){
		  
		s[index]='0';
		generate_binary_strings(s, index + 1);
		s[index]='1';
		generate_binary_strings(s, index + 1);
		
		s[index] = '?';  
	}
	else {
		generate_binary_strings(s,index + 1); 
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string input;
		cin >> input;
		
		generate_binary_strings(input, 0); 
	}
}