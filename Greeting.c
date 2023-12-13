#include <stdio.h>
#include <time.h>
int main(int argc, char *argv[])
{
  time_t now; 
  struct tm *clock; 
  char time_string[64];
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

strftime(time_string, 64,"Today is %A, %B %d, %Y\n%I:%M%p", clock);

if(argc > 1){
  printf(", %s", argv[1]);
}
  printf("\n%s", time_string);
}