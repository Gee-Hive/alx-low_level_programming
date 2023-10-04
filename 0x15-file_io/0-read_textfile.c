#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**read_textfile - prints text from a file
 * @filename: name of file
 * @letter: number of charactefs to read
 * Rturn : the number of letters read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int doc;
	int len, docInput;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * (letters));
	
	if (buffer == NULL)
		return (0);

	/* open doc first*/
	doc = open(filename, O_RDONLY);
	if (doc == -1)
	{
		return (0);
	}

	/* read the doc )*/
	len = read(doc, buffer, letters);
	if (len == -1)
	{
		close(doc);
		free(buffer);
		return (0);
	}

	/* write to file*/
	docInput = write(STDOUT_FILENO, buffer, len);

	if (docInput == -1 || docInput != len)
	{
		close(doc);
		free(buffer);
		return (0);
	}

	close(doc);
	free(buffer);
	return (len);
}
