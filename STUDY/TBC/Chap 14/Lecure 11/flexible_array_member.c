#include <stdio.h>
#include <stdlib.h>

struct person {
    int id;
    struct { char first[20]; char last[20]; };
};

int main()
{
    struct flex
    {
        size_t count;
        double average;
        double values[];        // last member. flexible array member.
    };

    const size_t n = 3;

    struct flex* pf = (struct flex*) malloc(sizeof(struct flex) + n * sizeof(double));

    pf->count = n;
    pf->values[0] = 1.1;
    pf->values[1] = 2.1;
    pf->values[2] = 3.1;

    pf->average = 0.0;

}