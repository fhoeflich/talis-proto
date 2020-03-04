/*
 * hello(1) -- hello world program.
 */
#include <stdio.h>
#include <stdlib.h>

#define SUCCEED

int
main()
{
	printf("hello, world\n");
#ifdef SUCCEED
	exit(0);
#else
	exit(1);
#endif /* SUCCEED */
}
