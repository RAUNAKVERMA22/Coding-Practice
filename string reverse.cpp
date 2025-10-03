#include <iostream>
#include <string>
#include <cstring>
using namespace std;
//using rev iteration
string revstring(string &s){
	string result;
	for(int i = s.size()-1; i>= 0;i--){
		result = result + s[i];
	}
	return result;
}
//using 2 pointer
string revstringpointer(string &s){
	int l = 0,r = s.length()-1;
	while(l<r){
		swap(s[l],s[r]);
		l++;
		r--;
	}
	return s;
}


//using recursion
void recstringrec(string &s, int l, int r){
	l = 0;
	r = s.length()-1;
	if(l>=r){
		return;
	}
	swap(s[l] , s[r]);
	recstringrec(s, l+1, r-1); 
}



int main() {
    string a ;
    
    cout<<"enter a string: "<<endl;
    cin>>a;
    //string res = reverseString(s);
    //cout << res;
    //cout<<revstring(a)<<endl;
    cout<<recstringrec(a, 0, a.length() - 1)<<endl;
    
    return 0;
}