#include "box.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define SIZE 10


int enter_details(struct box *pb)
{
    int i;
    
    for(i=0;i< SIZE;i++)
    {
        printf("\nEnter the structure parameters: unique ID,length,breadth,height,colour,weight");
        scanf("%d%d%d%d%s%lf",&pb[i].unique_id,&pb[i].length,&pb[i].breadth,&pb[i].height,pb[i].colour,&pb[i].weight);
    }
    return SUCCESS;
    
}

struct box display(struct box *pb)
{
    int i;
    printf("\n Details of the boxes");
    for(i=0;i< SIZE;i++)
        {
            printf("\n Unique ID = %d \t Lenght = %d \t Breadth = %d \t Height = %d \n colour = %s \t Weight = %lf",pb[i].unique_id,pb[i].length,pb[i].breadth,pb[i].height,pb[i].colour,pb[i].weight);
        }
    return *pb;
}

int max_height(struct box *ptr)
{
    if(SIZE<1)
    {
        return 0; 
    }
    else
    {
        int maxH=0,i;
        for(i = 0; i < size_t; i++)
            {
                if(maxH < ptr[i].height)
                {
                    maxH = ptr[i].height;
                    break;
                }
            }
            return maxH;
    }