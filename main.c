//
//  main.c
//  a,b,c
//
//  Created by qiuyu143 on 2017/6/13.
//  Copyright © 2017年 qiuyu143. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    FILE *fr;
    FILE *fw;
    fr=fopen("//Userd//20161104606//Desktop//sum//input.txt","r+");
    fw=fopen("//Userd//20161104606//Desktop//sum//output.txt","w");
    int a,b,c;
    fscanf(fr,"%d%d",&a,&b);
    c=a+b;
    printf("%d+%d=%d\n",a,b,c);
    fprintf(fw,"%d+%d=%d\n",a,b,c);
    return 0;
}
