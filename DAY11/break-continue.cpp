// The break statement can also be used to jump out of a loop.

// This example jumps out of the loop when i is equal to 4:

// Example
// for (int i = 0; i < 10; i++) {
//   if (i == 4) {
//     break;
//   }
//   cout << i << "\n";
// }


// C++ Continue
// The continue statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.

// This example skips the value of 4:

// Example
// for (int i = 0; i < 10; i++) {
//   if (i == 4) {
//     continue;
//   }
//   cout << i << "\n";
// }

#include<iostream>
using namespace std;
int main(){
                                              // print 1 to 10 and if 4 comes, stop.

  // int i = 1;
  // while(i<=10)
  // {
  //   if(i==4)
  //   {
  //     break;
      
    
  //   }
  //   cout << i <<endl;
  //     i++;
  // }


                                                //  print 1 to 10 and check if any number between 1 to 10 divided by 4 skip that number and print rest all of them.

  int i;
  for(i=1; i<=10; i++)
  {
    if(i%4==0)
    {
      continue;
    }
    cout << i <<endl;
    i++;
  }
return 0;
}