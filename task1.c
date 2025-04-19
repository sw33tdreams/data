#include <stdio.h>

int data1 = 3;
static int bss;
static int data2 = 10;

int main() {
	int local = 8;
	printf("adress of global in data: %p\nadress of static in bss: %p\nadress of static in data: %p\nadress of local variable: %p\n", &data1, &bss, &data2, &local);
return 0;
}
