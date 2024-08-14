const int N = 1E6;

// handwriting-stack
int stack[N + 1];
*stack = 0; // init, empty, clean, length

stack[++*stack] = 1;                  // push
if(*stack) { int e = stack[*stack]; } // top
--*stack;                             // pop
