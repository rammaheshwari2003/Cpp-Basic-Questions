// Write a class named animal constructed by a name, no_legs, category (herbivores, carnivores and omnivores)and two methods  all_details() and category () . 
// Create some instance and display result.
#include<iostream>
using namespace std;
			class Animal{
				public:
					string name;
					int no_legs;
					string category;
					
					// formal parameter
				Animal(string n, int leg, string c){
					name=n;
					no_legs=leg;
					category=c;
					
				}
				
				void all_details(){
					cout<<"Enter Animal Name: ";
					cin>>name;
					cout<<"Number of Legs: ";
					cin>>no_legs;
					cout<<"Category: ";
					cin>>category;
				}
				
				void category_animal(){
					cout<<"Category: "<<category<<endl;
					
				}
				
				
			};
int main(){
			

			
			// actual parameter
			Animal a1("Rabit",4,"Herbivores");
			Animal a2("Lion",4,"Carnivores");
			Animal a3("Bear",4,"Omnivores");
			
			a1.all_details();
			a1.category_animal();
			
			a2.all_details();
			a2.category_animal();
			
			a3.all_details();
			a3.category_animal();
		
return 0;
}

