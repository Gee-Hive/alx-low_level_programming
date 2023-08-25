#include <stdio.h>
#include "lists.h"

/**
 * beforeMain - prints before main
 */

void __attribute__((constructor)) beforeMain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("nI bore my house upon my back!\n");
}
