int* countBits(int n, int* returnSize){
    *returnSize = n + 1;
    
    int* rs = malloc(sizeof(int) * (n + 1)), i;
    rs[0] = 0;
    for (i=1; i<=n; i++) rs[i] = rs[i>>1] + (i & 1);
    
    return rs;
}