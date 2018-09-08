#include<iostream>
using namespace std;

/*2(b)
(By Reference) Goal is the same as above, but this time, the function that adds the numbers should be void, and takes a third, pass by reference parameter; then puts the sum in that.
*/

/*the function that adds the numbers should be void, and takes a third, pass by reference parameter; then puts the sum in that.*/
void add(int a, int b, int &c){
//sum
	c=a+b;
}

int main(){
	int a;
	int b;
	cout<<"Enter any two no.s"<<endl;
	cin>>a>>b;
int sum;
	//call function
	add(a,b, sum);
	cout<<sum<<endl;
return 0;
}

