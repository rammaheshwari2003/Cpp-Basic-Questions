// wap to find out all the index's (indice's) of particular character given by user.	
#include<iostream>
using namespace std;

int main(){
		string str="apple is a very good for health";
		char ch='o';
		int index=-1;
		while(1){
			index=str.find(ch, index+1);
			if(index==-1)
			break;
			cout<<index<<" "<<endl;
		}
			
			
}

