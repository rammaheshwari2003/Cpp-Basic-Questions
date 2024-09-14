// WAP to print all armstrong number in given range.
// parameter -->int,int(range)
// return --->no return

#include<iostream>
#include<cmath>
using namespace std;
				int amsrange(int num, int range){
					for(int i=num; i<=range; i++){
						int temp1=i, temp2=i,sum=0,last,count=0;
						while(temp1>0){
							temp1/=10;
							count++;
						}
						while(temp2>0){
							last=temp2%10;
							sum=sum+pow(last,count);
							temp2/=10;
						}
						if(sum==i)
						cout<<i<<" ";
						
					}
					cout<<endl;
				}

int main(){
			int num, range;
			cout<<"enter a number : ";
			cin>>num;
			
			cout<<"Enter the range: ";
			cin>>range;
			
			amsrange(num,range);

return 0;
}

