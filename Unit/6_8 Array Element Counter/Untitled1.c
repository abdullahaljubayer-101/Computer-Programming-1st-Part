#include<stdio.h>
int main(){
    int ara[100], n, i, j, count;
    printf("Enter Array Number:\n");
    scanf("%d", &n);
    printf("Enter Array Element (1 to 50):\n");
    for(i=0; i<n; i++){
        scanf("%d", &ara[i]);
    }
    for(i=1; i<=50; i++){
        count=0;
        for(j=0; j<n; j++){
            if(i==ara[j]) count++;
        }
        if(count!=0) printf("%d count is: %d\n", i, count); //we do this.
    }
    return 0;
}
