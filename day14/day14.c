#include<stdio.h>
#include <limits.h>
int myAtoi(char *s) {
    int idx = 0, sign = 1, res = 0;
    while (s[idx] == ' ')
        idx++;
    if (s[idx] == '-' || s[idx] == '+')
        if (s[idx++] == '-')
            sign = -1;
    while (s[idx] >= '0' && s[idx] <= '9') {
        if (res > INT_MAX / 10 || (res == INT_MAX / 10 && s[idx] - '0' > 7))
            return sign == 1 ? INT_MAX : INT_MIN; 
        res = res * 10 + (s[idx++] - '0');
    }
    return res * sign;
}
int main() {
    char s[] = "-999999999999";
    printf("%d", myAtoi(s));
    return 0;
}