// wap to manipulate the string as given.
// input--> "c++ is a powerful language".
// output --> "cpp is a powerful language".
#include<iostream>
using namespace std;

int main(){
			string str="c++ is a powerful language";
			int size=str.size();
			for(int i=0; i<=size; i++){
				if(str[i]=='+'){
					str[i]='p';	
			}
			}
			cout<<str;
			
return 0;
}

