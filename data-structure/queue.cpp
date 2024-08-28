const int N = 1E6;

// handwriting-queue
int queue[N + 1];
int front = 1, rear = 0; // init, clean

queue[front--] = 1; // push_front
queue[++rear] = 1;  // push_back
++front;            // pop_front
--rear;             // pop_back

if(rear < front) { return true; }           // empty
if(rear >= front) { int e = queue[rear]; }  // back
if(rear >= front) { int e = queue[front]; } // front

int length = rear - front + 1; // length
