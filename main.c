#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include "NumClass.h"
void main()
{

    int first,second,M,m;
    scanf("%d",&first);
    scanf("%d",&second);
    if(first>second){
        M =first;
        m = second;
    }
    else {
        M =second;
        m =first;
    }
      

    printf("The Armstrong numbers are:");
    for(int i=m;i<=M; i++){
        if(isArmstrong(i) == 1){
            printf(" %d" , i);
        }
    }

    printf("\n");
    printf("The Palindromes are:");
    for(int i=m;i<=M; i++){
        if(isPalindrome(i)==1){
             printf(" %d" , i);
        }
    }

    printf("\n");
    printf("The Prime numbers are:");
    for(int i=m;i<=M; i++){
        if(isPrime(i)==1){
             printf(" %d" , i);
        }   
    }

    printf("\n");
    printf("The Strong numbers are:");
    for(int i=m;i<=M; i++){
        if(isStrong(i)==1){
             printf(" %d" , i);
        }
        
    }
    printf("\n");

         

}