/*3. Print the following pattern using loop.
          *
         **
        ***
       ****
      *****
     ******






*/
#include<Stdio.h>
int main(){

    int row,col,n;
    n=6;
    for(row=1;row<=n;row++){
//printing space
    for(col=1;col<=n-row;col++){
            printf(" ");
        }
//printing star
    for(col=1;col<=row;col++){
            printf("*");
        }
        printf("\n");


    }








}



