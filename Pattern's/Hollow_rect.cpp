// write a program to draw a pattern (hollow rect)   *******
//                                                   *     *
//                                                   *     *
//                                                   *******

#include<iostream>
using namespace std;
int main(){
				for(int i=1;i<=8;i++){
					for(int j=1;j<=10;j++){
						if(i==1 || i==8 || j==1 || j==10)
						cout<<"*";
						else
						cout<<" ";
					}
					cout<<endl;
				}
			
return 0;
}
