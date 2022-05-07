#include <iostream>
using namespace std;

bool isFib(int n){
	int first= 0 ,second = 1;
	int next;
	while(first < n){
		next = first + second;
		first = second;
		second = next;
	}
	if(first == n){
		return true;
	}else{
		return false;
	}

}

int main(){
	int n;
	cin >> n;
	cout << isFib(n) << endl;
}