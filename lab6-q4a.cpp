#include<iostream>

using namespace std;

/*
Write a program with a function that takes two int parameters, finds the min, then returns the minimum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the minimum.
*/

//function that takes two int parameters, finds the min, then returns the minimum.
int minimum(int a, int b){
		if(a<b){
		return a;
		}
		else{
		return b;
		}
}
//write main function

int main(){
	int a;
	int b;
//take the input values

		cout<<"Enter the numbers"<<endl;
		cin>>a>>b;
//call the function

			minimum(a,b);
//print the the minimum
			cout<<minimum(a,b)<<" is minimum of the two"<<endl;
//return
return 0;
}

