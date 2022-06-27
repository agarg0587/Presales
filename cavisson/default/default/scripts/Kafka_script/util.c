#include <stdio.h>
#include <sys/time.h>
#include <time.h>
#include <math.h>

int gettime(char *buffer, int length)
{
  int millisec;
  struct tm *tm_info;
  struct timeval tv;

  gettimeofday(&tv, NULL);

  millisec = lrint(tv.tv_usec/1000.0);
  if(millisec >= 1000) {
    millisec-= 1000;
    tv.tv_sec++;
  }
 
  tm_info = localtime(&tv.tv_sec);

  strftime(buffer, length, "%Y-%m-%dT%H:%M:%S", tm_info);
  sprintf(buffer, "%s.%03d", buffer, millisec);

  return 0;
}

unsigned long epoch()
{
 return ((unsigned long)time(NULL));
}



