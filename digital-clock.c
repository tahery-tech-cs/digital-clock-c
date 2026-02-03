digital-clock-c

#include <stdio.h>
#include <time.h>      //??
#include <stdbool.h>
#include <unistd.h>   //??

int main(){

   //DIGITAL CLOCK

   time_t rawtime = 0; //Jan 1 1970 (EPOCH) ??
   struct tm *pTime = NULL; //??
   bool isRunning = true;

   printf("DIGITAL CLOCK\n\n");

   while(isRunning){

          time(&rawtime); //??

          pTime = localtime(&rawtime);//??

          printf("\r%02d:%02d:%02d", pTime->tm_hour, pTime->tm_min, pTime->tm_sec);//??

          sleep(1); //??
   }


    return 0;
}
