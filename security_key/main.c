// WAP to print an integer representing the security key for the given data
#include <stdio.h>
#include <string.h>

int main()
{
    char a[50];
    int i, j, len;

    scanf("%s",a);  // '&' is not used for character array
    len = strlen(a);

    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(a[i]==a[j])
            {
                 printf("%c",a[i]);
                 break;
            }
         }
    }
    return 0;
}
/*
Input

578378923

Output

783

Explanation

The repeated digits in the data are 7, 8 and 3. So, the security key is 783
*/
