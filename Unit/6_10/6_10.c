#include<stdio.h>
int main(){
    int t_marks[10]={4,8,10,15,4,20,10,20,4,10}, i, j, c_marks[21];
    for(i=0; i<21; i++){
        c_marks[i]=0;
    }
    for(i=0; i<10; i++){
        c_marks[t_marks[i]]++;
        for(j=0; j<21; j++){
            printf("%d\t", c_marks[j]);
        }
        printf("\n");
    }
    return 0;
}
