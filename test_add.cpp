/**
    \brief Unit tests
*/
#include<gtest/gtest.h>

#include "my_add.hpp"

TEST(Add, Simple){
    EXPECT_EQ(my_add(2, 2), 4);
    EXPECT_EQ(my_add(1, 2), my_add(2, 1));
    EXPECT_EQ(my_add(-100, 30), -70);
}