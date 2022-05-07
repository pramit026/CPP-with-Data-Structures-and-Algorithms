#include <iostream>
using namespace std;
int main(){
	int num;
	cin >> num;
	int div = 2;
	bool isDivided = false;
	while(div < num){
		if(num % div == 0){
			isDivided = true;
		}
		div ++;
	}
	if(!isDivided){
		cout << "Prime" << endl;
	}else{
		cout << "Not Prime" << endl;
	}
}