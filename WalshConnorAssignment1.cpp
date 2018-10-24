/*Connor Walsh
Assignment 1
This program finds squares that last two digets are odd
*/
#include <iostream>
using namespace std;

    int main(){
        int i =1;
        int k;
        while(true){
          k = i * i;
          if((k % 10) % 2 == 0 && ((k %10) % 10) %2 == 0)
              cout << k << '\n';
          i++;
        }
        return 0;

    }
