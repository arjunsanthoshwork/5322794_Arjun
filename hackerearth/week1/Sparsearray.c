int* matchingStrings(int strings_count, char** strings, int queries_count, char** queries, int* result_count) {
    
    int* res = (int*)malloc(sizeof(int) * queries_count); 
    
    
     for (int i = 0; i < queries_count; i++) {
        int count = 0;
        for (int j = 0; j < strings_count; j++) {
            if (strcmp(queries[i], strings[j]) == 0) {
                count++;
            }
        }
        res[i] = count;  
    }

    *result_count = queries_count;  
    
    return res;
}