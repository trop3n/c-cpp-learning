// reaches out to standard IO header file and imports it into your code
# include <stdio.h>

// essentially, a constant variable, accessible at compile time
#define MAX_PERSONS 1024

// later check if something is defined, such as the #ifdef DEBUG code below
// #define DEBUG

int main()
{
        #ifdef DEBUG
        printf("WE ARE IN DEBUG MODE: %s:%d", __FILE__, __LINE__);
        #endif
        
        return 0;
}