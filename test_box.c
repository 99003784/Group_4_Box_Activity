
#include "unity.h"
#include "box.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define SUCCESS 1
#define ZERO 0

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_enter_details(void)
{
      TEST_ASSERT_EQUAL(SUCCESS, enter_details(&pb));
    
}

void test_max_height(void)
{
      TEST_ASSERT_EQUAL(SUCCESS, max_height(&pb));
    
}


void test_update_weight(void)
{
      TEST_ASSERT_EQUAL(SUCCESS, update_weight(&pb));
    
}

void test_remove_box(void)
{
      TEST_ASSERT_EQUAL(SUCCESS, remove_box(&pb));
    
}

void test_max_height(void)
{
    TEST_ASSERT_EQUAL(SUCCESS,max_height(&pb));
}

void test_find_box_by_id(void)
{
      TEST_ASSERT_EQUAL(SUCCESS,find_box_by_id(&pb));
}

int main(void)
{

  struct box *p = (struct box *)malloc(SIZE * sizeof(struct box));
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();
  
  RUN_TEST(test_enter_details);
  RUN_TEST(test_max_height);
  RUN_TEST(test_update_weight);
  RUN_TEST(test_remove_box);
  RUN_TEST(test_find_box_by_id); 
 /* Close the Unity Test Framework */
 free(p);
  return UNITY_END();
<<<<<<< HEAD
  
}
=======
  free(pb);
}
>>>>>>> 21819844130803e6aad9f9a871fd5344dde6526f