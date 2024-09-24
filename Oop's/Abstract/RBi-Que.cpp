// wap to create a abstract class name RBI having pure virtual function intrest rate and reporate. Create some child class name pnb, sbi.
#include<iostream>
using namespace std;
			class RBI{
					public:
						virtual void interest_rate()=0;    // pure virtual
						virtual void repo_rate()=0;
						
						void info(){
							cout<<"RBI Regulate all financial institute \n";
						}
			};
		 	class SBI: public RBI{
		 		public:
		 			void interest_rate(){
		 				cout<<"SBI Interest rate, 7 % \n";
					 }
					 void repo_rate(){
					 	cout<<"Repo rate Interest rate, 7 % \n";
					 }
			 };
int main(){
			RBI *base_pointer;
			SBI sbiobj;
			base_pointer=&sbiobj;
			base_pointer->interest_rate();
			base_pointer->repo_rate();
			base_pointer->info();
			

return 0;
}

