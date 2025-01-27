#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a,b);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    return strcmp(b,a);
}

int distinct(const char* a){
    int dist_chars[26] = {0};
    int  dist_count = 0;

    while( *a != '\0'){
        int ch = *(a++) - 'a';
        if(ch < 26)
            dist_chars[ch]++;
    }

    for(int i = 0; i < 26; i++)
        if(dist_chars[i])
            dist_count++;

    return dist_count;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int size = distinct(a) - distinct(b);
    return size ? size : lexicographic_sort(a,b);
}

int sort_by_length(const char* a, const char* b) {
    int size = strlen(a) - strlen(b);
    return size ? size : lexicographic_sort(a,b);
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    //char temp[3000];
    for(int i = 0; i < len; i++){
        for(int j = i + 1; j < len; j++){
            if(cmp_func(arr[i],arr[j]) > 0){
                char *temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                //strcpy(temp, arr[i]);
                //strcpy(arr[i], arr[j]);
                //strcpy(arr[j], temp);
            }
        }
    }
}


int main()
{
    int n;
    scanf("%d", &n);

    char** arr;
    arr = (char**)malloc(n * sizeof(char*));

    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }

    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");
}