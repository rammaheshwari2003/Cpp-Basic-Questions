// wap to manipulate the following string as, S="we are here to learn",  Output= "we$are$here$to$learn".

#include<iostream>
using namespace std;
					
					// call by reference method:-
					// parameterr --> string
					// return --> void;
			void manupulate_reference(string &s){
				for(int i=0; i<s.length(); i++){
					if(s[i]==' '){
					s[i]='$';
			}
		}
			}		
			
int main(){
				string s="we are here to learn";
				
				manupulate_reference(s);
				cout<<"Call by reference method: "<<s;
return 0;
}

