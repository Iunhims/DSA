#include<bits/stdc++.h>
using namespace std;

//infix ve prefix
int main(){
	int t;
		ios_base::sync_with_stdio(0);cin.tie(0);
	cin>>t;
	while(t--){
	string s;
	cin>>s;
		stack<string>stk;
		int len = s.size();
		for(int i= len-1; i>=0;i--){
			if(s[i]== '+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
				string a= stk.top(); stk.pop();
				string b= stk.top(); stk.pop();
				string tmp = a + b + s[i];
				stk.push(tmp);
			}
			else stk.push(string(1,s[i]));
		}
	cout<< stk.top() << '\n';	
	}
	return 0;
}