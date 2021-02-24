/**
 * @file box.h
 * @authors Aruna(99003756) Karisma(99003760) Souvik(99003784) Sayani(99003772) Suvradeep(99003788)  (a.aruna@ltts.com.com) 
 * @brief 
 * @version 0.1
 * @date 2021-02-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef  __BOX_H__
#define  __BOX_H__
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define SUCCESS 1
#define ZERO 0
#define SIZE 10

/**
 * @brief  structure of box having parameters:unique ID,length,breadth,height,colour,weight
 * 
 */
struct box{
    int unique_id;
    int length;
    int breadth;
    int height;
    char colour[20];
    double weight;
};
struct box* pb;
/**
 * @brief takes the details of the box : unique ID,length,breadth,height,Colour,weight
 * 
 * @return int 
 */


int enter_details(struct box *);

/**
 * @brief displays the details of the box
 * 
 * @return pointer to first struct box 
 */

struct box display(struct box *);
/**
 * @brief to find the maximum height
 * 
 */
int max_height(struct box *ptr);

int update_weight(struct box *);
/**
 * @brief Update weight of box with specific id
 * 
 */

/**
 * @brief Remove the box with given id
 * 
 */
int remove_box(struct box *);



int find_box_by_id(struct box* ,int ,int);
/**
 * @brief find the box by unique_id
 * 
 */

/**
 * @brief find the average volume of all boxex
 *
 */
 float avg_vol(struct box *pb);

#endif //BOX__H
