const int N = 1E6;

// handwriting-stack
int stack[N + 1];
*stack = 0; // init, empty, clean, length

stack[++*stack] = 1;                  // push
if(*stack) { int e = stack[*stack]; } // top
--*stack;                             // pop

// monotonic-stack
for (int i = 1; i <= n; ++i) {
    while (*stack && h[stack[*stack]] < h[i]) {
        sum[i] += v[stack[*stack]];
        --*stack;
    }
    sum[stack[*stack]] += v[i];
    stack[++*stack] = i;
}
