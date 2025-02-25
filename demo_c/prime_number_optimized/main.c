#include <stdio.h>
#include <stdbool.h>

// Time Complexity: O(n), where n is the given number.
// Auxiliary Complexity: O(1)

bool check(int number)
{
    int count = 0;
    
    if(number <= 1)
        return false;

    for(int i = 2;i * i <= number;i++)
        if(number % i == 0)
            count++;

    if(count > 0)
        return false;
    else
        return true;
}

int main()
{
    int number = 132;
   
    if(check(number))
        printf("%d is prime\n", number);
    else
        printf("%d is not prime\n", number);
    
    return 0;
}
