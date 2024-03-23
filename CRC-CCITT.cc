#include <stdio.h>
int a[100],b[100],i,j,len,k,count=0;
int gp[] ={1,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1};
int main() {
void div();
printf("\n Enter the Length of Data frame:"); 
scanf("%d",&len);
printf("\n Enter The Message:");
for(i=0;i<len;i++)
scanf("%d",&a[i]);
for(i=0;i<16;i++)
a[len++]=0;
for(i=0;i<len;i++)
b[i]=a[i];
k=len-16;
div();
for(i=0;i<len;i++)
b[i]=b[i]^a[i];
printf("\n Data to be transmitted : ");
for(i=0;i<len;i++)
printf("%2d",b[i]);
printf("\n Enter the Received Data:");
for(i=0;i<len;i++)
scanf("%d",&a[i]);
div();
for(i=0;i<len;i++)
if(a[i]!=0)
{
printf("\n ERROR in Received Data");
return 0;	
}
printf("\n Data Received is ERROR FREE");						
}
void div()
{
for(i=0;i<=k;i++)
{
if(a[i]==gp[0])
{
for(j=i;j<17+i;j++)
a[j]=a[j]^gp[count++];
}
count=0;
}
}
