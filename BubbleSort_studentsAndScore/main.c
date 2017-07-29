//
//  main.c
//  BubbleSort_studentsAndScore
//
//  Created by 王增康 on 16/1/17.
//  Copyright © 2016年 CHW. All rights reserved.
//

#include <stdio.h>

struct student
{
    char name[21];  //姓名
    int score;      //成绩
};//存储学生的姓名和成绩

int main(int argc, const char * argv[]) {
   
    struct student a[100],t;
    int i,j,n;
    printf("请输入学生的人数（<100):");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        printf("请输入学生的姓名和成绩：");
        scanf("%s %d",a[i].name,&a[i].score);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - (i + 1); j++)
        {
            if (a[j].score < a[j + 1].score)
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    
    for (i = 0; i < n; i++)
    {
        printf("a:%s\n",a[i].name);
    }
    
    getchar();getchar();
    
    return 0;
}
