/* File: char_stack.h       

  Header file for a very basic array-based implementation of a stack.

*/
#include <limits>

class char_stack
{
  public:
    char_stack();
    void push( char item );
    char pop(); 
    char top();
    bool empty();
    int size();

  private:
    // fill this in.
    int top_index;
    static const int capacity = 90000; // ask if acceptable to have a predefined capacity.
    char char_arr[capacity];
};
