#include "headers.h"

void display()
{
    int i,j;
    for(i=0;i<Row;i++)
        {
            for(j=0;j<Col;j++)
            {
                printf("%d ",CANDY[i].array[j]);
            }
            printf("\n");
        }
    printf("\n");
}
