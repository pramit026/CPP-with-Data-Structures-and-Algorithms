#include <iostream>
using namespace std;
int main(){
	// prime checking
	// int n ;
	// cin >> n;
	// bool isDiv = false;
	// for (int div = 2; div < n; div++)
	// {
	// 	if(n % div == 0){
	// 		isDiv = true;
	// 		break;
	// 	}
	// }
	// if(isDiv){
	// 	cout << "not prime" << endl;
	// }else{
	// 	cout << "prime" << endl;
	// }


	// pattern 
	/*
	1
	12
	123
	1234
	// */
	// int n ;
	// cin >> n;
	// int i = 1;
	// while(i <= n){
	// 	int j = 1;
	// 	while(j <= n){
	// 		cout << j ;
	// 		j++;
	// 		if(j > i){
	// 			break;
	// 		}
	// 	}
	// 	cout << endl;
	// 	i++;
	// }


			// continue
	// int i = 1;
	// while(i < 10){
	// 	if(i == 4){
	// 		i++;
	// 		continue;
			
	// 	}
	// 	cout << i << endl;
	// 	i++;
	// }

	// we dont need to increment again in case of for loop
	for (int j = 1; j < 10; j++)
	{
		if(j == 7){
			continue;
		}
		cout << j << endl;
	}
}