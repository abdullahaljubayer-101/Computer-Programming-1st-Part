#include<stdio.h>
int main(){
    int mark[4] [10]={{80,70,92,78,58,83,85,66,99,81},{75,67,55,100,91,84,79,61,90,97},{98,67,75,89,81,83,80,90,88,77},{0,0,0,0,0,0,0,0,0,0}};
    int i;
    for(i=0; i<10; i++){
        mark[3] [i]=mark[0] [i]/4.0 + mark[1] [i]/4.0 + mark[2] [i]/2.0;
        printf("Roll No: %d  Total Marks: %d\n", i+1, mark[3] [i]);
    }
    return 0;
}
