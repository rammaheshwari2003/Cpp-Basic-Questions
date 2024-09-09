#include<iostream>
using namespace std;

int main(){
			string str="c++ is a powerful langauge";
			int size=str.size();
			string newstr;
			for(int i=0; i<=size; i++){
				if(str[i]==' ')
				newstr+='.';
				else
				newstr+=str[i];
				
			}
			cout<<str<<endl;
			cout<<"reverse"<<endl;
			for(int i=newstr.size()-1; i>=0; i--){
				cout<<newstr[i];
			}
			
		

return 0;
}

