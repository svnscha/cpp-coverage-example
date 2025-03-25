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

void MyQueue::NewFunction1()
{
   // Complex demo function to show-off that we break code coverage with this change.
   if (IsEmpty())
   {
      static int nonsense = 0;
      nonsense += 1;
   }
}

void MyQueue::NewFunction2()
{
   // Complex demo function to show-off that we break code coverage with this change.
   NewFunction1();
}
