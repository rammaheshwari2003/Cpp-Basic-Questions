#include<iostream>
using namespace std;

int main(){
				
//	wap to convert upper case letter into lower one and vice - versa;
                                                                                    
			string str="apple 123 A";
			
			for(int i=0; i<=str.length(); i++){
				
				if(isupper(str[i])){
					str[i]=tolower(str[i]);	
				}
				else if(islower(str[i])){
					str[i]=toupper (str[i]);
				}
				else if(isdigit(str[i])){
					str[i]='$';
				}
			}
			cout<<str;

return 0;
}
