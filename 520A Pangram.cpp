#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {
	char c[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int length;
	cin>>length;
	char s[100],s1[100];
	cin>>s;
	for(int i = 0;i < length;i++){
		s[i] = (char)tolower(s[i]);//convert to lower case
	}
	sort(s,s+length);
	int count = 0;
	for(int i = 0;i < length;i++){//a
          if(s[i] != s[i+1])
		  	s1[count++] = s[i];
		
	}
	if(count == 26)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
