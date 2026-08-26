#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s); // takes a sentance from the user which includes whitespaces.
  	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    printf("Hello, World!\n");
    printf("%s\n",s); // outputs the sentance written by the user
    return 0;
}
