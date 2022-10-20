#include <stdio.h>
#include <stdbool.h>
#define TRUE 1
#define FALSE 0

int *primes(int nb_primes)
{
    int n;
    int len_p;
    bool break_occured;
    static int p[1000];
    int remainder;

    if (nb_primes > 1000)
    {
        nb_primes = 1000;
    }

    len_p = 0; // The current number of elements in p.
    n = 2;
    while (len_p < nb_primes)
    {

        break_occured = FALSE;
        // Is n primes?
        for (int i = 0; i < len_p; i++)
        {
            int j = p[i];
            remainder = n % j;
            if (remainder == 0)
            {
                break_occured = TRUE;
                break;
            }
        }

        // If no break occurred in the loop, we have a prime
        if (!break_occured)
        {
            p[len_p] = n;
            len_p++;
        }
        n++;
    }
    return p;
}

int main()
{

    int *p; // a pointer to an int
    int nb_primes = 10;

    p = primes(nb_primes);
    for (int i = 0; i < nb_primes; i++)
    {
        printf("%d\n", p[i]);
    }

    return 0;
}
