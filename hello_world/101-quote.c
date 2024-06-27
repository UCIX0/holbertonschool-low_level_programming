#include <unistd.h>
#include <sys/syscall.h>
/**
 * main - function main
 *
 * Return: Always void (Success)
 */
int main(void)
{
	const char *msg1 = "and that piece of art is useful\"";
	const char *msg2 = " - Dora Korpar, 2015-10-19\n";

	syscall(SYS_write, STDERR_FILENO, msg1, 29);
	syscall(SYS_write, STDERR_FILENO, msg2, 27);
	return (1);
}
