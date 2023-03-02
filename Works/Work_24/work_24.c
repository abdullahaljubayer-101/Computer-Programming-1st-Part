#include<stdio.h>
int main(){
    int num_table[5][5], row, col, sum=0;
    printf("Enter the element of the Arrey:\n");
    for(row=0; row<5; row++){
        for(col=0; col<5; col++){
            scanf("%d", &num_table[row][col]);
        }
    }
    for(col=0; col<5; col++){
        for(row=0; row<5; row++){
            sum=sum+num_table[row][col];
        }
        printf("Sum of row %d: %d\n", col+1, sum);
        sum=0;
    }
    return 0;
}

