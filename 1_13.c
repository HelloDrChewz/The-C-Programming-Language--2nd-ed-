/* 1-13 
Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.*/
 
 
#include <stdio.h>
main()
{
	#define IN 1
	#define OUT 0
	int c, state, i, j, wl, max;
	int cts[50];
	
	printf("This program will draw a histogram of word lengths in a given string (up to 50 characters). Please remember to press CTRL+D when you're done.\n");
	state=OUT;
	for (i=0; i<50;++i)
		cts[i]=0;
	wl=0;
	while((c=getchar())!=EOF)
	{	if (c==' ' || c=='\n' || c=='\t')
		{	if (state==IN)
			{	++cts[wl-1];
				wl=0;
				state=OUT;
			}
		}
		else
		{	state=IN;
			++wl;
		}
	}
	if (state==IN)
		++cts[wl-1];
	printf("\n");
	for (i=0;i<50;++i)
	{	if (cts[i]>0)
		{	printf("\nWord length, %2d\t", (i+1));
			for (j=0; j<cts[i]; ++j)
				printf("-");
			if (cts[i]>max)
				max=cts[i];
		}
	}
	printf("\nEnd of Horizontal Histogram\n\nVertical Histogram:\n");
	for (i=0; i<max; ++i)
	{	for (j=0; j<50; ++j)
		{	if (cts[j]>=(max-i))
				printf("\t|");
			else if ((cts[j]<(max-i)) && (cts[j]>0))
				printf("\t");
		}
		printf("\n");
	}
	for (i=0;i<50;++i)
		if (cts[i]>0)
			printf("\t%d", i+1);
	printf("\n End of Vertical Histogram\n");
}
