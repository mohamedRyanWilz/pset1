#include<cs50.h>
#include<stdio.h>


int main(void)
{
int n;
do{
printf("please enter number between 1 and 23\n");
n=GetInt();
}while(n<0 || n>23);

for(int x=0;x<n;x++)
{
for(int m=n-2;m>=x;m--){
printf(" ");
}
for(int y=0;y<=x+1;y++)
{
printf("#");
}
printf("\n");
}

}
