#include "box.h"

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
