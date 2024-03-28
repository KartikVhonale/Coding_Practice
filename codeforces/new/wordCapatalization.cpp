#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
		cin>>s;
		if('z'>=s[0]&&s[0]>='a'){
			s[0]=char(s[0]-'a'+'A');
		}
		cout<<s;
	return 0;
}