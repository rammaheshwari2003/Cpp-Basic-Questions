#include<iostream>
using namespace std;

int main(){
			string str="apple is good";
			int size=str.size();
		for(int i=0; i<=size; i++){
			if(str[i]=='p' || str[i]=='o')
				str[i]='$';
		}
		cout<<str;


return 0;
}

