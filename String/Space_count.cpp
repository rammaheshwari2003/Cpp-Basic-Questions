// wap to count number of space in the string str given below str="cpp is a powerfull language".
// outpur= 4.
#include<iostream>
using namespace std;

int main(){
			string str="cpp is a powerful language";
			int size=str.size(),count=0;
			for(int i=0; i<=size; i++){
				if(str[i]==' '){
					count++;
				}
			}
			cout<<count;
			


return 0;
}

