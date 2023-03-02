#include<stdio.h>
int main(){
    int namta[10] [10], row, col, even=0, odd=0, sum=0;
    for(row=0; row<10; row++){
        for(col=0; col<10; col++){
            namta[row] [col]= (row+1)*(col+1);
        }
    }
    for(row=0; row<10; row++){
        for(col=0; col<10; col++){
            sum=sum+namta[row] [col];
            if(namta[row] [col]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
    }
    printf("Total Sum: %d\n", sum);
    printf("Total Even Number: %d\n", even);
    printf("Total Odd Number: %d\n", odd);
    return 0;
}
