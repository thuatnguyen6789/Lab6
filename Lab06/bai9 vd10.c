#include <stdio.h>
int main ()
{
	int num;
	label1:
		printf("\n Enter a number (1): ");
		scanf("%d", &num);
		if (num == 1)
		goto Test;
		else
		goto label1;
		Test:
			printf("\nAll done...");
}
