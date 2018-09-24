#include<iostream>
using namespace std;

/*
Write a function that finds the minimum  of the numbers should be void, and takes a third, pass by reference parameter; then puts the minimum  in that.
*/


/*Write a function that finds the minimum  of the numbers should be void, and takes a third, pass by reference parameter*/


void minimum(int a, int b, int &c){
	if(a<b){
	c=a;
	}
	
	else{
	c=b;
	}
}

//write the main function


int main(){
	int a;
	int b;
	int c;
//take two no.s from the user
	cout<<"Enter 2 numbers."<<endl;
	cin>>a>>b;
	
//call the function
	minimum(a,b,c);

//print the minimum
 cout<<c<<" is the minimum of the two given numbers"<<endl;

return 0;
}
