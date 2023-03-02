#include<stdio.h>
int main(){
    int grid[8][8], n, i, j, x, y;
    char ch;
    for(i=0; i<8; i++){
        for(j=0; j<8; j++){
            grid[i][j]=1;
        }
    }
    printf("Enter How Many Cell Do You Want to Block: ");
    scanf("%d", &n);
    printf("Now Enter the Cell:\n");
    for(i=0; i<n; i++){
        scanf("%d %d", &x, &y);
        grid[x][y]=0;
    }
    printf("Enter The Initial Position:\n");
    scanf("%d %d", &x, &y);
    printf("Enter Commend:\n");
    while(1){
        scanf("%c", &ch);
        if(ch=='S'){
            break;
        }
        else if(ch=='U' && grid[x-1][y]==1){
            x--;
        }
        else if(ch=='D' && grid[x+1][y]==1){
            x++;
        }
        else if(ch=='R' && grid[x][y+1]==1){
            y++;
        }
        else if(ch=='L' && grid[x][y-1]==1){
            y--;
        }
    }
    printf("Final Position is: %d,%d\n", x,y);
    return 0;
}
