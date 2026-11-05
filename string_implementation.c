#include <stdio.h>
int my_strlen(char * str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
        }

    return count;
    }
char *my_strcpy(char *dest, const char *src) {
    char *tmp = dest;
    while(*src != '\0') {
        *dest = *src;
        ++dest;
        ++src;
        }
        *dest = '\0';
        return tmp;
        }
char *my_strncpy(char *dest, const char *src, int size) {
    char *tmp = dest;
    while(size) {
        *dest = *src;
        ++dest;
        ++src;
        --size;
        }
        *dest = '\0';
        return tmp;
        }
char *my_strcat(char *dest, const char *src) {
    char *tmp = dest;
    int size = my_strlen(dest);
    dest += size;
    while ( *src != '\0') {
        *dest = *src;
        ++dest;
        ++src;
        }
        *dest = '\0';
        return tmp;
        }
char *my_strncat(char *dest, const char *src, int size) {
    char *tmp = dest;
    int step = my_strlen(dest);
    dest += step;
    while (size) {
        *dest = *src;
        ++dest;
        ++src;
        --size;
        }
        *dest = '\0';
        return tmp;
        }
int my_strcmp(char *str1, char *str2) {

    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 == *str2 ) {
            ++str1;
            ++str2;
            continue;
        }    
        if (*str1 > *str2) return 1;
        if (*str1 < *str2) return -1;
        ++str1;
        ++str2;
        }
        return 0;
        }
int my_strncmp(char *str1, char *str2, int size) {
    while (size) {
        if (*str1 == *str2) {
            str1++;
            str2++;
            size--;
            continue;
            }
         if (*str1 < *str2) return -1;
         if (*str1 > *str2) return 1;
         str1++;
         str2++;
         size--;
         }
         return 0;
         }
char * my_strchr(char *ptr, int c) {
    while(*ptr != '\0') {
        if (*ptr == c) {
            return ptr;
        }
        ptr++;
        }
        return NULL;
        }
  
int main() {
    char *str = "hello Georgi jan";
    printf("%s\n", str);
    int string_length = my_strlen(str);
    printf("%d\n", string_length);
    char other_str1[100];
    my_strcpy(other_str1,str); 
    printf("%s\n", other_str1);
    char other_str2[100];
    int size = 4;
    my_strncpy(other_str2,other_str1, size);
    printf("%s\n", other_str2);
    char strcat_arr[100] = "say me";
    my_strcat(strcat_arr, str);
    printf("%s\n",strcat_arr);
    int strncat_size = 5;
    my_strncat(strcat_arr, str, strncat_size);
    printf("%s\n",strcat_arr);
    char *str1 = "apple";
    char *str2 = "appke";
    int finaly_result = my_strcmp(str1,str2);
        if (finaly_result == 0) {
            printf("str1 == str2\n");
            }
        else if (finaly_result < 0) {
            printf("str1 > str2\n");
            }
        else {
            printf("str1 < str2\n");

            }
    int strncmp_size = 3;        
    int f_res = my_strncmp(str1,str2,strncmp_size);
    if (f_res == 0) printf("str1 == str2\n");
    else if (f_res < 0) printf("str1 > str2\n");
    else printf("str1 < str2\n");
    char *c = my_strchr(str,'o');
        if (c != NULL) printf("simbol index is -%ld and simbol o ", c - str);
        else printf("Symbol not found");

    }
