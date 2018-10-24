/*Connor Walsh
This function takes two arrays and will return true if they are equialent
by shifting the elements in the array
*/

bool equalarrays(int a[], int b[], int n){
    int i = 0;
    int j = 0;
    int count = 0;
    bool breakloop = true;
    bool eq = true;
    while(count < n && breakloop){
        if(a[i] == b[j]){
            count = 0;
            while(count < n && breakloop){
                i++;
                j++;
                if(a[i] == b[j]){
                    i++;
                    j++;
                }
                else{
                  eq = false;
                  breakloop = false;
                }
            }
        }
        else{
            if(count == n -1)
                eq = false;
            j++;
            count++;
        }

    }
    return eq;
}
