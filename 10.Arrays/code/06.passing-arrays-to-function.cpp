#include <iostream>
using namespace std;

/*
// passing arr to function
void PrintArray(int arr[], int n){
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void increment(int a , int b[], int n){
	a++;
	b[0]++;
}



int main(){
	// int input[100] = {1,2,3} ;

	// PrintArray(input,100);
	int a = 10;
	int b[10] = {1,2,3};
	increment(a,b,10);
	cout << "a " <<a << endl;
	cout << "b[0] "<< b[0] << endl;
}
*/

// reverse array

void reverseArray(int arr[], int n){
	int i = 0, j = n-1;
	while(i < j){
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
}
int main(){
	int n;
	cin >> n;
	int arr[100];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	reverseArray(arr,n);
	for (int j = 0; j < n; ++j)
	{
		cout << arr[j] <<" ";
	}
	cout << endl;
}