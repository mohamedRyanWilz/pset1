#include<cs50.h>
#include<stdio.h>
#include<math.h>


int main (void)
{
float n;
do
{
printf("hai! How much change is owed?");
n=GetFloat();
}while( n<=0.0);
int i=0;
n*=100;
int y=(int)round (n);
while(y>0){
while(y>=25){
y=y-25;
i++;
}
while(y>=10&&y<25){
y=y-10;
i++;
}
while(y>=5&&y<10){
y=y-5;
i++;
}
while(y>=1&&y<5){
y=y-1;
i++;
}

}
printf("%d\n",i);
}
