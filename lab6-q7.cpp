#include<iostream>
using namespace std;


/*UpperCase and LowerCase
Write a user-defined function toUpper() that returns the uppercase of the inputChar received. Use call-by-value.
Write a user-defined function toLower() that returns the lowercase of the inputChar received. Use call-by-value.
Write a main program, that calls the above function based on the input of the user. If the user enters a lower case character, it should automatically detect it and call toUpper() and display the upper case value and vice-versa. 
*/

//to convert lowercase to uppercase
char Upper(char a){
     char c = char(int(a)-32);
     return c;
     }
//to convert uppercase to lowercase
char Lower(char b){
     char d = char(int(b)+32);
     return d;
     }
//write main function
int main(){
     char input;
     cout<<"enter a character."<<endl;
     cin>>input;

//check if character is uppercase
     if (int(input)>=65 && int(input)<=90){
          char p=Lower(input);
          cout<<"This is an uppercase character"<<endl;
          cout<<"The lowercase character is "<<p<<endl;
          }

//check if character is lowercase
     else (int(input)>=97 && int(input)<=122);{
          char q=Upper(input);
          cout<<"This is an lowercase character"<<endl;
          cout<<"The uppercase character is "<<q<<endl;
     }
//return
return 0;
}
