#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * create_file - create a file
 * @filename: name of file
 * @text_content: text to insert into file
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
	int doc;
	int doc_length = 0;
	ssize_t write_doc;

	if (filename == NULL)
		return (-1);

	doc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (doc == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (doc_length = 0; text_content[doc_length];)
			doc_length++;
	}

	write_doc = write(doc, text_content, doc_length);
	if (doc == -1 || write_doc == -1)
	{
		close(doc);
		return (-1);
	}

	close(doc);
	return (1);
}
