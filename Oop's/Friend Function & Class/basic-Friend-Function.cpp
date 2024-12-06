// With the help to friend function we can access the private data member of any class outside of it.
#include<iostream>
using namespace std;
class student2;
class student1{
	int marks=90;
	friend void cmp(student1, student2);
};
class student2{
	int marks=82;
	friend void cmp(student1, student2);
};
void cmp(student1 s1, student2 s2){
	if(s1.marks > s2.marks){
		cout<<"Student1 has highest marks = "<<s1.marks;
	}
	else{
		cout<<"Student2 has highest marks = "<<s2.marks;
	}
}

int main(){
		student1 obj1;
		student2 obj2;
		cmp(obj1, obj2);

return 0;
}
