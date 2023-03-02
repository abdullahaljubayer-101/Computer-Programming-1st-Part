#include<stdio.h>
int main(){
    //9_1
    char country1[]={'B','a','n','g','l','a','d','e','s','h','\0'};
    printf("%s\n", country1);

    //9_3
    char country2[]={'B','a','n','g','l','\0','a','d','e','s','h','\0'};
    printf("%s\n", country2);


    char country3[]="Bangladesh";
    printf("%s\n", country3);


    char *country4="Bangladesh";
    printf("%s\n", country4);
    return 0;
}
