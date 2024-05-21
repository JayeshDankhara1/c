#include<stdio.h>
void main()
{
    char a;
    printf("Enter The One cher :- ");
    scanf("%c",&a);
    if(a=='a'||a=='A'||a=='o'||a=='O'||a=='e'||a=='E'||a=='i'||a=='I'||a=='u'||a=='U')
    {
       printf("\nVowel");
    }
    else
    {
        printf("\nConsonant");
    }
    
}