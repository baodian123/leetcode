char* addBinary(char* a, char* b) {
    int max_len = strlen(a) > strlen(b) ? strlen(a) + 2 : strlen(b) + 2, k, j, cnt = 0;
    char* rs = malloc(sizeof(char) * max_len);
    
    k = strlen(a) - 1;
    j = strlen(b) - 1;
    rs[--max_len] = '\0';
    
    while(--max_len >= 0) {
        cnt += k >= 0 ? a[k--] - '0' : 0;
        cnt += j >= 0 ? b[j--] - '0' : 0;
        
        rs[max_len] = cnt % 2 + '0';
        cnt /= 2;
    }
    
    if (rs[0] == '0') memmove(rs, rs + 1, strlen(rs) * sizeof(char));
    
    return rs;
}