// string palindrome 
#include<iostream>
using namespace std;

int main(){
			string name,reverse="";
			cout<<"Enter any string: ";
			cin>>name;
			int size=name.size();
			for(int i=size-1; i>=0; i--){
				reverse=reverse+name[i];
			} 
			// cout<<reverse;
			
			if(name==reverse)
			cout<<"Palindrome";
			else
			cout<<"No";

return 0;
}

