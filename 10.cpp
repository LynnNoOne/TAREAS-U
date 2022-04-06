#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   bool Primo(int num);  
   long long sum = 2;  
                                 
   for (int i = 3; i < 2000000; i += 2)   
   {
      if (Primo(i))
      {
         sum += i;
      }
   }

   cout << sum << endl;
   return 0;
}


bool Primo(int num)
{
   if (num < 2) 
      return false;
   if (num == 2)   
      return true;
   if (!(num % 2))  
      return false;
 
   for (int i = 3; i <= sqrt((double)num); i += 2) 
      if (!(num % i))
         return false;
   return true;
}