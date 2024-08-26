#include<iostream>
using namespace std;

// In latest compiler , compiler can typecast data as
//			bigger to smaller 
// 			double --> int --> char
//			double to int, double to char, int to char , possible
// 		but
//			smaller to bigger
//          int to double,    // error throw.
// 			example:-
//			int array[5]={12,34,56.78,34,22};   // error throw
//			cout<<array[2];
int main(){
			int array[5]={12,34,56,34,22};
			cout<<Array[500909];  // undefined behaviour
	
	
			// 1st step
		int arr[8];  // declaretion
		arr[0]=56;
		arr[6]=67;
		arr[2]=56;
		cout<<arr[0];
		
		// 2nd step
		int array[5]={12,34,56.78,34,22};  // data loss index -> 2 (typecast into int)
		cout<<array[2];
		
		 // 3rd step
//		int Array[5]={12,34,"apple",34,22};  // error
//		cout<<Array[2];

//		 // 4th step
//		int Array[5]={12,34,'A',34,22};  // display ASCII value (type cast into int)
//		cout<<Array[2];


//		double Array[5]={12,34,'A',34,22};  // display ASCII value (type cast into int)
//		cout<<Array[2];

return 0;
}
