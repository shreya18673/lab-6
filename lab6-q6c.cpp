//include the library
#include<iostream>
using namespace std;


//function to find the sum of squares of all odd numbers between the two numbers
int sumSquareOddNumbers(int a, int b){
	int sum=0;
	if (a%2!=0){
		for (int i=a;i<=b;i+=2){
			sum+=i*i;
		}
	}
	else {
		for (int i=a+1;i<=b;i+=2){
			sum+=i*i;
		}
	}
	return sum;
}



//main function
int main(){
	int num1,num2;
//Ask for input
	cout<<"Enter the first number: "<<endl;
	cin>>num1;
	cout<<"Enter the second number: "<<endl;
	cin>>num2;
	
//call function (call by value)
	int sumSquareOdd=sumSquareOddNumbers(num1,num2);
//print
	cout<<"Sum of squares of odd numbers between them: "<<sumSquareOdd<<endl;
//return
	return 0;
}
