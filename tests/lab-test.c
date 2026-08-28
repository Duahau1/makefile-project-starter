#include <stdlib.h>
#include <stdio.h>
#include "harness/unity.h"
#include "../src/lab.h"

void setUp(void)
{
  printf("Setting up tests...\n");
}

void tearDown(void)
{
  printf("Tearing down tests...\n");
}

void test_get_greeting(void)
{
  char *greeting = get_greeting("Alice");
  TEST_ASSERT_NOT_NULL(greeting);
  TEST_ASSERT_EQUAL_STRING("Hello, Alice!", greeting);
  free(greeting); // Free the allocated memory for the greeting

  greeting = get_greeting(NULL);
  TEST_ASSERT_NULL(greeting);

  greeting = get_greeting("");
  TEST_ASSERT_NOT_NULL(greeting);
  TEST_ASSERT_EQUAL_STRING("Hello, !", greeting);
  free(greeting);
}

void test_incorrect_sum(void)
{
  const int PARAM_1 = 2;
  const int PARAM_2 = 3;

  int retVal = incorrect_sum(PARAM_1, PARAM_2);
  TEST_ASSERT_NOT_EQUAL(PARAM_1 + PARAM_2, retVal);
}

void test_product(void)
{
  const int PARAM_1 = 2;
  const int PARAM_2 = 3;

  int retVal = product(PARAM_1, PARAM_2);
  TEST_ASSERT_EQUAL(PARAM_1 * PARAM_2, retVal);
}

int main(void)
{
  // some comment
  UNITY_BEGIN();
  RUN_TEST(test_get_greeting);
  RUN_TEST(test_product);
  RUN_TEST(test_incorrect_sum);
  return UNITY_END();
}
