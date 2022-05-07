#include <iostream>
using namespace std;
int main(){
	
	/*
	int a , b ;
	cin >> a >> b ;

	// // check equality
	// if(a == b){
	// 	cout << "a and b are equal" << endl;
	// }else{
	// 	cout << "They are not equal" << endl;
	// }

	// // only if
	// if(a==b){
	// 	cout << "They are equal" << endl;
	// }

	if(a == b){
		cout << "These are equal" << endl;
	}else{
		if(a < b){
			cout << "a is smaller than b" << endl;
		}else{
			cout << "b is smaller" << endl;
		}
	}

// more concise way of writing upper statement

	if(a == b){
		cout << "These are equal" << endl;
	}else if(a < b){
		cout << "a is smaller than b" << endl;

	}else{
		cout << "b is smaller" << endl;
	}
	*/

	// even-odd
	int number;
	cin >> number;
	if(number % 2 == 0){
		cout << "Even" << endl;
	}else{
		cout << "Odd" << endl;
	}

}