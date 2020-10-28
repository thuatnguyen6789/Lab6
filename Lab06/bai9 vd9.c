#include <stdio.h>
int main ()
{
	int x;
	char i, ans;
	i = 'a';
	do {
		x = 0;
		ans = 'y';
		printf("\nEnter sequence of character: ");
		do {
			i = getchar();
			x++;
		}while (i !='\n');
		i = 'a';
		printf("\n Number of characters entered is: %d", --x);
		printf("\n More sequence (Y/N)?");
		ans = getch();
	}while (ans == 'Y' || ans == 'y');
}
