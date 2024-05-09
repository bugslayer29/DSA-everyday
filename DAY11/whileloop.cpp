
                                                              // syntax of while loop
                                                              intialization;
                                                              while(condition/break)
                                                              {
                                                                  code execution;
                                                                  iteration;
                                                              }


#include<iostream>
using namespace std;
int main(){
    

                                               // 1. Print table of n using while loop.

int n;
cout << "Enter the value of n \n";
cin >> n;
int i = 1;
while(i<=10)
{
    cout << i*n << endl;
    i=i+1;
}

                                                // 2. calculate the factor of the given number
int n;
cout << "enter the value of n : \n";
cin >> n;
int i =1;
while(i<=n)
{
    if(n%i==0)
    {
        cout << i << endl;
    }
    i = i+1;
}

                                                // // claculate all even number between 1 to n;
int n;
cout << "enter the value of n : \n";
cin >> n;
int i =1;
while(i<=n)
{
    if(i%2==0)
    {
        cout << i << endl;
    }
    i = i+1;
}

                                                // claculate all odd number between 1 to n;
int n;
cout << "enter the value of n : \n";
cin >> n;
int i =1;
while(i<=n)
{
    if(i%2!=0)
    {
        cout << i << endl;
    }
    i = i+1;
}

return 0;
}