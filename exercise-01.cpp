/*
*Author:M Risqullah Sudanta G
*NPM: 140810180066
*Deskripsi:Fizz Buzz
*Tahun: 2019
*/

#include <iostream>
using namespace std;

void fizzbuzz(){
	int n=100; 	
	for (int i=1; i<=n; i++){
		if (i%15==0){
			cout<<"FizzBuzz ";
		}
		else if (i%5==0){
			cout<<"Buzz ";
		}
		else if (i%3==0){
			cout<<"Fizz ";
		}
		else cout<<i<<" ";
	}
}

int main(){
	fizzbuzz();
}
