#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int n,m, flag = 0;
	cin >> n >> m;
	for(int i = 1 ;i <= n;i++)
	{
		
			if(i % 2 != 0){
          for(int j = 1;j <= m;j++)
			{
			cout << "#";
		}
			cout<<"\n";}
		
			else
			{
				if(flag % 2 == 0){
            for(int i = 0; i < m-1;i++){
			cout << ".";
			}
			cout<< "#"<<"\n";
			flag++;}
			else{
				cout<<"#";
		    for(int i = 0; i < m-1;i++){
			cout << ".";
			}
			cout<<"\n";
			flag++;
			}
             
						//cout<<flag	
	
		}
			
		//    flag = 1;
	
}
	
	return 0;
}
/*
if(flag == 1 && j == 1)
			cout<<"#";
			if(j < m)	
			cout << ".";
	if(flag == 0)
			{
				//if(j == 1)
			    //cout<< "#";
			    //if(j+1 < m)
			  //  cout<<".";    
		     //flag = 1;
			}
			//if(j == m)

	else{
			if(flag == 0 && j == 1)
			{
			cout<<"#";
			flag = 1;
		    }*/
