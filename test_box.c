
#include "unity.h"
#include "inc/box.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "unity_internals.h"

#define SUCCESS 1
#define ZERO 0
box_t (*pb)[SIZE] = NULL;

box_t b1 = {1,2,3, 4, "red", 1.2};
box_t b2 = {2,4,5, 6, "blue", 6.2};
box_t b3 = {3,5,7, 8, "white", 7.2};
box_t b4 = {4,9,10, 14, "red", 1.9};
box_t b5 = {5,8,10,12, "grey", 9.2};

/* Required by the unity test framework */
void setUp(){
      pb = malloc(sizeof(box_t) * SIZE);
}
/* Required by the unity test framework */
void tearDown(){
      free(pb);
}



void test_update_weight(void)
{
      TEST_ASSERT_EQUAL(SUCCESS, update_weight(pb,2));
    
}

void test_remove_box(void)
{
      TEST_ASSERT_EQUAL(SUCCESS, remove_box(pb,3));
    
}

void test_find_box_by_id(void)
{
      TEST_ASSERT_EQUAL(SUCCESS,find_box_by_id(pb,3));
}
void test_add()
{
  //    TEST_ASSERT_EQUAL(-1,add_box(NULL, &b1));
  //    TEST_ASSERT_EQUAL(-1,add_box(NULL, NULL));
      TEST_ASSERT_EQUAL(-1,add_box(pb, NULL));
      TEST_ASSERT_EQUAL(0,add_box(pb, &b1));
      TEST_ASSERT_EQUAL(0, add_box((*pb)+1, &b2));
    //display1(pb,5);

}

void test_maxheight()
{
  TEST_ASSERT_EQUAL(0,max_height(pb));
}

void test_updateweight()
{
  TEST_ASSERT_EQUAL(-1,update_weight(pb,2));
}

void test_deletebox()
{
  TEST_ASSERT_EQUAL(-1,remove_box(pb,2));
}

void test_findbox()
{
  TEST_ASSERT_EQUAL(0,find_box_by_id(pb,2));
}

void test_volume()
{
  TEST_ASSERT_EQUAL(0, avg_vol(pb));
}

void test_difference()
{
  TEST_ASSERT_EQUAL(0,difference(pb));
}

void test_countcolour()
{
  TEST_ASSERT_EQUAL(0,count_box_colour(pb,2));
}

int main(void)
{


  UNITY_BEGIN();

  RUN_TEST(test_add);
  RUN_TEST(test_maxheight);
  RUN_TEST(test_deletebox);
  RUN_TEST(test_findbox);
  RUN_TEST(test_volume);
  RUN_TEST(test_updateweight);
  RUN_TEST(test_difference);
  RUN_TEST(test_countcolour);
  return UNITY_END();

}