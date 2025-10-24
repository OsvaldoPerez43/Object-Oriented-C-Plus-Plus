/***
 * In this lab we had to recreate the control flow diagram chart
 * and create it in C++. In this code we used a while loop, if statements
 * and one else if statement
 ***/

#include <iostream>
using namespace std;



int main(){
    int x = 0;
    int y = 5;


    while (x <y){
        printf("%i\n",x);
        x = x + 3;
    }
    if (x % 2 == 0)
    {
        printf("x is even\n");
    }else if (x % 2 != 0)
    {
        printf("x is odd");
    }

    
    return 0;
}