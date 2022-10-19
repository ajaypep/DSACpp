//
// Created by ajay on 9/29/22.
//

#include "dynamic_array.h"
#include "gtest/gtest.h"

TEST(InsertionTests,EmptyArray)
{
    DynamicArray dynamic_array{};
    ASSERT_EQ(dynamic_array.get_length(),0);
}

TEST(InsertionTests,InsertInMiddle)
{
    DynamicArray dynamic_array{1,2,3,4,5};
    dynamic_array.insert(88,2);
    ASSERT_EQ(dynamic_array[2],88);
}