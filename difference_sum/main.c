// Difference of the sum of numbers in odd places and even places absolute and non-absolute.
#include <stdio.h>
#include <stdlib.h>


// 1. taking input as a string of numbers not more than 100
int main()
{
    char a[100];
    gets(a);
    int even=0,odd=0;
    // scanf("%s",a);
    // fgets(char *str,int size, FILE *stream) eg: fgets(a,MAXLIMIT,stdin)
    for(int i=0;a[i]!='\0';i++){
        if(i%2==0){
            even+=((int)a[i] - (int)'0');
        }
        else{
            odd+=((int)a[i] - (int)'0');
        }
    }
    int res = abs(even-odd);
    printf("%d",res);
    return 0;
}
/*
// 2. taking input as a big integer
int main(){
    int num,even=0, odd=0;
    scanf("%d",&num);
    int n=num,c=0;
    while(n>0){
        n/=10;
        c++;
        //printf("%d\n",n);
    }
    //printf("%d",c);
    for(int i=c;i>=1;i--){
        if(i%2==0){
            even+=num%10;
        }
        else{
            odd+=num%10;
        }
        num/=10;
    }
    int res = abs(even-odd);
    //if(res<0)
      //  printf("%d",-res);
    //else
        printf("%d",res);
    return 0;
}
*/
