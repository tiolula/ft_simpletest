#include "minunit.h"

MU_TEST(toupper_test_example)
{
	
}

MU_TEST_SUITE(ft_toupper_test_suite) 
{
	MU_RUN_TEST(toupper_test_example);
}

int main() {
	
	MU_RUN_SUITE(ft_toupper_test_suite);
	
	MU_REPORT();
	return MU_EXIT_CODE;
}
