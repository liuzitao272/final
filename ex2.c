#include<stdio.h>
#include<string.h>
void reverse(char s[],int i, int j){
    int a;
    int l;
    l= j-(i + 1);
    if(i<l){
        a=s[i];
        s[i]=s[l];
        s[l]=a;
        reverse(s,++i,j);
    }
}
int main(){
    char s;
    char t[50];
    int i = 0;
    int k = 0;
    while((s = getchar()) != '\n'){
        t[i]=s;
        k=++i;
    }
    reverse(t,0,k);
    for(i=0;i<k;i++)
    printf("%c",t[i]);
}