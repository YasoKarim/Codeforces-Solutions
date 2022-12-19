#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(false);
	long long int a,b, k;
	cin>>a>>b>>k;
	
	if(a%k==0 && b%k==0)
	cout<<"Both";
	else if(a%k==0 &&  b%k!=0)
	cout<<"Memo";
	else if(a%k!=0 &&  b%k==0)
	cout<<"Momo";
	else
	cout<<"No One";
	
	return 0;
}
