/*Connor Walsh
This program will solve the 8 queens problem
*/
#include <iostream>
using namespace std;
  int main(){
      int b[8][8] = {0}, r, c = 0;
      b[0][0] = 1;
nc:   c++;
      if(c == 8)
          goto print;
      r = -1;
nr:   r++;
      if(r == 8)
          goto bt;
      for(int i = 0; i < c; i++)
          if(b[r][i] == 1)
              goto nr;
      for(int i = 0; i <= r && i <= c; i++)
          if(b[r - i][c - i] == 1)
              goto nr;
      for(int i = 0; (i + r) < 8 && (i - c) < 8; i++)
          if(b[r + i][c - i] == 1)
              goto nr;
      b[r][c] = 1;
      goto nc;
bt:   c--;
      if(c == -1)
          return 0;
      r = 0;
      while(b[r][c] != 1)
          r++;
      b[r][c] = 0;
      goto nr;
print: cout << "\n";
      for(int i = 0; i < 8; i++){
          cout << "\n";
          for(int j = 0; j < 8; j++)
              cout << b[i][j];
      }
      goto bt;

}
