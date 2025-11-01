//WAP TO INPUT TIME IN SECONDS AND CONVERT IT TO HOURS:MINUTES:SECONDS FORMAT...

#include<stdio.h>
#include<math.h>
int main ()
{
	int seconds , hours , minutes, TotalSeconds ;
	printf("Enter time in seconds : ");
	scanf("%d", &TotalSeconds);
	
	hours = TotalSeconds/3600 ;
	minutes = (TotalSeconds % 3600) / 60 ;
	seconds = TotalSeconds % 60 ;
	printf("Time in HH:MM:SS format : %02d:%02d:%02d\n", hours , minutes , seconds);
	return 0;
	 
}
