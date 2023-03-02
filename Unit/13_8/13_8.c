#include<stdio.h>
int main(){
    int x, y;
    char ch;
    printf("Enter The Initial Position:\n");
    scanf("%d %d", &x, &y);
    printf("Enter Commend:\n");
    while(1){
        scanf("%c", &ch);
        if(ch=='S'){
            break;
        }
        else if(ch=='U'){
            x--;
        }
        else if(ch=='D'){
            x++;
        }
        else if(ch=='R'){
            y++;
        }
        else if(ch=='L'){
            y--;
        }
    }
    printf("Final Position is: %d,%d\n", x,y);
    return 0;
}
