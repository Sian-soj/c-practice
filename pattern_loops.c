#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    for (int row = 0; row < 2*n-1; row++){
        for (int col = 0; col < 2*n-1; col++){
            int row_dist,col_dist;
            row_dist = abs(row - (n-1));
            col_dist = abs(col - (n-1));
            int value = ((row_dist > col_dist) ? row_dist : col_dist)+1;
            printf("%d ",value);
        }
        printf("\n");
    }
    return 0;
}
