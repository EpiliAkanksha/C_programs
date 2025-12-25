#include<stdio.h>

int print_series(int);

int main() {
    int x,n,i;
    printf("Enter x and n: ");
    scanf("%d %d", &x,&n);

    printf("\n series: 1 + %d ",x);
    for (i = 2; i <= n; i++) {
        	
            printf(" + %d ^ %d  / %d! ",x,i,i );
    }
    return 0;
}


// 
