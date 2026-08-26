#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char ch;
    char s[100]; //word limit is 100 characters
    char sen[100]; //same here as above
    
    scanf("%c\n",&ch); // takes character
    scanf("%s",s); //takes a word
    scanf("\n"); // this is used here for the below scanf function so that it doesn't mistakingly executes
    scanf("%[^\n]%*c",sen); //takes the sentances
    
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",sen);
    
    return 0;
}
