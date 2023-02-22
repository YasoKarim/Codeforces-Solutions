#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {
	string s;
	cin >> s;
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	sort(s.begin(),s.end());
	for(int i = 0 ;i < s.length(); i++){	
	if(s[i] != s[i+1]){
	cout<< s[i] << " : " << count(s.begin(),s.end(),s[i]) << "\n";	
	}
		}
	return 0;
}
//#include<bits/stdc++.h>
//using namespace std;
// 
//int main(){
//    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//    string s;
//    cin >> s;
//    long long arr[26] = {0};
// 
//    for (long long i = 0; i < s.size(); i++){
//        cout<<arr[s[i] - 'a']++;
//        
//    }
//    
//    for (int i = 0; i < 26; i++)
//    {
//        if(arr[i] != 0){
//            cout << char (i + 'a') << " : " << arr[i] << "\n" ;
//        }
//    }
//    
//    return 0;
//}
//int flag = 0;
	/*	//cout << s;
			//aaabbc
			//flag -> 0 1 	
	int count = 0;
		for(int j = 0; j < s.length(); j++){
			if(s[i] == s[j] && flag == 0){
				count++;
			}
			if(s[i] == s[j] && flag == 1)
			continue;
			else
			flag = 0;
		}
	flag = 1;
	if(flag == 1)*/
