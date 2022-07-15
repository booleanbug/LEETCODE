void search(struct Node* root, int* arr, int* idx) {
    if (!root) return;
    arr[(*idx)++] = root->val;
    for (int i = 0; i < root->numChildren; i++) {
        search(root->children[i], arr, idx);
    }
}

int* preorder(struct Node* root, int* returnSize) {
    int* arr = (int*) malloc(10000 * sizeof(int));
    int idx = 0;
    search(root, arr, &idx);
    *returnSize = idx;
    return arr;
}
