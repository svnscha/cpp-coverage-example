#pragma once
#include <queue>

class MyQueue
{
public:
   void Push(int val);
   void Pop();
   bool IsEmpty() const;
   void NewFunction1();
   void NewFunction2();

private:
   std::queue<int> _q;
};
