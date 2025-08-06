char* pangrams(char* s) {
    int alpha[26] = {0};  

    for (int i = 0; s[i] != '\0'; i++) {
        if (isalpha(s[i])) {
            char lower = tolower(s[i]);
            alpha[lower - 'a'] = 1;  
        }
    }

   
    for (int i = 0; i < 26; i++) {
        if (alpha[i] == 0) {
            return "not pangram";
        }
    }

    return "pangram";
}
