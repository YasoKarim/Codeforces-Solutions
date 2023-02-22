#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {
	string str , rev;
	cin >> str;
	string temp = str;
	reverse(temp.begin() , temp.end());
	cout<<temp;
	if(str == temp)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
