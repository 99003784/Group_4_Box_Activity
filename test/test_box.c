#include "unity.h"
#include "box.h"
#define SUCCESS 1
#define ZERO 0
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_enter_details(void)
{
    long result = 1;
    TEST_ASSERT_EQUAL_(SUCCESS, enter_details(&pb));
   
}

int main(void)
{

  struct box *pb = (struct box *)malloc(SIZE * sizeof(struct box));
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();
  
  RUN_TEST(test_enter_details);
  /* Close the Unity Test Framework */
  return UNITY_END();
  free(pb);
}