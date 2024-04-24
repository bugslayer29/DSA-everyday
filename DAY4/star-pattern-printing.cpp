#include<iostream>
using namespace std;
int main(){

    // for(int i =1; i<=5; i++)
    // {
    //     for(int j=1; j<=5; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }



// for(int i=1; i<=5; i++)
// {
//     for(int j=1; j<=4; j++)
//     {
//         cout << " 10 ";
//     }
//     cout << endl;
// }


// for(int i=1; i<=5; i++)
// {
//     for(int j=1; j<=5; j++)
//     {
//         cout << i << " ";
//     }
//     cout << endl;
// }


// for(int i=1; i<=5; i++)
// {
//     for(int j=1; j<=5; j++)
//     {
//         cout << j << " ";
//     }
//     cout << endl;
// }


// for(int i=1; i<=5; i++)
// {
//     for(int j=5; j>=1; j--)
//     {
//         cout << j << " ";
//     }
//     cout << endl;
// }


// for(int i=1; i<=5; i++)
// {
//     for(int j=1; j<=5; j++)
//     {
//         cout << j*j << " ";
//     }
//     cout << endl;
// }


// int i, j;
// for(int i=1; i<=5; i++)
// {
//     char name='a' + i-1;
//     for(int j=1; j<=5; j++)
//     {
//         cout << name << " ";
//     }
//     cout << endl;
// }


// int i;
// char j;
// for(i=1; i<=5; i++)
// {
//     for(j='a'; j<='e'; j++)
//     {
//         cout << j << " ";
//     }
//     cout << endl;
// }


int count =1;
for(int i=1; i<=5; i++)
{
    for(int j=1; j<=5; j++)
    {
        cout << count << " ";
        count = count + 1;
    }
    cout << endl;
}

return 0;
}