#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: text to put into file
 *
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int doc;
	int doc_len = 0;
	ssize_t write_doc;

	if (filename == NULL)
		return (-1);

	doc = open(filename, O_WRONLY | O_APPEND);
	if (doc == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (doc_len = 0; text_content[doc_len];)
			doc_len++;
	}
	write_doc = write(doc, text_content, doc_len);

	if (write_doc == -1)
		return (-1);

	close(doc);

	return (1);
}
