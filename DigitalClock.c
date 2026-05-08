#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>
#include <windows.h>

int main()
{
    time_t rawtime = 0; // Jan 1 1970 (Epoch)

    struct tm *pTime = NULL;
    bool isRunning = true;

    printf("Digital Clock!\n");

    while (isRunning)
    {
        time(&rawtime);

        pTime = localtime(&rawtime);

        printf("\r%02d:%02d:%02d - %d", pTime->tm_hour, pTime->tm_min, pTime->tm_sec, pTime->tm_mon);

        sleep(1);
    }

    return 0;
}