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

// monotonic-queue
for (int i = 1; i <= n; ++i) {
    while (front <= rear && a[queue[rear]] >= a[i]) { --rear; }
    while (front <= rear && i - queue[front] + 1 > k) { ++front; }
    queue[++rear] = i;
    if (i >= k) { std::cout << a[queue[front]] << " \n"[i == n]; }
}
