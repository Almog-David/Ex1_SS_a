#include <stdio.h>
#include <math.h>
#include <string.h>


int recursive(int num,int reverse){
    if(num==0)
    {
        return reverse;
    }
    reverse=(reverse*10)+(num%10); 
    return recursive(num/10,reverse); 
}

int isPalindrome(int num){
    if(num>0 && num<10)
        return 1;
    int reverse = recursive(num,0);
    if(num!=reverse)
        return 0;
    else
        return 1; 

}

int isArmstrong2 (int num, int power){
    if(num==0){
        return 0;
    }
    return (int) pow(num%10,power) + isArmstrong2 (num/10,power);
}

int isArmstrong (int num){
    if(num>0 && num<10)
    return 1;
    int size = (int)log10((double)num)+1;
    int ans = isArmstrong2(num ,size);
    if(num!=ans){
        return 0; //False
    }
    else{
        return 1; //True
    }

}
