#include <gtest/gtest.h>
#include "MyQueue.h"

TEST(MyQueueTest, PopOnEmptyQueueDoesNothing) {
    MyQueue q;
    q.Pop();
    EXPECT_TRUE(q.IsEmpty());
}

TEST(MyQueueTest, PushAndPopWorks) {
    MyQueue q;
    q.Push(42);
    EXPECT_FALSE(q.IsEmpty());
    q.Pop();
    EXPECT_TRUE(q.IsEmpty());
}
