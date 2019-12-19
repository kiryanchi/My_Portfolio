#include <stdio.h>

/*
    Macro
    - An instruction that represents a sequence of instructions in abbreviated form.
*/

/*
#define         SAY_HELLO           printf("Hello, World!");
Preprocessor    Macro (name)        body (or replacement list)
directive

Macro expansion
*/

/*
    Object-like macros vs Function-like macros

#define ONE         1
#define SQUARE(X)   X*X
*/

#define     PI          3.141592    // Symbolic, or manifest, constants
#define     GRAVITY     9.8

#define     THREE       3
#define     MESSAGE     "The greatest glory in living lies not in never falling, \
but in rising every time we fall."

#define     NINE        THREE*THREE
#define     SAY_HELLO   for(int i = 0; i< 10; i++) printf("Hello, World!\n");
#define     FORMAT      "Number is %d.\n"

#define     WITH_BLANK  1

#define     MY_CH       'Z'
#define     MY_ST       "Z"     // z\0

#define     LIMIT       20
const int LIM = 50;
static int arr1[LIMIT];
static int arr2[LIM];
const int LIM2 = 2 * LIMIT;
const int LIM3 = 2 * LIM;

