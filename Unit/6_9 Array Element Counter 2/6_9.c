#include<stdio.h>
int main(){
    int t_marks[10]={4,8,10,15,4,20,10,20,4,10}, i, c_marks[21];
    for(i=0; i<21; i++){
        c_marks[i]=0;
    }
    for(i=0; i<10; i++){
        c_marks[t_marks[i]]++;
    }
    for(i=1; i<=20; i++){
        printf("Marks: %d Count: %d\n", i, c_marks[i]);
    }
    return 0;
}
