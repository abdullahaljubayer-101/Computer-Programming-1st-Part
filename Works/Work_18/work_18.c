#include<stdio.h>
void find_num(int ara[10], int num);
int main(){
    int ara[10]={2,5,7,2,7,10,40,85,97,100}, num=97;
    find_num(ara, num);
    return 0;
}

void find_num(int ara[10], int num){
    int low_indx=0, high_indx=9, mid_indx;
    while(low_indx<=high_indx){
        mid_indx=(low_indx+high_indx)/2;
        if(num==ara[mid_indx]){
            break;
        }
        if(num<mid_indx){
            high_indx=mid_indx-1;
        }
        else{
            low_indx=mid_indx+1;
        }
    }
    if(low_indx>high_indx){
        printf("%d is not found in the array.\n", num);
    }
    else{
        printf("%d is found in %dth element of the array.\n", ara[mid_indx], mid_indx);
    }
    return ;
}

// I wrote this without help.
