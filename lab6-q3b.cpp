#include<iostream>

using namespace std;
/* the function that finds the maximum should be void, and takes a third, pass by reference parameter; then puts the maximum in that.
*/
/*the function that finds the maximum should be void, and takes a third, pass by reference parameter
*/

void maximum(int a, int b, int &c){
	if(a>b){
	c=a;
	}
	else{
	c=b;
	}
}

//write main function
int main(){
	int a;
	int b;
//take numbers from the user
	cout<<"Enter the numbers"<<endl;
	cin>>a>>b;
	int c;
//call the function
	maximum(a,b,c);
//print the maximum
	cout<<c<<endl;
return 0;
	
}
