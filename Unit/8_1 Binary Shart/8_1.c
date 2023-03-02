#include<stdio.h>
int main(){
    int ara[10]={5,16,29,32,46,51,68,79,91,100}, num=68, low_indx=0, high_indx=9, mid_indx;
    while(low_indx<=high_indx){
        mid_indx=(low_indx+high_indx)/2;
        if(num==ara[mid_indx]){
            break;
        }
        if(num<ara[mid_indx]){
            high_indx=mid_indx-1;
        }
        else{
            low_indx=mid_indx+1;
        }
    }
    if(low_indx>high_indx){
        printf("%d is not in the Array.\n", num);
    }
    else{
        printf("%d is found in the Array. It is the %d th element of the Array.\n", ara[mid_indx], mid_indx);
    }
    return 0;
}
