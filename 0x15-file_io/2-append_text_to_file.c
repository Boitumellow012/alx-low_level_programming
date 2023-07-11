#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fwd;
	int n;
	int read_wrt;

	if (!filename)
		return (-1);

	fwd = open(filename, O_WRONLY | O_APPEND);

	if (fwd == -1)
		return (-1);

	if (text_content)
	{
		for (n = 0; text_content[n]; n++)
			;

		read_wrt = write(fwd, text_content, n);

		if (read_wrt == -1)
			return (-1);
	}

	close(fwd);

	return (1);
}
