#include<iostream>
using namespace std;
int main(){
//    to print a to z;

     /*
     1st approach :
     for(int i=97; i<=122;i++)
     {
         char c =  i;
         cout << c << endl;
         
     }
     2nd approach :
    char alpha;
    for( alpha = 'a'; alpha <= 'z'; alpha++)
    {
        cout << alpha << endl;
    }

*/

// ---------------------------------------------------------------------------------------------------------


// to print 10 9 8 7 6 5 4 3 2 1
 /*
for(int i=10; i>=1; i=i-1)
{
    cout << i << endl;
}
*/

// ---------------------------------------------------------------------------------------------------------

// print 1 4 7 10 ----------100;
/*
1st approach :
for(int i=1; i<=100; i++)
{
    cout << i <<endl;
    i = i+2;
}

 2nd approach :
for(int i=1; i<=100; i=i+3)
{
    cout << i <<endl;
  
}
*/
// ---------------------------------------------------------------------------------------------------------
// print table of n;
/*
int num;
cout << "enter the value of num: \n";
cin >> num;
for(int i=1; i<=10; i++)
{
    cout << num <<" X " << i<< " = " << num*i <<endl;
}
*/

// ---------------------------------------------------------------------------------------------------------


// calculate the power of the given number taking number from user as input and power as input.
/*
int num, n, pow;

cin >> pow;
cin >> n;
num = n;
for(int i=1; i<pow; i++)
{
    num = num*n;
    
}
cout << num;

*/


// ---------------------------------------------------------------------------------------------------------
// calculate the sum of n-natural number.

/*

int sum, n;
cout << "Enter the value of n: \n";
cin >> n;
sum = 0;
for(int i=1; i<=n; i++)
{
    sum = sum + i;
}
 cout << sum;

*/



// finding factorial.

/*

int fac=1, n;

cout << "enter the value of n:\n";
cin >> n;

for(int i=1; i<=n; i++)
{
    fac = fac*i;
}
cout << fac;




*/
//  check whether any number is prime or not---------------------------------------------------------------------------------------------------------
/*

int n, i;
cout << "enter the num :\n";
cin >> n;

if(n<2)
{
    cout << "not a prime";
    return 0;
}
else
{
   for(i=2;i<n;i++) 
   {
    if(n%i==0)
    {
        cout << "not a prime";
    }
   }

   cout << "prime";
   return 0;
}



*/


// fibonacci number ---------------------------------------------------------------------------------------------------------
//  int i , n, num1=0, num2=1, nxtTerm;

//  cout << "Enter Fibonacci Size\n";
//  cin >> n;

//  for(i=1; i<=n; ++i)
//  {
//     cout << num1 << " ";
//     nxtTerm = num1 + num2;
//     num1 = num2;
//     num2 = nxtTerm;


int n, curr, prev=1, last=0;
cin >> n;
for(int i = 3; i<=n; i++)
{
    curr = prev + last;
    last = prev;
    prev = curr;
}
cout << curr;
  }

