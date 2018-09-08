#include<iostream>
using namespace std;

/*(By Value) Write a program with a function that takes two int parameters, finds the maximum, then returns the maximum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the maximum.
*/
/* Write a program with a function that takes two int parameters, finds the maximum, then returns the maximum. 
*/
int maximum(int a, int b){
	if(a>b){
	return a;
	}
	else{
	return b;
	}
}

int main(){
	int a;
	int b;
	cout<<"enter 2 no.s"<<endl;
	cin>>a>>b;
	maximum(a,b);
	cout<<maximum(a,b)<<" is maximum of the two"<<endl;
return 0;
}
