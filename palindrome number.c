#include<stdio.h>
int main(){
    int number,palindrome_number,temp_number,count=0;
    printf("Enter a number: ");
    scanf("%d",&number);
    temp_number=number; // -- the value of temp_number is equal to input number
    while(temp_number%10!= 0){
        palindrome_number=temp_number%10+10*palindrome_number;
        count++;
        temp_number=temp_number/10;
    }
    if(number==palindrome_number){
        printf("The Input number is palindrome number.\n");
    }
    else
        printf("Given Number is not palindrome number.\n");
}
