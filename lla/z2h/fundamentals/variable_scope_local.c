#include <stdio.h>

int main()
{
    int personID = 0;
    personID += 1;
    {
        // this will not affect the other personID
        int personID = 0;
    }
}