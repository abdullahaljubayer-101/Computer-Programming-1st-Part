#include<stdio.h>
int main(){
    int i, j, x, y;
    char n;
    char name[100];
    printf("Enter Your Fvrgt Letter or Number: ");
    scanf("%c", &n);
    printf("Enter Your Name: ");
    scanf("%s", &name);
    printf("\n\n");
    //Line-1
    for(i=0; i<6; i++){
        printf(" ");
    }
    for(i=0; i<3; i++){
        printf("%c", n);
    }
    printf("\n");
    //Line-2
    for(i=0; i<5; i++){
        printf(" ");
    }
    for(i=0; i<5; i++){
        printf("%c", n);
    }
    printf("\n");
    //Line-3
    for(i=0; i<6; i++){
        printf(" ");
    }
    for(i=0; i<3; i++){
        printf("%c", n);
    }
    printf("\n");
    //Line-4
    for(i=0; i<3; i++){
        printf(" ");
    }
    for(i=0; i<9; i++){
        printf("%c", n);
    }
    printf("\n");
    //Line-5
    for(i=0; i<15; i++){
        printf("%c", n);
    }
    printf("\n");
    //Line-6,7,8
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            printf("%c", n);
        }
        for(j=0; j<1; j++){
            printf(" ");
        }
        for(j=0; j<9; j++){
            printf("%c", n);
        }
        for(j=0; j<1; j++){
            printf(" ");
        }
        for(j=0; j<2; j++){
            printf("%c", n);
        }
        printf("\n");
    }
    //Line-9
    for(i=0; i<1; i++){
        printf("%c", n);
    }
    for(i=0; i<2; i++){
        printf(" ");
    }
    for(i=0; i<3; i++){
        printf("%c", n);
    }
    for(i=0; i<3; i++){
        printf(" ");
    }
    for(i=0; i<3; i++){
        printf("%c", n);
    }
    for(i=0; i<2; i++){
        printf(" ");
    }
    for(i=0; i<1; i++){
        printf("%c", n);
    }
    printf("\n");
    //Line-10,11
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf(" ");
        }
        for(j=0; j<3; j++){
            printf("%c", n);
        }
        for(j=0; j<3; j++){
            printf(" ");
        }
        for(j=0; j<3; j++){
            printf("%c", n);
        }
        printf("\n");
    }
    //Line-12,13
    x=3;
    y=2;
    for(i=0; i<2; i++){
        for(j=0; j<x; j++){
            printf(" ");
        }
        x--;
        for(j=0; j<y; j++){
            printf("%c", n);
        }
        for(j=0; j<5; j++){
            printf(" ");
        }
        for(j=0; j<y; j++){
            printf("%c", n);
        }
        y++;
        printf("\n");
    }
    printf("\n");
    printf("    %s", name);
    printf("\n");
    return 0;
}
