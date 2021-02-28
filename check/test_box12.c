#include "unity.h"
#include "unity_internals.h"


#define SUCCESS 1
#define ZERO 0

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_find_box_by_id(void)
{
      TEST_ASSERT_EQUAL(SUCCESS,SUCCESS);
}

void test_remove_box(void)
{
      TEST_ASSERT_EQUAL(SUCCESS,SUCCESS);
}

int main(void)
{

/* Initiate the Unity Test Framework */
  UNITY_BEGIN();
  
  RUN_TEST(test_remove_box); 
  RUN_TEST(test_find_box_by_id); 
  return UNITY_END();

}

