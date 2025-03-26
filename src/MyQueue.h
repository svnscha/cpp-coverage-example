#pragma once
#include <queue>

class MyQueue
{
public:
   void Push(int val);
   void Pop();
   bool IsEmpty() const;
   void NewFunction();

private:
   std::queue<int> _q;
};
