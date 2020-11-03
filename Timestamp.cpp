#include <iostream>
#include <time.h>
#include <cstdio>
#include <cstdlib>

typedef struct times
{
        int Year;
        int Mon;
        int Day;
        int Hour;
        int Min;
        int Second;
}Times;

Times stamp_to_standard(int stampTime)
{
        time_t tick = (time_t)stampTime;
        struct tm tm;
        char s[100];
        Times standard;

        //tick = time(NULL);
        tm = *localtime(&tick);
        strftime(s, sizeof(s), "%Y-%m-%d %H:%M:%S", &tm);
        printf("%d: %s\n", (int)tick, s);


        standard.Year = atoi(s);
        standard.Mon = atoi(s+5);
        standard.Day = atoi(s+8);
        standard.Hour = atoi(s+11);
        standard.Min = atoi(s+14);
        standard.Second = atoi(s+17);
    
        return standard;
}
int main(int argc ,char *argv[])
{
	printf("**");
        int timestamp=atoi(argv[1]);
        stamp_to_standard(timestamp);
        return 0;
}
