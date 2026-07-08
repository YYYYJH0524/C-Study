#include<stdio.h>

int main(){
    int StartTime = 0;
    int FlowTime = 0;
    //获取开始时间以及流逝时间
    scanf("%d %d", &StartTime, &FlowTime);
    //对开始时间和流逝时间进行处理
    int hour = StartTime / 100;
    int minute = StartTime % 100;
    int EndTime = ((hour * 60 + minute + FlowTime) / 60) * 100 + ((hour * 60 + minute + FlowTime) % 60);
    printf("%d",EndTime);
    return 0;
}