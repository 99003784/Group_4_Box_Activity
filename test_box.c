
#include <unity.h>
#include "box.h"

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
int main(void)
{

  struct box *pb = (struct box *)malloc(SIZE * sizeof(struct box));
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();
  
  RUN_TEST(test_enter_details);
  RUN_TEST(test_max_height);
  RUN_TEST(test_update_weight);
  RUN_TEST(test_remove_box);
 /* Close the Unity Test Framework */
  return UNITY_END();
  free(pb);
}