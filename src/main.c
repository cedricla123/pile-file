#include <stdio.h>
#include <element.h>

int main(void)
{
	element* elmt = new_element();
	printf("Hello, world\n");
	free_element(elmt);
	return 0;
}