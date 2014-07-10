/* 1-14 Write a program to print a histogram of the frequencies of different characters in its input. */

#include <stdio.h>
main()
{
	int c, i, j, chars[95];
	for (i=0;i<95;++i)
		chars[i]=0;
	while ((c=getchar())!=EOF)
		++chars[c-32];
	for (i=0;i<95;++i)
	{	if (chars[i]!=0)
		{	printf("\n%c\t",i+32);
			for(j=0;j<chars[i];++j)
			{	printf("-");
			}
		}
	}
	printf("\n");
}
