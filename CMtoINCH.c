#include <stdio.h>

int main(){
    double CM = 0;
    int foot = 0; //英尺
    int inch = 0;//英寸
    printf("输入一个正整数（单位：厘米）：");
    scanf("%lf", &CM);
    //将cm转换成m
    double meter = CM / 100.0;
    //计算出英尺
    foot = meter / 0.3048;
    //计算出英寸
    inch = ((meter / 0.3048) - foot) * 12;
    //输出英尺英寸
    printf("%d %d",foot,inch);
    return 0;
}