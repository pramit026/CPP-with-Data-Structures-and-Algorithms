#include <iostream>
using namespace std;
int main(){

// 	int k = 1;
// 	while(k < 100){
// 		int k2 = 1002;
// 		cout << k2 << endl;
// 		k++;
// 	}
// 	//cout << k2 << endl; // not availble here


// 	int i = 10;
// 	cout << i << endl;

// 	if(i == 10){
// 		int j = 12;  // scope of j is the curly brackets of if
// 		cout << j << endl;
// 	}
// //	cout << j << endl; // j is not available here


	// int i = 1;
	// while(i < 10){
	// 	int j = 1;
	// 	while(j < i){
	// 		int k = 10;
	// 		cout << j ;
	// 		j++;
	// 	}
	// 	cout << endl;
	// 	i++;
	// }

	int i = 22;
	// int i = 10; // not allowed 
	cout << i << endl;
	if(i == 10){
		int i = 23; // we can make int i because it is a different scope
		cout << i << endl;
	}
	cout << i << endl;

	// 
	int k = 0;

	for (k = 0; k < 10; ++k)
	{
		/* code */
		cout << k << endl;
	}
}