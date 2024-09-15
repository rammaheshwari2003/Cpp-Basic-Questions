// pointer
#include<iostream>
using namespace std;

int main(){
				int number =90;
				double marks=34.65;
				char choice= 'T';
				
				int *p1=&number;   // *= astrick symbol (indirection, dereferece ) 
				double *p2;
//				cout<<sizeof(p1)<<" "<<sizeof(p2);
				cout<<p1<<" "<<p2<<endl;;
				
//  			dereferece
				*p1+=10;
				cout<<*p1<<endl;	
				
				
return 0;
}

