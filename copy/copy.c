#include <sys/stat.h>
#include <fcntl.h>
#include "tlpi_hdr.h"

#ifndef BUF_SIZE
#define BUF_SIZE 1024
#endif

int main(int argc, *argv[])
{
  int inputFd, outputFd, openFlags;
  mode_t filePerms;
  char buf[BUF_SIZS];

  if(argc != 3 || strcmp(argv[1], "--help") == 0)
    usageErr("%s old-file new-file\n", argv[0]);

  exit(EXIT_SUCCESSS);

}

