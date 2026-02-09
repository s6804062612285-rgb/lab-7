#include <stdio.h>
long convert(long h, long m, long s);

int main() {
    long hour, minute, second;
    scanf("%ld %ld %ld", &hour, &minute, &second);
    
    long result = convert(hour, minute, second);
    printf("%ld\n", result);
    
    return 0;
}
long convert(long h, long m, long s) {
    long total = (h * 3600) + (m * 60) + s;
    return total;
}