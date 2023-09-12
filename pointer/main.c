#include <stdio.h>
#include <stdlib.h>

// concept of pointer

int  main(){
    // (int*)  is used typecast p into integer pointer and &a+1 takes the entire array and increases by 1
    int x[] = {1,2,3,4,5,6,7,8};
    int *p = (int*)(&x+1);
    printf("%d\n",*(p-1));

    // pointer can increase or decrease but the value inside the particular pointer can not change i.e *p++ is erroneous
    int a[] = {5,6,7,8};
    int const *p1 = a;
    p1++;
    printf("%d\n",*p1);

    // pointer value can change but the pointer can not increase or decrease i.e p++ is erroneous
    int b=2;
    int *const p2 = &b;
    ++(*p2);
    printf("%d",b);
    return 0;
}
