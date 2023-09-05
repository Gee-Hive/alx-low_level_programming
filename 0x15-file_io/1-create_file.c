#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - create a file
 * @filename: name of the file to create
 * @text_content: text to insert in the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int rd, wt, length = 0;

	if (filename == NULL)
		return (-1);

	rd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (rd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	wt = write(rd, text_content, length);
	if (wt == -1)
	{
		close(rd);
		return (-1);
	}
	close(rd);
	return (1);
}
