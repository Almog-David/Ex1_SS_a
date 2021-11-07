#include <stdio.h>

int calculatePower (int num, int power){
    int ans = num;
    for (int i = 1; i <power; i++){
        ans = ans * num;
    }
    return ans;
}

int isPalindrome(int num){
    int number=num;
    int counter=0;
    while(number>0){
        number = number/10;
        counter++;
}
    number = num;
    for(int i=0; i<counter/2; i++){
        if(number%10 != number/calculatePower(10,counter-1-i))
        return 0; // False
        number=number/10;
    }
    return 1; //True
}


int isArmstrong (int num){
    int number = num;
    int power=0;
    while (number>0){
        number=number/10;
        power++;
    }
    number = num;
    int sum = 0;
    while (number>0){
        sum = sum + calculatePower(number%10,power);
        number = number/10;
    }
    if(sum==num)
        return 1; //True
    else
        return 0; //False

}


// void main(){
//     int a = 406;
//     int b = isArmstrong(a);
//     printf("%d", b);
//     printf("\n");

// }