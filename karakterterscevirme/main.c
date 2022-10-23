#include <stdio.h>
#include <stdlib.h>



void rev(char *pnt);
int main()
{
char arr[100]={};
    printf("Enter the a String=");
    scanf("%s",&arr);
    rev(arr);


    return 0;
}
void rev(char *pnt){
char temp[100]={};
int i=0;
    while(i<strlen(pnt)){
        temp[i]= *(pnt+(strlen(pnt))-i-1);
        i++;
    }
        printf("Reverse of the string which entered by user is = %s",temp);
}
