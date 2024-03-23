#include <stdio.h>
#include <stdlib.h>
//void rout-table();
int d[10][10],via[10][10];
int i,j,k,l,m,n,g[10][10],temp[10][10],ch,cost;
int main() {
system("clear");
printf("Enter the Value of Number of Nodes:\n");
scanf("%d",&n);
//rout-table();
printf("Enter the Cost Matrix:\n ");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
scanf("%d",&g[i][j]);
if(g[i][j]!=999)
d[i][j]=1;				
}	
}
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{
temp[i][j]=g[i][j];
via[i][j]=i;
}
while(1){
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(	d[i][j])
for(k=0;k<n;k++)
if(g[i][j]+g[j][k]<g[i][k]);
{
g[i][k]=g[i][j]+g[j][k]	;
via[i][k]=j;
}
for(i=0;i<n;i++){
printf("Table For Router %c\n",i+97);
for(j=0;j<n;j++)
printf("%c::%d via %c\n",j+97,g[i][j],via[i][j]+97);
}
break;			
}
}
