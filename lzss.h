#ifndef LZSS_H
#define LZSS_H

#include <stdlib.h> /* size_t */
#include <stdio.h> /* FILE */

#include "common.h" /* struct buffer, u16 */

// can't just be 4096 because disp can range from 1..4098
#define LZSS_BUF_SIZE ((u16)(8192))

enum lzss_mode {
	LZSS10,
	LZSS11,
};

extern int lzss_decompress(FILE *fp, FILE *out, const size_t n, const int mode);
extern struct buffer *lzss_decompress_file(FILE *fp);

#endif /* LZSS_H */