/*#include <stdio.h>
#include <time.h>
#define LEN 150
int main ()
{
    char buf[LEN];
    time_t curtime;
    struct tm *loc_time;
    //Getting current time of system
    curtime=time(NULL);
    // Converting current time to local time
    loc_time = localtime(&curtime);
    // Displaying date and time in standard format
    printf("%s",asctime(loc_time));
    strftime (buf, LEN, "Today is %A,  %b %d.\n",loc_time);
    fputs (buf, stdout);
    strftime (buf, LEN, "Time is %I:%M %p.\n",loc_time);
    fputs (buf, stdout);
    return 0; 
} 
*/

#include <stdio.h>
#include <time.h>

int main () {
   time_t rawtime;
   struct tm *info;
   char buffer[80];

   time( &rawtime );

   info = localtime( &rawtime );

   strftime(buffer,80,"%x - %I:%M %p", info);
   printf("Formatted date & time : %s\n", buffer );
  
   return(0);
} 