/*Connor Walsh

*/
#include <iostream>
using namespace std;
void newcol(int*, int);
void newrow(int*, int);
int backtrack(int*, int);
void print(int*, int);

int main(){
  int b[8] = {8}, c = -1;
  newcol(b, c);
  return 0;
}
void newcol(int* b, int c){
  c++;
  cout << c << endl;
  if(c == 8)
    print(b, c);
  b[c] = -1;
  newrow(b, c);
}
void newrow(int* b, int c){
  cout << "here" << endl;
  b[c]++;
  if(b[c] == 8)
    backtrack(b, c);
  else{
    for(int i = 0; i < (c + 1); i++){
        cout << i << endl;
        if(b[c] == b[i] || b[c - i] == (b[c] - i) || b[c - i] == (b[c] + i))
          newrow(b, c);
        newcol(b, c);
    }
  }
}

int backtrack(int* b, int c){
  c--;
  cout << "here0" << endl;
  if(c == -1)
    return 0;
  newrow(b,c);
}
void print(int* b, int c){
  cout << "\n";
  for(int i = 0; i < 8; i++){
    cout << "\n";
    for(int j = 0; j < 8; j++){
      if(b[j] == i)
        cout << 1;
      else
        cout << 0;
      }
    }
  backtrack(b, c);
}
