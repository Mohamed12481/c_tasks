#include <stdio.h>
#include <string.h>

void split(char *arr1, char *d) {
  
    char *ss = strtok(arr1, d);  
    while (ss != NULL) {
        printf("%s\n", ss);
      
        ss = strtok(NULL, d);  
    }
}
int main() {
    char arr1[100]; 
    printf("Enter string : ");
    fgets(arr1, sizeof(arr1), stdin);
    arr1[strcspn(arr1, " ")] = ',';
    arr1[strcspn(arr1, "\n")] = ',';
    char *d = ",";  

    split(arr1, d);
  
    return 0;
}