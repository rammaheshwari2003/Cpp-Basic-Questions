// wap to print whether a number is amstrong number or not.
// parameter --> int
// return --> string (a message "yes" or "not" )
#include<iostream>
#include<cmath>
using namespace std;
				string amstrong(int num){
					int temp,temp2,sum=0,count=0,last;
					temp=num;
					temp2=num;
					while(temp>0){
						count++;
						temp/=10;
					}
					while(temp2>0){
						last=temp2%10;
						sum=sum+pow(last,count);
						temp2/=10;
						
					}
					if(num==sum){
						return "yes";
					}
					else{
						return "no";
					}
				}
int main(){
			int num;
			cout<<"Enter a number : ";
			cin>>num;
			string result= amstrong(num);
			cout<<result;
			

return 0;
}

