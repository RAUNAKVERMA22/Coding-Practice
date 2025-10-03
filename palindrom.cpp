#include <iostream>
#include <string>
#include <cstring>
using namespace std;
bool ispalin(string &s){
	int l = 0;
	int r = s.length()-1;
	while(r>l){
		if(s[l] != s[r]){
			return false;
		}
		l++;
		r--;
	}
	return true;
}
int main(){
	string s;
	cout<<"enter a string; "<<endl;
	cin>>s;
	//cout<<ispalin(s)<<endl;
	//ispalin(s);
	if(ispalin(s)){
		cout<<"true. "<<endl;
	}
	else {
		cout<<"false. "<<endl;
	}
	return 0;
}