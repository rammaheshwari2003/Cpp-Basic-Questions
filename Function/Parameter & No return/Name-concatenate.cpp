//  WAP to concatenate name and surname of a user having one space between them
//  parameter -->name,surname
//  return --->no return
#include<iostream>
#include<string>
using namespace std;
				string Fullname(string Name, string Surname){
					string fullname=Name+ " "+Surname;
					cout<<fullname;
				}
int main(){
				string Name, Surname;
				cout<<"Enter your first and last name: ";
				cin>>Name>>Surname;
				
				Fullname(Name, Surname);
							
return 0;
}

