#include<stdio.h>
#include<string.h>
int main(){
    int n=0;
    char str1[12]="Lift";
    char str2[55]="off";
    char str3[20];
    strcat(str1,str2);
    printf("%s\n",str1);
    int j=0;
    while (str1[j]!='\0')
    {
        n++;
        j++;
    }
    for(int i=0;i<n;i++){
        str3[i]=str1[n-i-1];
    }
    str3[n]='\0';
    puts(str3);
    return 0;
}