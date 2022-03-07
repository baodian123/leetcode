int count(int c, int n) {
    if (c == n || n == 0) return 1;
    
    double rs = 1, temp = n;
    while (temp--) rs *= c--;
    while (n) rs /= n--;
    
    return (int)round(rs);
}

int* getRow(int rowIndex, int* returnSize){
    *returnSize = rowIndex + 1;
    
    int* rs = malloc(sizeof(int) * *returnSize), i, j;
    for (i=0; i<=rowIndex/2; i++) rs[i] = count(rowIndex, i);
    for (i=rowIndex, j=0; i>rowIndex/2; i--, j++) rs[i] = rs[j];
    
    return rs;
}