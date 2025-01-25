bool isalpha(char c){
        if((c>= '0' && c<= '9') || (tolower(c)>='a' && tolower(c)<='z')){
            return true;
        }
        
            return false;
    }
    bool isPalindrome(string str) {
        int s=0;
        int e=str.length();
        while(s<e){
            if(!isalpha(str[s])){
                s++;
                continue;
            }
            if(!isalpha(str[e])){
                e--;
                continue;
            }
            if(tolower(str[s]) != tolower(str[e])){
                return false;
            }
            else{
                s++;
                e--;
            }
        }
        return true;
    }