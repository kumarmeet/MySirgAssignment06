#include <stdio.h>
#include <stdlib.h>

int main()
{
//    prime_or_not();
//    hundred_prime_numbers();
//    prime_numbers_two_given_numbers();
//    next_prime_number();
//    check_co_prime();
    n_times_prime_numbers();
//      prime_factor();
//      lcm();
//      hcf();
//      factors();
    return 0;
}

void prime_factor()
{
    int n1, i = 2;
    printf("Enter a positive integers: ");
    scanf("%d", &n1);

    printf("Prime Factor of %d is -> ",n1);

    while(i <= n1)
    {
        if(n1 % i == 0)
        {
            printf(" %d", i);
            n1 = n1 / i;
            i = 2;
        }else
        {
            i++;
        }
    }
    return;
}

void hcf()
{
    int n1, n2, val, i, hcf = 0;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    // maximum number between n1 and n2 is stored in min
    val = (n1 > n2) ? n1 : n2;

    for(i = 1; i <= val; i++)
    {
        if(n1 % i == 0 && n2 % i == 0)
        {
            hcf = i;
        }
    }

    printf("HCF of %d and %d is %d", n1, n2, hcf);
    return;
}

void factors()
{
    int n1, i = 1;
    printf("Enter a positive integers: ");
    scanf("%d", &n1);

    printf("Factor of %d is -> ",n1);

    while(i <= n1)
    {
        if(n1 % i == 0)
        {
            printf(" %d",i);
        }
        i++;
    }
    return;
}

void lcm()
{
    int n1, n2, val, i;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    // maximum number between n1 and n2 is stored in min
    val = (n1 > n2) ? n1 : n2;

    for(i = 1; i <= val; i++)
    {
        if(val % n1 == 0 && val % n2 == 0)
        {
            printf("The LCM of %d and %d is %d", n1, n2, val);
            break;
        }

        ++val;
    }
    return;
}

void n_times_prime_numbers()
{
    int i = 1, j, count = 0, n, l;
    printf("Enter a number -> ");
    scanf("%d", &n);

    for(l = 1; l <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                count++;
            }
        }
        if(count == 2)
        {
            printf("%d\n", i);
            l++;
        }
        count = 0;
    }
    return;
}

void check_co_prime()
{
    int i, j, num1, num2, count=0;

    printf("Enter a first number ->");
    scanf("%d", &num1);
    printf("Enter a second number ->");
    scanf("%d", &num2);

    for(i = num1; i <= num2; i++)
    {
        for(j = 1; j <= num2; j++)
        {
            if(num1 % j == 0 && num2 % j == 0)
            {
                count++;
            }
        }
        if(count == 2)
        {
            printf("not co");
            break;
        }
        else
        {
            printf("Co");
            break;
        }
    }
}

void next_prime_number()
{
    int i, j, n, count = 0;

    printf("Enter a number ->");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        n++;

        for(j = 1; j <= n; j++)
        {
            if(n % j == 0)
            {
                count++;
                continue;
            }
        }
        if(count == 2)
        {
            printf("%d", n);
            break;
        }
        count = 0;
    }

    return;
}

void prime_numbers_two_given_numbers()
{
    int num1, num2, i, j, count = 0;
    printf("Enter first number -> ");
    scanf("%d", &num1);

    printf("Enter second number -> ");
    scanf("%d", &num2);

    for(i = num1; i <= num2; i++)
    {
        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                count++;
                continue;
            }
        }
        if(count == 2)
        {
            printf("%d\n", i);
        }
        count = 0;
    }

    return;
}

void hundred_prime_numbers()
{
    int i, j, count = 0;

    for(i = 1; i <= 100; i++)
    {
        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                count++;
                continue;
            }
        }
        if(count == 2)
        {
            printf("%d\n", i);
        }
        count = 0;
    }

    return;
}

void prime_or_not()
{
    int i, n, count = 0;

    printf("Enter a number ->");
    scanf("%d", &n);

    if(n == 1 || n == 0)
    {
        printf("%d is not a prime", n);
    }
    else
    {
        for(i = 1; i <= n; i++)
        {
            if(n % i == 0)
            {
                count++;
                continue;
            }
        }

        count == 2 ? printf("%d is a prime", n) : printf("%d is not a Prime", n);
    }

    return;
}
