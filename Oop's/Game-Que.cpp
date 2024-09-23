#include<iostream>
using namespace std;

				class Game{
					private:
						string category;
						string status;
//						int id;
						int *id; // pointer
						
					public:
						Game (string category, string status, int id){
							this->category=category;
							this->status=status;
//							this->id=id;
						// this pointer(object reference)
						this->id=new int;
						*(this->id)=id;   // pointer
						}

					Game (const Game &obj){
//						this->category=gm.category;
//						this->status=gm.status;
//						this->id=gm.id;
						
						this->category=obj.category;
						this->status=obj.status;
						this->id=new int;
						*(this->id)=*obj.id;
					}
					void change_id(int identity){
						*id=identity;
					}
					void display(){
						cout<<"Object id: "<<*id<<endl;
						cout<<"Category: "<<category<<" status: "<<status<<endl;
					}
				};

int main(){
//		Game obj1("team mate","Killed",101);
//		Game obj2(obj1);
//		obj1.display();
//		obj2.display();


// pointer
		Game obj1("team mate","Killed",101);
		Game obj2(obj1);
		obj1.display();
		obj2.display();
		
		obj2.change_id(102);
		obj1.display();
		obj2.display();

return 0;
}

