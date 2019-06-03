#ifndef GLOBAL_H_INCLUDED
#define GLOBAL_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#define WINDOW 15
#define FILTER_AMOUNT 6
#define OFFSET 50

#define ONE_CURVE 1
#define TWO_CURVES 2
#define TAIL 3
#define FUEL_CELL 4

typedef struct data
{
    size_t n;
    double * t;
    double * y;
} Data;


#endif // GLOBAL_H_INCLUDED
