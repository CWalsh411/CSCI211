/*
Connor Walsh
This program solve sthe 8 queens in cross problem
*/
#include <iostream>
using namespace std;

int main(){
     int cross[8] = {0};
     int trav = 0;
     cross[trav] = 1;
nc:  trav++;
     if(trav == 8)
          goto print;
     cross[trav] = 0;
next: cross[trav]++;
     if(cross[trav] == 9)
          goto backtrack;
     for(int i = 0; i < trav; i++){
          if(cross[trav] == cross[i])
               goto next;
     }
//     cout << "here" << endl;
     switch(trav){
          case 1:
               if((cross[0] + 1) == cross[trav] || (cross[0] - 1) == cross[trav])
                    goto next;
               break;
          case 2:
               if((cross[1] + 1) == cross[trav] || (cross[1] - 1) == cross[trav])
                    goto next;
               break;
          case 3:
               if((cross[0] + 1) == cross[trav] || (cross[0] - 1) == cross[trav]||
               (cross[1] + 1) == cross[trav] || (cross[1] - 1) == cross[trav] ||
               (cross[2] + 1) == cross[trav] || (cross[2] - 1) == cross[trav])
                    goto next;
               break;
          case 4:
               if((cross[1] + 1) == cross[trav] || (cross[1] - 1) == cross[trav] ||
               (cross[2] + 1) == cross[trav] || (cross[2] - 1) == cross[trav] ||
               (cross[3] + 1) == cross[trav] || (cross[3] - 1) == cross[trav])
                    goto next;
               break;
          case 5:
               if((cross[0] + 1) == cross[trav] || (cross[0] - 1) == cross[trav] ||
               (cross[3] + 1) == cross[trav] || (cross[3] - 1) == cross[trav] ||
               (cross[4] + 1) == cross[trav] || (cross[4] - 1) == cross[trav])
                    goto next;
               break;
          case 6:
               if((cross[3] + 1) == cross[trav] || (cross[3] - 1) == cross[trav] ||
               (cross[4] + 1) == cross[trav] || (cross[4] - 1) == cross[trav] ||
               (cross[5] + 1) == cross[trav] || (cross[5] - 1) == cross[trav])
                    goto next;
               break;
          case 7:
               if((cross[2] + 1) == cross[trav] || (cross[2] - 1) == cross[trav] ||
               (cross[4] + 1) == cross[trav] || (cross[4] - 1) == cross[trav] ||
               (cross[6] + 1) == cross[trav] || (cross[6] - 1) == cross[trav])
                    goto next;
               break;
     }
     goto nc;
backtrack: trav--;
     if(trav == -1)
          return 0;
     goto next;
print: for(int i = 0; i < 8; i++)
          cout<< cross[i];
     cout<<endl;
    goto backtrack;
    return 0;
}
