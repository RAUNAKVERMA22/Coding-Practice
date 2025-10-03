#include <iostream>
#include <algorithm>
using namespace std;
bool anagram(string &s1, string &s2){
	if(s1.length() != s2.length()){
		return false;
	}
	else{
	
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	return (s1==s2);
}
}
int main(){
	string s1,s2;
	cout<<"enter string 1: "<<endl;
	cin>>s1;
	cout<<"enter string 2: "<<endl;	
	cin>>s2;
	if(anagram(s1,s2)){
		cout<<"true"<<endl;
	}
	else {
		cout<<"false"<<endl;
	}
	return 0;
}