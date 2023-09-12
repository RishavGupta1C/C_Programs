#include <stdio.h>
#include <string.h>


// prints the position in original string at which the subString starts. Also ignores spaces in str[].
int main()
{

  char str[] = "String1 subString1 Strinstrnd subStr ing1subString";
  char sub[] = "subString";

  char *p1, *p2, *p3;
  int i=0,j=0,flag=0;

  p1 = str;
  p2 = sub;

  for(i = 0; i<strlen(str); i++)
  {
    if(*p1 == *p2)
      {
          p3 = p1;
          for(j = 0;j<strlen(sub);j++)
          {
            if(*p3 == ' ')  // I thought this if block. I am a genius :)
            {
                p3++;
                continue;
            }
            if(*p3 == *p2)
            {
              p3++;p2++;
            }
            else
              break;
          }
          p2 = sub;
          if(j == strlen(sub))
          {
            flag = 1;
            printf("\nSubstring found at index : %d\n",i);
          }
      }
    p1++;
  }
  if(flag==0)
  {
       printf("Substring NOT found");
  }
return (0);
}
/*
// checks and prints the subString
int main(void)
{
    char mainstring[]="String1 subString1 Strinstrnd subStr ing1subString";
    char substring[20], *ret;
    int i=0;
    puts("enter the sub string to find");
    fgets(substring, sizeof(substring), stdin);
    substring[strlen(substring)-1]='\0';
    ret=strstr(mainstring,substring);
    if(strcmp((ret=strstr(mainstring,substring)),substring))
    {
        printf("substring is present\t");
    }
    printf("and the sub string is:::");

    for(i=0;i<strlen(substring);i++)
    {
            printf("%c",*(ret+i));

    }
    puts("\n");
    return 0;
}

// checks and prints the subString
int main(void)
{

    char mainstring[]="String1 subString1 Strinstrnd subStr ing1subString";
    char substring[20];
    puts("enter the sub stirng to find");
    fgets(substring, sizeof(substring), stdin);
    substring[strlen(substring)-1]='\0';
    if (strstr(mainstring,substring))
    {
            printf("substring is present\t");
    }
    printf("and the sub string is:::");
    printf("%s\n",substring);
   return 0;
}*/


/*
WORKING OF strstr()

const char * strstr ( const char * str1, const char * str2 );
checks if str2 is part of str1


Return Value
A pointer to the first occurrence in str1 of the entire sequence of characters specified in str2,
or a null pointer if the sequence is not present in str1.


strstr example

#include <stdio.h>
#include <string.h>

int main ()
{
  char str[] ="This is a simple string";
  char * pch;
  pch = strstr (str,"simple");
  if (pch != NULL)
    strncpy (pch,"sample",6);
  puts (str);
  return 0;
}

Output
This is a sample string
*/
