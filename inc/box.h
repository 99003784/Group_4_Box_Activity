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
#define SIZE 5

/**
 * @brief  structure of box having parameters:unique ID,length,breadth,height,colour,weight
 * 
 */
typedef struct box{
    int unique_id;
    int length;
    int breadth;
    int height;
    char colour[20];
    double weight;
}box_t;

/**
 * @brief 
 * 
 * @param ptrbox 
 * @param box 
 * @return int 
 */
int add_box(box_t* ptrbox, box_t* box);
int display1(const box_t* ptrbox,int id);
 

int max_height(const box_t* ptrbox);

int update_weight(box_t* ptrbox,int id);

int remove_box(const box_t* ptrbox,int id);


int find_box_by_id(const box_t* ptrbox,int id);

int avg_vol(const box_t* ptrbox);

int difference(const box_t* ptrbox);
     
int count_box_colour(const box_t* ptrbox,int colour);

#endif //BOX__H
