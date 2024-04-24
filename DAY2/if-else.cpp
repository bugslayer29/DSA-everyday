#include<iostream>
using namespace std;
int main(){

    // package given; if it is greater than 10, accepted otherwise rejected.
  /*int package;
  cout << "Package Amount: \n";
  cin >> package;

  if(package >10)
{
    cout << "Result is :\n" << "accepted";
}
else
{
    cout <<  "Result is :\n" << "rejected";
}
  */

    // --------------------------------------------------------------------------------------------------------

//  program to check whether the student is pass or not, if marks > 33%(pass) otherwise fail.
/*
int marks;
cout << "Enter the marks : \n";
cin >> marks;

if(marks > 33)
{
    cout << "Pass";
}
else
{
    cout << "Fail";
}
*/

 // --------------------------------------------------------------------------------------------------------

//  program to check whther num1 > num2 or not
/*
int num1, num2;
cout << "Enter the value of num1: \n";
cin  >>  num1;
cout << "Enter the value of num2: \n";
cin  >>  num2;
if(num1>num2)
{
    cout << " yes ";
}
else{
    cout << " no ";
}
*/

 // --------------------------------------------------------------------------------------------------------
// program to check whether given number is even or not
/*
int num;
cout << "Enter the vlaue of num: \n";
cin >> num;
if(num % 2 == 0)
// Modulo Operator(%) --> Gives remainder value.
{
    cout << "Even";
}
 else 
 {  
    cout << "Odd";

 }
*/


 // --------------------------------------------------------------------------------------------------------

// Character value give, check whether it is vowel or consonent.

char a;
cout << "Enter the value of alpha as character: \n";
cin >> a;
 if(a=='a' || a=='A')
 {
    cout << "vowel";
 }
 else if(a=='e' || a=='E')
 {
    cout << "vowel";
 }
 else if(a=='i' || a=='I')
 {
    cout << "vowel";
 }
 else if(a=='o' || a=='O')
 {
    cout << "vowel";
 }
 else if(a=='u' || a=='U')
 {
    cout << "vowel";
 }
else 
{
    cout << "consonent";
}

return 0; 
}