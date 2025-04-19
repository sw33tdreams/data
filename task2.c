#include <stdio.h>

extern int ext;
int func( int x){
	x++;
	return x;
}
int main() {
	static int st = 10;
	printf("static variuable in functions: %d, %d, %d\n", func(st), func(st), func(st));
	printf("extern value is %d\n",ext );
return 0;
}
	
