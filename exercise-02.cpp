/*
*Author:M Risqullah Sudanta G
*NPM: 140810180066
*Deskripsi:Convert Celcius
*Tahun: 2019
*/

#include<iostream>
using namespace std;

float cel2Fah (float temp){
	return (temp*9/5)+32;
}

int main(){
	int celcius =9;
	float fahrenheit = cel2Fah (celcius);
	cout<<"temp is "<<fahrenheit;	
}
