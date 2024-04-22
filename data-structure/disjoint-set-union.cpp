const int N = 2E5;

struct disjoint_set_union {
    int parent[N + 1]{};
    int size[N + 1]{};

    disjoint_set_union() {
        for (int i = 1; i <= N; ++i) {
            parent[i] = i;
            size[i] = 1;
        }
    }

    /* int find(int x) {
        if(parent[x] == x) { return x; }
        return find(parent[x]);
    } */

    // 路径压缩
    /* int find(int x) {
        if (parent[x] == x) { return x; }
        return parent[x] = find(parent[x]);
    } */

    // 路径压缩非递归
    int find(int x) {
        int root = x;
        while (parent[root] != root) {
            root = parent[root];
        }

        int next = x;
        while (next != root) {
            next = parent[x];
            parent[x] = root;
            x = next;
        }

        return root;
    }

    /* void merge(int src, int dst) {
        parent[find(src)] = find(dst);
    } */

    // 按秩合并
    void merge(int x, int y) {
        x = find(x);
        y = find(y);
        if (x > y) { std::swap(x, y); }
        parent[x] = y;
        size[y] += size[x];
    }
};
