#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - add text to end of the file
 * @filename: name of the file
 * @text_content: text to add
 *
 * Return: 1 on success or -1 if failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int rd, wt, count = 0;

	if (filename == NULL)
		return (-1);

	rd = open(filename, O_WRONLY | O_APPEND);
	if (rd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
		{
			count++;
		}
	}

	wt = write(rd, text_content, count);
	if (wt == -1)
	{
		return (-1);
	}
	close(rd);
	return (1);
}
