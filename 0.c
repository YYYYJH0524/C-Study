#include<stdio.h>

int main()
{
    //const常量标识符
    const int AMOUNT = 100;
    int price = 0;
    int change = 0;
    printf("请输入金额");
    scanf("%d",&price);
    change = AMOUNT - price;
    printf("找零%d元",change);
    return 0;
}