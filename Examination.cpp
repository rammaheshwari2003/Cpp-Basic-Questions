// Write a cpp program to display names, rollno, and grade of 3 students who have appeared in the examination. 
// Declare the class of name, rollno and grade. Create an array of class objects. Read and display the contents of the array.
#include<iostream>
#include<string>
using namespace std;
		class Students{
			private:
				string name;
				int rollno;
				char grade;
			public:
				Students(string n="", int r=0, char g=' '){
					name=n;
					rollno=r;
					grade=g;
				}
			void readData(){
				cout<<"Enter name: ";
				cin.ignore();
				getline(cin,name);
				
				cout<<"Enter Rollno: ";
				cin>>rollno;
				
				cout<<"Enter Grade: ";
				cin>>grade;
			}
			
			void diplayData(){
				cout<<"Name : "<<name<<endl;
				cout<<"Rollno: "<<rollno<<endl;
				cout<<"Grade: "<<grade<<endl;
			}
		};
int main(){
		const int Num_student=3;
		Students s[Num_student];
		
		for(int i=0; i<Num_student; i++){
			cout<<"Student: "<<i+1<<" : "<<endl;
			s[i].readData();
			cout<<endl;
	}
	
		for(int i=0; i<Num_student; i++){
			cout<<"Student: "<<i+1<<" : "<<endl;
			s[i].diplayData();
			cout<<endl;
		}

return 0;
}

