#include "unity.h"
#include "Dumbexample.h"

void setUp()
{

}
void tearDown()
{

}
void test_AverageThreeBytes_should_AverageMidRangeValues(void)
{
  TEST_ASSERT_EQUAL_HEX8(38,AvergeThreeBytes(30,40,50));
}


int main()
{
UNITY_BEGIN();
RUN_TEST(test_AverageThreeBytes_should_AverageMidRangeValues);
return UNITY_END();
}
