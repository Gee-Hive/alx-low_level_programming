#include <unistd.h>
#include <sys/syscall.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (success)
 */
int main(void)
{
	char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, message, sizeof(message) - 1);

	return (1);

}
