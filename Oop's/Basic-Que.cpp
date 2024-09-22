// wap to create a class Named system having, attribute(data member), name, ram, hard_disk, category, behaviour, (member function) processing(), input(), output().
#include<iostream>
using namespace std;
				
 class System{
 public: 
 		string name, category;
 		int hard_disk, ram;
 		
 			// constructor
 			System(){   // default
 				name="";
 				category="";
 				hard_disk=0;
 				ram=0;
 				cout<<"Constructor default: ";
			 }
			
			// formal parameterized
			System(string n, string c, int hd, int rm){
				name=n;
				category=c;
				hard_disk=hd;
				ram=rm;
				cout<<"Parameterized calling \n";
			} 		
			
			
 		void insert_data(){
 			cout<<"Enter name and category of the system: ";
 			cin>>name>>category;
 			cout<<"Mention it HD and RAM: ";
 			cin>>hard_disk>>ram;
		 }
		 
		 void display_data(){
		 	cout<<"Name: "<<name<<" Category: "<<category<<endl;
		 	cout<<"Hard Disk: "<<hard_disk<<" RAM: "<<ram<<endl;
		 }
		 
		 void input(){
		 	cout<<name<<" System takes some input\n";
		 }
		 void process(){
		 	cout<<name<<" System start processing\n";
		 }
		 void output(){
		 	cout<<name<<" System generates some output\n";
		 }
 
 };
			
				
int main(){
//			System sys1;
//			sys1.insert_data();
//			sys1.display_data();
//			sys1.input();
//			sys1.process();
//			sys1.output();
//			
		
//			System sys2("Lenove","Laptop",1,16);  // actual parameterized

			System sys1;
			sys1.insert_data();
			
			System sys2("Lenove","Laptop",1,16);
			sys1.display_data();
			sys2.display_data();

return 0;
}

