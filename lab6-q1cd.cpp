#include<iostream>
using namespace std;

/*
Write a function that receives the unitCst, units, taxRt, salesTx, and totDue and outputs them in a very readable format. Choose an appropriate name for this function.
Write a main function with variables called unitCost, unitsPurch, taxRate, salesTax, and totalDue. Your program should call the functions listed above.
*/



//functions for taking input
//input unit cost
float unitCst(){
	float cost;
	cout<<"Enter the unit cost: "<<endl;
	cin>>cost;
	return cost;
}
//input number of units
float units(){
	float unit;
	cout<<"Enter the number of units: "<<endl;
	cin>>unit;
	return unit;
}
//input tax rate
float taxRt(){
	float rate;
	cout<<"Enter the tax rate: "<<endl;
	cin>>rate;
	return rate;
}

//function to calculate sales tax
float salesTx(float unitcost,float units,float taxRt){
	float tax=unitcost*units*taxRt;
	return tax;
}

//function to calculate total due
float totDue(float unitcost,float units,float salestax){
	float total=unitcost*units + salestax;
	return total;
}


//write main function
int main(){

//call all previous functions
	float x=unitCst();
	float y=units();
	float z=taxRt();
	float a=salesTx(x,y,z);
	float b=totDue(x,y,a);
	cout<<"The sales tax is: "<<a<<endl;
	cout<<"The total due is: "<<b<<endl;
	
return 0;
}
