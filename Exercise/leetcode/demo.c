#include <stdio.h>
int isPalindrome(int x)
{
    int a, temp, sum = 0;
    temp = x;
    while (x > 0){
    a = x % 10;
    sum = (sum * 10) + a;
    x = x / 10;
    }
    if (temp == sum)
        printf("palindrome \n");
    else
        printf("not palindrome");
}

int main()
{
    isPalindrome(121);
    return 0;
}