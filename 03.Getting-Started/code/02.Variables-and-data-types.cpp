#include <iostream>
using namespace std;
int main(){
	int a , b;   //int is 4bytes, in turbo c it is 2 byte
	a = 10 ;
	b = 15 ;
	cout << a + b << endl;

	char d = 'x';  // char is of 1 byte
	cout << d << endl;

	float f = 1.23;   // float is of 4 bytes

	double db = 12.342424;

	bool bl = true;

	int size = sizeof(f);
	cout << size << endl;



	// simple interest
	int principle = 100;
	int rate_of_interest = 12;
	int time = 2 ;

	int simple_interest = (principle * rate_of_interest * time)/100;
	cout << simple_interest << endl;
}