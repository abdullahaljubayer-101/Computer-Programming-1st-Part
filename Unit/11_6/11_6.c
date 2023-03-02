#include<stdio.h>
int main(){
    int num_table[5][5]={{1,2,3,4,5},{10,20,30,40,50},{100,200,300,400,500},{1000,2000,3000,4000,5000},{10000,20000,30000,40000,50000}};
    int row, col, num_table_1[5][5];
    printf("Content of First Array.\n");
    for(row=0; row<5; row++){
        for(col=0; col<5; col++){
            printf("%d  ", num_table[row][col]);
        }
        printf("\n");
    }
    printf("\n\n");
    for(row=0; row<5; row++){
        for(col=0; col<5; col++){
            num_table_1[col][row]=num_table[row][col];
        }
    }
    printf("Content of Second Array.\n");
    for(row=0; row<5; row++){
        for(col=0; col<5; col++){
            printf("%d  ", num_table_1[row][col]);
        }
        printf("\n");
    }
    return 0;
}

//we did it.
