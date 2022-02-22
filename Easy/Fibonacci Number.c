int fib(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    int i, num = 0, p1 = 0, p2 = 1;
    
    for (i=1; i<=n; i++) {
        num = p1 + p2;
        p2 = p1;
        p1 = num;
    }
    
    return num;
}