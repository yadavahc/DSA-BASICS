class Solution {
public:
    int fib(int n) {
   // Base Condition.
   if(n <= 1)
   {
       return n;
   }
   int last = fib(n-1);
   int slast = fib(n-2);
   return last + slast;
}
};