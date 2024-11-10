#include<stdio.h>

void South_East(int * lat, int * lon)
{
    *lat = *lat - 1;
    *lon = *lon + 1;
}

int main()
{
    int latitude = 32;
    int longitude = -64;

    South_East(&latitude, &longitude);

    printf("Avast ! Now at : [%d, %d]\n", latitude, longitude);

    return 0;
}