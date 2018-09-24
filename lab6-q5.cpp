#include<iostream>

using namespace std;

/*
Write a program that includes the above three (2,3,4) functions. Write a main function that asks user to input 2 variables and asks the user what operation does he want to perform. Based on his input, call the required function and display the output. 
*/

// write the functions

int sum(int a, int b){
	a+b;
		return a+b;
}

int maximum(int a, int b){
	if(a>b){
		return a;
	}
	
	else{
		return b;
	}
}

int minimum(int a, int b){
	if(a<b){
		return a;
	}
	
	else{
		return b;
	}
}

//Write the main function

int main(){

int a;
int b;
int p;

//ask the user for operation to perform
cout<<"What operarton do you want to perform?"<<endl;
cout<<"For summation of two no.s write - 1"<<endl;
cout<<"To find the maximum of two no.s write - 2"<<endl;
cout<<"To find the minimum of two no.s write -3"<<endl;
cin>>p;

//Ask for two numbers
cout<<"enter the two numbers."<<endl;
cin>>a>>b;

//Call operation p
	if(p==1){
		cout<<sum(a,b)<<" is teh sum of the two numbers."<<endl;
	}

	else if(p==2){
		cout<<maximum(a,b)<<" is the maximum of the two numbers."<<endl;
	}

	else if(p==3){
		cout<<minimum(a,b)<<" is the minimum of the two numbers."<<endl;
	}

return 0;
}

