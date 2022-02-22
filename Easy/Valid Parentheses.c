bool isValid(char * s){
    int idx = 0;
    int top = -1;
    
    char buf[strlen(s)];
    
    while(s[idx] != '\0'){
        if(s[idx] == '{' || s[idx] == '[' || s[idx] == '(') buf[++top] = s[idx];
        else{
            if(top < 0) return false;
            
            if(s[idx] == '}'){
                if(buf[top] == '{') buf[top--] = '\0';
                else return false;
            }
            else if(s[idx] == ']'){
                if(buf[top] == '[') buf[top--] = '\0';
                else return false;
            }
            else if(s[idx] == ')'){
                if(buf[top] == '(') buf[top--] = '\0';
                else return false;
            }
            else return false;
        }
        
        idx += 1;
    }
    if(top != -1) return false;
    else return true;
}