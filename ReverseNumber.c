#include<stdio.h>

int main(){
    int InputNumber = 0;
    scanf("%d",&InputNumber);
    int FirstNum = InputNumber / 100;
    int SecondNum = (InputNumber % 100) / 10;
    int ThirdNum = (InputNumber % 100) % 10 ;
    int ReverseNum = ThirdNum * 100 + SecondNum * 10 + FirstNum;
    printf("%d",ReverseNum);
    return 0;
}