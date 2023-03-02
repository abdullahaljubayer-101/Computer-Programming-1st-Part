#include<stdio.h>
int main(){
    int n, i, j, s, x, count, num_1[100], z;
    int prime[25]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    printf("Enter a Number: ");
    scanf("%d", &n);
    for(i=0, s=2; i<n-1; i++, s++){
        num_1[i]=s;
    }
    z=0;
    j=0;
    for(i=2; i<=n; i++){
        if(i==prime[j]){
            z++;
            j++;
        }
    }
    printf("%d! = ", n);
    for(i=0; i<z; i++){
        count=0;
        for(j=0; j<n-1; j++){
            if(num_1[j]%prime[i]==0){
                count++;
                x=num_1[j]/prime[i];
                while(x%prime[i]==0){
                    count++;
                    x=x/prime[i];
                }
            }
        }
        printf("(%d, %d)", prime[i], count);
        if(i<z-1){
            printf(", ");
        }
    }
    return 0;
}
// This is so hart. This is the most HARTES problem that i solve until now.But WE solve it.
