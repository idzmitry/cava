#ifndef _WIN32
int print_raw_out(int bars_count, int fd, int is_binary, int bit_format, int ascii_range,
                  char bar_delim, char frame_delim, int const f[]);
#else
#include "Windows.h"
int print_raw_out(int bars_count, HANDLE hFile, int is_binary, int bit_format, int ascii_range,
                  char bar_delim, char frame_delim, int const f[]);
#endif
