// WAP to print all palindrome number in given range
// parameter -->int,int(range)
// return --->no return
#include<iostream>
using namespace std;
				int palinrange(int num, int range){
					for(int i=num; i<=range; i++){
						int temp=i, last, sum=0;
						while(temp>0){
							last=temp%10;
							sum=sum*10+last;
							temp/=10;
						}
						if(sum==i){
							cout<<i<<" ";
						}
					}
					cout<<endl;
				}
int main(){
			int num, range;
			cout<<"Enter a number: ";
			cin>>num;
			
			cout<<"Enter the range: ";
			cin>>range;
			
			palinrange(num,range);

return 0;
}

