#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int digit,sum=0;
    for (int i=0; i<5; i++){
        digit=n%10;
        sum+=digit;
        n/=10;
    }
    printf("%d", sum);
    return 0;
}
