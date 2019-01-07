#include "headers.h"

void randnum()
{
    int i,j;
    for(i=0;i<Row;i++){
        for(j=0;j<Col;j++){
            CANDY[i].array[j] = rand()%4+1;
        }
     }
}

