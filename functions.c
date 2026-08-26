#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

//create a max of two variables function
int max(int k,int j){
    if (k>j){
        return k;
    }
    else{
        return j;
    }
}
//reuse the max function in the max of four function
int max_of_four(int a, int b, int c, int d) {
    int x,y,z;
    x=max(a,b);
    y=max(x,c);
    z=max(y,d);
    return z;
    
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
