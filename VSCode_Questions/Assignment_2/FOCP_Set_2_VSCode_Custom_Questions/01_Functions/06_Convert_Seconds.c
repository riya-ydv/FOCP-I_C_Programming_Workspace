#include <stdio.h>
int main(void) {
    long long totalSeconds, hours, remainingSeconds, minutes, seconds;
    scanf("%lld", &totalSeconds);
    hours = totalSeconds / 3600;
    remainingSeconds = totalSeconds % 3600;
    minutes = remainingSeconds / 60;
    seconds = remainingSeconds % 60;
    printf("%lld %lld %lld\n", hours, minutes, seconds);
    return 0;
}
