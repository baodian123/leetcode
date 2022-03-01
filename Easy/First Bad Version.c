int firstBadVersion(int n) {
    if (n == 1) return 1;
    
    long left = 1, right = n;
    while (left <= right) {
        long target = (left + right) / 2;
        if (isBadVersion(target)) right = target - 1;
        else left = target + 1;
    }
    
    return left;
}