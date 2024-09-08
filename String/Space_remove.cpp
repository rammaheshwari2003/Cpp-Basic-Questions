// wap to create a new string with the help of old string str given below such that it does not contain any space.
// str="cpp is a powerful language".
// str2="cppisapowerfullanguage".
#include<iostream>
using namespace std;

int main(){
			string str="cpp is a powerful language",newstr;
			int size=str.size();
			
			for(int i=0; i<=size; i++){
				if(str[i]!=' ')
					newstr=newstr+str[i];
			}
			cout<<newstr;


return 0;
}

