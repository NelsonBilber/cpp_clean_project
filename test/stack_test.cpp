#include "stack.h"
#include "gtest/gtest.h"

using StackInt = Stack<int>;

TEST(stack_test, get_top_of_stack)
{
    StackInt stack;
    int lifo = 99;
    stack.push(7);
    stack.push(0);
    stack.push(99);
    int top = stack.top();

    EXPECT_EQ(lifo, top);
}

