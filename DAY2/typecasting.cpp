#include<iostream>
using namespace std;
int main(){
    int a = 10;
    char c = 'b';
       a = c; /* value of c assigned to a */
       cout << a << endl;
    //    we get output 98 cuz ascii value of 'b' is 98.
    //    This concept is called typecasting.
return 0;
}