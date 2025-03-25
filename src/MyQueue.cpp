#include "MyQueue.h"

void MyQueue::Push(int val)
{
   _q.push(val);
}

void MyQueue::Pop()
{
   if (_q.empty())
      return;

   _q.pop();
}

bool MyQueue::IsEmpty() const
{
   return _q.empty();
}

void MyQueue::NewFunction()
{
   static int nonsense = 0;
   nonsense += 1;
}
