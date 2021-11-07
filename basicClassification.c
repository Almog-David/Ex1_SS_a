
#include <stdio.h>

int calculateFactorial(int num){
    int calc = 1;
    for(int i=1; i<=num;i++){
        calc=calc*i;
    }
    return calc;
}

int isStrong(int num)
{
    int number = num;
    int sum=0;
    while (number>0)
{
        sum = sum + calculateFactorial(number%10);
        number = number /10;
}
    if (sum==num)
{
        return 1; // True
}
    else
        return 0; //False

}


int isPrime(int num)
{
    if( num==1)
        return 1; 
    else if (num>2 && num%2==0)
    {
       return 0;
    } 
    for(int i=2; i<num; i++){
        if (num%i==0)
    {
            return 0; // False
    }
    
}
    return 1; // True
}