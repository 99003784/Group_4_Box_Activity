/**
 * @file box.h
 * @author Aruna(99003756) Karisma(99003760) Souvik(99003784) Sayani(99003772) Suvradeep(99003788)  (a.aruna@ltts.com.com) 
 * @brief 
 * @version 0.1
 * @date 2021-02-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef  BOX_H__
#define  BOX_H__
#define SUCCESS 1
#define ZERO 0
#define SIZE 10

/**
 * @brief  structure of box 
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
 * @brief adding a box at the end of array
 * 
 */

int enter_details(struct box *);
/**
 * @brief 
 * 
 */

/**
 * @brief 
 * 
 */

struct box display(struct box *);


#endif //BOX__H