#include<iostream>
using namespace std;

int main(){
			string f1="apple";
			string f2="banana";
			
			// f1=f1 + f2;
			
			f1.append(f2);
			cout<<f1<<endl;
			
			
			// 3 string call  (append )
			string f3="pineapple";
			f1.append(f2.append(f3));
			cout<<f1<<endl;
			
			
			// push back use
			string f4="apple";
		f4.push_back('r');
		cout<<f4<<endl;
		
		// pop back use
//		 string f5="apple";
//		 f5.pop_back();
//		 cout<<f5;
		
			// capacity check
			  string f6="";
			  	// cout<<f6.length()<<endl;
			  	// cout<<f6.capacity()<<endl;
			  	
			  	for(int i=1; i<=20; i++){
			  		f6.push_back('a');
			  		cout<<"size : "<<f6.size()<<" capacity :"<<f6.capacity()<<endl;
				  }
				  cout<<f6;
		
		
return 0;
}

