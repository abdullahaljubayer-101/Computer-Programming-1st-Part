#include<stdio.h>
int main(){
    int n, i, j, ara[100], ara_1[100], min, min_indx;
    printf("How many Number do you want to Enter: ");
    scanf("%d", &n);
    printf("Enter the Numbers: \n");
    for(i=0; i<n; i++){
        scanf("%d", &ara[i]);
    }
    for(i=0; i<n; i++){
        min=1000;
        for(j=0; j<n; j++){
            if(ara[j]<min){
                min=ara[j];
                min_indx=j;
            }
        }
        ara[min_indx]=1000;
        ara_1[i]=min;
    }
    printf("\n\n\n");
    for(i=0; i<n; i++){
        printf("%d\n", ara_1[i]);
    }
    return 0;
}
