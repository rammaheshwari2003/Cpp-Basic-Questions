#include<iostream>
using namespace std;

int main() {

	char name[5]= {'a','r','j','u','n'};  // \0 ==> by default null character.
	// size = length of string + 1;
	cout<<name<<endl;


	char name1[10]= {'a','r','j','u','n','\0','p'};
	cout<<name1<<endl;

	char name2[6]="arjun";
	cout<<name2<<endl;

	string name3="arjun";
	cout<<name3<<endl;


	// user input
	string name4;
	cout<<"Enter your name: ";
	getline(cin,name4);    // getline(input_object,buffer)
	cout<<name4;

	return 0;
}

