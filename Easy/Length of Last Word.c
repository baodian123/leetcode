int lengthOfLastWord(char * s){
    int i, len = 0, size = strlen(s);
    
    for (i=0; i<size; i++) {
        int temp = 0;
        while (s[i] != 32 && i < size) {
            temp += 1;
            i += 1;
        }
        if (temp) len = temp;
    }
    
    return len;
}