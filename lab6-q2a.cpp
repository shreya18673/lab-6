#include<iostream>
using namespace std;

/*Write a program with a function that takes two int parameters, adds them together, then returns the sum.
*/

int addition(int a, int b){
	a+b;
	return a+b;
}
/*
The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the sum.
*/
int main(){
	int a;
	int b;
	int sum;
	cout<<"Enter 2 values."<<endl;
	cin>>a>>b;
	sum=addition(a,b);
	cout<<addition(a,b)<<endl;
return 0;
}

