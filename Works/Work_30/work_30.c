#include<stdio.h>
int main(){
    int ara[100], n, i, j=0, k=0, min, min_indx;
    printf("How many Number do you want to Enter: ");
    scanf("%d", &n);
    printf("Enter the Numbers: \n");
    for(i=0; i<n; i++){
        scanf("%d", &ara[i]);
    }
    for(i=0; i<n; i++){
        min=1000;
        for(; j<n; j++){
            if(ara[j]<min){
                min=ara[j];
                min_indx=j;
            }
        }
        j=k+1;
        k++;
        ara[min_indx]=ara[i];
        ara[i]=min;
    }
    printf("\n\n\n");
    for(i=0; i<n; i++){
        printf("%d\n", ara[i]);
    }
    return 0;
}
