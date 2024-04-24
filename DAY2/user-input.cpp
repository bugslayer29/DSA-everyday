#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout << "Enter the value of a :\n"; /* this will be displyed to entr the value of a  & we use (\n) to go to the next line.*/

    cin >> a; /* (>>) this is extraction operator to take user-input.*/

    cout << "Enter the value of b :\n";
    cin >> b;

    cout << "sum is : " <<  a+b << endl;
    // ENDL : means End of the line, so we use it to move cursor to the next line.
return 0;
}