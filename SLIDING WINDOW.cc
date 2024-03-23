#include <stdio.h>
int main() {
int w,i,f,frames[50];
printf("Enter Window Size:");
scanf("%d",&w);
printf("\nEnter Number of Frames to Transmit:");
scanf("%d",&f);
printf("\nEnter %d Frames:",f);
for(i=1;i<=f;i++)
scanf("%d",&frames[i]);
printf("\n With slinding window protocol the frames will be sent in the following manner (assumming no corruption of frames )\n\n");
printf("After sending %d frames at each stage sender waits for Acknodlegment sent by the receiver\n\n",w);
for(i=1;i<=f;i++){
if(i%w==0)
{
printf("%d\n",frames[i]);
printf("Acknodlegment of Above Frames sent is recieved by sender\n\n ");	
}
else
printf("%d\t",frames[i]);
}
if(i%w!=0)
printf("\nAcknodlegment of Above Frames sent is recieved by sender\n");	
	return 0;
}
