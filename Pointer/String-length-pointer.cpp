#include<iostream>
using namespace std;

int main(){
//				string str="Bhopal the city of lakes";
//				
//				
//				const char * ptr="Bhopal the city of lakes";
////					string *ptr=&str;
//				int length=0;
//				while(*ptr!='\0'){
//					length++;
//					ptr++;
//					
//				}
//				cout<<"Pointer length: "<<length;



				char msg[]="Bhopal the city of lakes";
				int count=0;
				char *ptr=msg;
//				cout<<ptr;
				while(*ptr !=0){
					count++;
					ptr++;
				}
				cout<<"Number of character : "<<count;

				
return 0;
}

