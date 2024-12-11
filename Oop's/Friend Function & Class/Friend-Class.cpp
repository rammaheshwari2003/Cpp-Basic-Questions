// Freind class
#include<iostream>
using namespace std;
class sbi{
	int amount;
	void balance(){
		cout<<"Balance = " <<amount<<endl;;
	}
	friend class axis;
};

class axis{
	public:
		void show(sbi sk){
			cout<<"Amount of sbi = "<<sk.amount<<"\n";
			sk.balance();
		}
};


int main(){
	sbi s;
	axis a;
	a.show(a);


return 0;
}
