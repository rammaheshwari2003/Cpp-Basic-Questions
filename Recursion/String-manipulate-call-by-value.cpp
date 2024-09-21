// wap to manipulate the following string as, S="we are here to learn",  Output= "we$are$here$to$learn".

#include<iostream>
using namespace std;
					// call by value method:-
					// parameter --> string
					// return --> string
				string manupulate_value(string s){
							for(int i=0; i<s.length(); i++){
								if(s[i]==' '){
								
								s[i]='$';
							}
							}	
							return s;
				}				
			
int main(){
				string s="we are here to learn";
				
				string Value=manupulate_value(s);
				cout<<"Call by value method: "<<Value<<endl;
				
return 0;
}

