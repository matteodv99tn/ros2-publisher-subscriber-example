#include <gtest/gtest.h>


int a_complex_function(int x) { return 2*x; }



TEST(cpp_publisher_subscriber, useless_test) {
    ASSERT_EQ(a_complex_function(2), 5);
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}