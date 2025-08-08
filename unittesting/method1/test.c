#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "demo.h"
#include"unity.h"

void setUp(void){}
void tearDown(void){}

void test_sum(void){
    TEST_ASSERT_EQUAL(30, sum(10, 20));
    TEST_ASSERT_EQUAL(100, sum(100, 20));
  }

int main()
{ int a = 10, b = 20;
  int c = 0;
  c = sum(a, b);
  printf("Sum: %d\n", c);

  UNITY_BEGIN();

  RUN_TEST(test_sum);

  return UNITY_END();

}