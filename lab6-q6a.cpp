//include the library
#include<iostream>
using namespace std;

//function to find sum of all even numbers between the two numbers
int sumEvenNumbers(int a, int b){
	int sum=0;
	if (a%2==0){
		for (int i=a;i<=b;i+=2){
			sum+=i;
		}}
	else {
		for (int i=a+1;i<=b;i+=2){
			sum+=i;
	}}
	return sum;}


//main
int main(){
	int num1,num2;
	cout<<"Enter the first number: "<<endl;
	cin>>num1;
	cout<<"Enter the second number: "<<endl;
	cin>>num2;
	int sumEven=sumEvenNumbers(num1,num2);
	
	cout<<"Sum of even numbers between them: "<<sumEven<<endl;
	
	return 0;
}
