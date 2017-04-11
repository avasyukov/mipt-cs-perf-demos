#include<stdio.h>

void new_func1(void)
{
	printf("\n Inside new_func1()\n");
	int i;

	for(i = 0; i < 0xffffffee; i++);

	return;
}

void func1(void)
{
	printf("\n Inside func1 \n");
	int i;

	for(i = 0; i < 0xffffffff; i++);

	for(i = 0; i < 4; i++)
		new_func1();

	return;
}

static void func2(void)
{
	printf("\n Inside func2 \n");
	int i;

	for(i = 0; i < 0xffffffaa; i++);

	return;
}

int main(void)
{
	printf("\n Inside main()\n");
	int i;

	for(i = 0; i < 0xffffff; i++);

	func1();
	func2();

	return 0;
}
