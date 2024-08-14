#include<iostream>
using namespace std;

int main(){
	int cost_price, selling_price;
	
	cout<<"Enter Cost Price: ";
	cin>>cost_price;
	
	cout<<"Enter Selling Price ";
	cin>>selling_price;
	
			if(cost_price < selling_price){
				cout<<"Profit Amount";
			}
			else if(cost_price > selling_price){
				cout<<"Loss Amount";
			}
			else{
				cout<<"No Profit & No Loss";
			}


return 0;
}
