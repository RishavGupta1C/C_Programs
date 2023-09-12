#include <stdio.h>

int atoi(char *str){
    int i=0,sign = 1,result=0;
    if(str[0]=='-'){
        sign = -1;
        i++;
    }
    while(str[i]){
        if(!(str[i]-'0' >=0 && str[i] - '0'<=9))
            return -1;
        result = result*10 + str[i] - '0';
        i++;
    }
    return result*sign;
}
int main()
{
    char a[30];
    int number;
    scanf("%s",a);
    number = atoi(a);
    printf("Converted to integer: %d\n",number);
    printf("number-1: %d",number-1);
    return 0;
}
