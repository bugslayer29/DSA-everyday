#include<iostream>
using namespace std;
int main(){

    // to print i-square till 6.
   
    for (int i = 1; i <= 6; i++)
    {
        cout << " " << i*i << endl;
    }
    // ----------------------------------------------------------------

    // to print first n-natural number.

    int n;
    cin >> n;

    for(int count = 1; count <=n; count = count + 1)
    {
        cout << count << endl;
    }

    // ----------------------------------------------------------------

    // print all even number between 1 to n;

    int n;
    cout << "Enter the value of n: \n";
    cin >> n;

    for(int count = 1; count <= n; count = count + 1)
    {
       if(count%2==0)
       {
        cout << count << endl;
       }
        
    }


return 0;
}