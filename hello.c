#include <stdio.h>

int main(void)
{
	char f,m,l;
	int age;
	printf("enter your name and initials with no space in between please: ");
	scanf("%c %c %c %d", &f, &m, &l, &age);
	printf("My initials are: %c%c%c and my age is %d.\n",f,m,l,age);
	return (0);
}
