#include <stdio.h>
#include <time.h>
int main(int argc, char *argv[])
{
  time_t now;
  struct tm *clock;
  int hours = 0;

  time(&now);
  clock = localtime(&now);
  hours = clock->tm_hour;
    
  if(argc < 2)
    puts("Hello you sexy beast!");
    else if (hours < 12)
    printf("Good Morning");
    else if (hours < 17)
    printf("Afternoon");
    else
    printf("Evening");
  if(argc > 1)
   printf(", %s\n", argv[1]);
    


time(&now);
printf ("It's %s\n", ctime(&now));




}