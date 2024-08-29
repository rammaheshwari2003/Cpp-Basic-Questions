// WAP to find how many students get passed in an examination ,we have  an array of marks.
// Marks[]={88,45,66,77,8,9,22,69} 
// Passing marks :60
// Output: 4

#include<iostream>
using namespace std;
			
int main(){
			int marks[]={88,45,66,77,8,9,22,69};
			int Passing_marks=60;
			int size=sizeof(marks)/sizeof(marks[0]);
			int count=0;
			for(int i=0; i<size; i++){
				if(marks[i]>=Passing_marks){
					cout<<marks[i]<<" ";
					count++;
				}
			}
			cout<<endl;
		cout<<"Total Passing Student: "<<count;
		
return 0;
}
