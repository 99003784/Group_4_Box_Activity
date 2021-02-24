#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "box.h"
#define SIZE 10



/**
 * @brief takes the details of the box : unique ID,length,breadth,height,Colour,weight
 * 
 * @param  / arguments pointer to structure
 * @return int (returns successful entering 10 box details)
 */
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
/**
 * @brief displays the details of the box
 * 
 * @param /arguments pointer to structure
 * @return pointer holding first box address
 */
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

/**
 * @brief To find the maximum height
 * 
 * @param pb num Integer to find height
 * @return int Success or Failure
 */

int max_height(struct box *ptr)
{
    if(SIZE<1)
    {
        return 0; 
    }
    else
    {
        int maxH=0,i;
        for(i = 0; i < SIZE; i++)
            {
                if(maxH < ptr[i].height)
                {
                    maxH = ptr[i].height;
                    break;
                }
            }
            return 1;
}
/**
 * @brief To update weight of box with specific id
 * 
 * @param pb num Integer and double to update weight
 * @return int Success or Failure
 */
int update_weight(struct box *pb)
{
    int id,j,i;
    double new;
    printf("\n Enter ID to change the weight the box");
    scanf("%d",&id);
    for(i=0;i<s;i++)
    {
        if(pb->unique_id==id)
        {
            
            
            pb->weight = new;
            printf("\n Unique ID = %d \t Lenght = %d \t Breadth = %d \t Height = %d \n colour = %s \t Weight = %lf",pb[i].unique_id,pb[i].length,pb[i].breadth,pb[i].height,pb[i].colour,pb->weight);
             return 1;
        }
        else
        {
            printf("\n Box not found");
            return 0;
        }
    }
}
/**
 * @brief Remove the box with given id
 * 
 * @param pb num Integer to remove the box
 * @return int Success or Failure
 */

int remove_box(struct box *pb)
{
    int id,j,i;
    double new;
        for(i=0;i<s;i++)
    {
        if(pb->unique_id==id)
        {
            
            pb->weight = new;
            printf("\n Unique ID = %d \t Lenght = %d \t Breadth = %d \t Height = %d \n colour = %s \t Weight = %lf",pb[i].unique_id,pb[i].length,pb[i].breadth,pb[i].height,pb[i].colour,pb->weight);
             return 1;
        }
        else
        {
            printf("\n Box not found");
            return 0;
        }
    }
    
}


/**
 * @brief Find the box with given id
 * 
 * @return int Success or Failure
 */


int find_box_by_id(const struct box* parr,int len,int u_id)
{
 const box *ptr=parr;
	for(int i=0;i<len;i++)
	{
		if (ptr->unique_id==u_id)
		{
            printf("The box has been found\n");
			return 1;
		}
        ptr++;
     	
	}
    printf("The box with the given unique_id is not present\n");
    return 0;

    return NULL;
}   


	
/**
 * @brief to find the average volume of all the boxes
 * 
 * @param pointer pointing to first box
 * 
 * @return average volume
 * 
 */

float avg_vol(struct box *pb)
{
    
    int sum=0 , i;
    float avg = ;
    
    for( i = 0 ; i < SIZE ; i++ )
    {
        sum + = (pb[i].length) * (pb[i].breadth) * (pb[i].height) ;
    }
    avg = sum / SIZE ;
     return avg ;
}

	
/**
 * @brief to find the difference between maximum and minimum volume
 * 
 * @param pointer pointing to first box
 * 
 * @return difference between maximum and minimum volume
 * 
 */

int difference(struct box *pb)
{
    int max = 0,i,volume=0 ;
    long min = 1000000 ;
    for(i=0; i<SIZE ; i++)
    {
        volume=(pb[i].length)*(pb[i].breadth)*(pb[i].height);
        
        if(volume > max)
            max = volume ;
        if(volume < min)
            min = volume ;
    }
    
    return (max - min) ;
}

	/**
 * @brief Count the boxes with specified colour
 * 
 * @return int Success or Failure
 */
	struct box count_box_colour(struct weather *pb)
	{
		char s1[25]="red";
		int count =0;
		for(int i=0;i<SIZE;i++)
		{
			if(strcmp(s1.pb[i].colour)==0)
			{
				count++;
			}
			else
				i++;
		}
		if(count>0)
			return SUCCESS
		else
   		        return ZERO
	}			
		
