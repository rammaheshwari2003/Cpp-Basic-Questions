//  find  == index find.
#include<iostream>
using namespace std;

int main(){
			string str="apple is a health";
			int index=str.find('a');
			cout<<index<<endl;
			
			index=str.find('a', index+1);
			cout<<index<<endl;
			
  return 0;
}

