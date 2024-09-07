#include<iostream>
using namespace std;

int main(){
			
// erase
	string str1="apple is very good for health";
	str1.erase(9,5);
	cout<<str1<<endl;		
	
// replace 
			string str2="apple is very good for health";
			str2.replace(13,0," bad bad");
			cout<<str2<<endl;		
			
// upper case
			string str3="apple is very good for health";
			str3[4]=toupper(str[4]);
			cout<<str3;				

// lower
				
			string str="apple";
			str[3]=tolower(str[3]);
			cout<<str;
return 0;
}

