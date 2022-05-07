// not done yet
#include <iostream>
using namespace std;

void arrIntersection(int arr1[],int n1, int arr2[], int n2){
	int arr3[1000]= {0};
	for (int i = 0; i < n1; ++i)
	{
		for (int j = 0; i < n2; ++j)
		{
			if(arr1[i] == arr2[j] && (arr2[j] != arr3[j])){
				cout << arr2[j] << " ";
			    arr3[j] = arr2[j];
			    break;
			}
		}
	}
}


int main(){
	int t;
	cin >> t;
	while(t--){
		int n1;
		cin >> n1;
		int arr1[1000];
		int arr2[1000];
		for (int i = 0; i < n1; ++i)
		{
			cin >> arr1[i];
		}
		int n2;cin >> n2;
		for (int j = 0; j < n2; ++j)
		{
			cin >> arr2[j];
		}
		arrIntersection(arr1,n1,arr2,n2);
	}
}