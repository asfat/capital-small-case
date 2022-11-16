#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
        printf("Capital Letter");
    else if(ch>='a' && ch<='z')
        printf("Small Letter");
    else
        printf("Not a letter");
    getch();
    return 0;
}
