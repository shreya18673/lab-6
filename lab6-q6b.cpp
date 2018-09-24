//include the library
#include<iostream>
using namespace std;



//function to find sum of all odd numbers between the two numbers
int sumOddNumbers(int a, int b){
	int sum=0;
	if (a%2!=0){
		for (int i=a;i<=b;i+=2){
			sum+=i;
		}
	}
	else {
		for (int i=a+1;i<=b;i+=2){
			sum+=i;
	}
}
	return sum;}



//main
int main(){
	int num1,num2;
//Take input from the user
	cout<<"Enter the first number: "<<endl;
	cin>>num1;
	cout<<"Enter the second number: "<<endl;
	cin>>num2;
//call function
	sumOddNumbers(num1,num2);
//print
	cout<<"Sum of odd numbers between them: "<<sumOddNumbers<<endl;
	
	return 0;
}
