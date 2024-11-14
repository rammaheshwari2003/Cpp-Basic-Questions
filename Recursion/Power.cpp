// power recursion.
#include<iostream>
using namespace std;

	int pow(int b,int p){
			if(b==0){
				return 0;
			}
			if(p==0){
				return 1;
			}
			int ans=b*pow(b,p-1);
			return ans;
		}
		
		
int main(){
		
		int b,p;
		cout<<"Enter a base number or power : ";
		cin>>b>>p;
		
		cout<<pow(b,p);
		

return 0;
}
