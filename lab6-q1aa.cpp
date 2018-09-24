#include<iostream>
using namespace std;

/*
Write a function that obtains from the user and returns a value for unitCst, units, and taxRt to the calling module. Choose an appropriate name for this function.
*/

float inputvalues(float unitcst, float units, float taxRt){
	cout<<"Enter the unitcost."<<endl;
	cin>>unitcst;

	cout<<"Enter the units."<<endl;
	cin>>units;

	cout<<"Enter the tax rate."<<endl;
	cin>>taxRt;

return unitcst;
return units;
return taxRt;
}

//write the main function
float main(){

float unitcst;
float units;
float taxRt;

//call the function
	inputvalues(unitcst, units, taxRt)

//return 
return 0;
}
