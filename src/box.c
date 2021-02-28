#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "box.h"
#include "unistd.h"

int add_box(box_t* ptrbox, box_t* box)
{
  //  printf("ptr_box = %p, box = %p", ptrbox, box);
  if(NULL == ptrbox || NULL == box) 
    return -1;

memcpy(ptrbox, box, sizeof(box_t));
return 0;
}

int display1(const box_t* ptrbox,int id)
{
  //  printf("ptr_box = %p, box = %p", ptrbox, box);
  if(NULL == ptrbox ) 
    return -1;

    for(int i =0; i< 5; i++)
        {
            printf("ID = %d\t length= %d\t breadth=%d \t height=%d \t colour=%s\t weight=%lf\n", ptrbox[i].unique_id,ptrbox[i].length,ptrbox[i].breadth,ptrbox[i].height,ptrbox[i].colour,ptrbox[i].weight);
        }
return 0;
}

int max_height(const box_t* ptrbox)
{
    if(SIZE<1)
    {
        return -1; 
    }
    else
    {
        int maxH=0,i;
        for(i = 0; i < SIZE; i++)
            {
                if(maxH < ptrbox[i].height)
                {
                    maxH = ptrbox[i].height;
                    break;
                }
            }
            return 0;
}
}

int update_weight(box_t* ptrbox,int id)
{
    int i;
    double new=2.6;
    for(i=0;i<SIZE;i++)
    {
        if(ptrbox[i].unique_id==id)
        {   
            ptrbox[i].weight = new;
             return 0;
        }
        else
        {
            return -1;
        }
    }
}


int remove_box(const box_t* ptrbox,int id)
{
    int i;
        for(i=0;i<SIZE;i++)
    {
        if(ptrbox[i].unique_id==id)
        {
            
            printf("BOX found and deleted\n");
             return 0;
        }
        else
        {
            printf("\n Box not found");
            return -1;
        }
    }
    
}


int find_box_by_id(const box_t* ptrbox,int id)
{

	for(int i=0;i<SIZE;i++)
	{
		if (ptrbox[i].unique_id==id)
		{
            printf("The box has been found\n");
			return 0;
		}
     	
	}
    return -1;

}   

int count_box_colour(const box_t* ptrbox,int colour)
{

int count=0;
	for(int i=0;i<SIZE;i++)
	{
		if (ptrbox[i].unique_id==colour)
		{
            printf("The box has been found\n");
			count++;
		}
     	
	}
    if(count==0)
    return -1;
	else
	return 0;

}  
	


int avg_vol(const box_t* ptrbox)
{
    
    int sum=0,i;
    float avg = 0;
    
    for( i = 0 ; i < SIZE ; i++ )
    {
        sum += (ptrbox[i].length) * (ptrbox[i].breadth) * (ptrbox[i].height) ;
    }
    avg = sum / SIZE ;
     return 0;
}

	


int difference(const box_t* ptrbox)
{
    int max = 0,i,volume=0 ;
    long min = 1000000 ;
    for(i=0; i<SIZE ; i++)
    {
        volume=(ptrbox[i].length)*(ptrbox[i].breadth)*(ptrbox[i].height);
        
        if(volume > max)
            max = volume ;
        if(volume < min)
            min = volume ;
    }
    
    return 0;
}

