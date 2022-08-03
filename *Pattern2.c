/*4. Print the following pattern using loop.

          *
        ***
      *****
    *******
      *****
        ***
          *
*/
#include<Stdio.h>
int main(){

    int row,col,n;
    n=5;
    for(row=1;row<=n;row++){
//printing space
    for(col=1;col<=n-row;col++){
            printf(" ");
        }
//printing star
    for(col=1;col<=2*row-1;col++){
            printf("*");
        }
        printf("\n");


    }
for(row=n-1;row>=1;row--){
//space printing
    for(col=1;col<=n-row;col++){
            printf(" ");
        }
//star
    for(col=1;col<=2*row-1;col++){
            printf("*");
        }
        printf("\n");


    }







}




