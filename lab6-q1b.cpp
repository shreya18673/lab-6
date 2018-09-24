#include<iostream>
using namespace std;

/*
Write a function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue. Choose an appropriate name for this function.
*/



float salesTx(float units, float unitcst, float taxRt, float salestax){

//salestax calculations
	salestax=units*unitcst*taxRt;
	return salestax;
	}

float totDue(float units, float unitcst, float taxRt, float salestax, float totaldue){
	int z;
	z=salesTx(units, unitcst, taxRt, salestax);
	totaldue=z+(units*unitcst);
	return totaldue;
	
    
}

//write the main function
int main(){
float m, n;
float units, unitcst, taxRt, salestax, totaldue;

//Ask for the input values
cout<<"Enter units."<<endl;
cin>>units;
cout<<"Enter unit cost of the product."<<endl;
cin>>unitcst;
cout<<"Enter the tax rate."<<endl;
cin>>taxRt;

//call the function
m=salesTx(units, unitcst, taxRt, salestax);
n=totDue(units, unitcst, taxRt, salestax, totaldue);
//print the salestax
cout<<" the sales tax is "<<m<<endl;
cout<<" the total due is "<<n<<endl;
return 0;
}
	
