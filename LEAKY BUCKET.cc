#include <stdio.h>
#include <stdlib.h>
#define MIN(x,y)(x>y)?y:x
int main() {
int orate,drop=0,cap,x,count=0,inp[10]={0},i=0,nsec,ch;
printf("\n Enter Bucket Size :");
scanf("%d,&cap");
printf("\n Enter Output rate :");
scanf("%d,&orate");
do
{
printf("\n Enter Number of Second %d:",i+1);
scanf("%d",&inp[i]);
i++;
printf("\n Enter 1 to Continue or 0 to Quit......:");
scanf("%d",&ch);
}
while(ch);
nsec=i;
printf("\n Second \t Recived \t Sent \t Dropped \t Remained \n");
for(i=0;count|| i<nsec;i++)
{
printf("%d",i+1);
printf("\t%d\t",inp[i]);
printf("\t%d\t",MIN((inp[i]+count),orate));
if((x=inp[i]+count-orate)>0)
{
if(x>cap){
count=cap;
drop=x-cap;	
}
else
{
count=x;
drop=0;
}
}
else{
drop=0;
count=0;
}
printf("\t%d \t%d\n",drop,count);
}
return 0;	
}
