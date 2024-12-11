#include <string.h>

int main() {
    char word[100];
    
    printf("Moi ban nhap vao chuoi ky tu: \n");
    fgets(word, sizeof(word), stdin);

    int length = strlen(word);
    printf("Ky tu ban vua nhap la: %s \n", word);
    word[0] = 'i'; 
    for (int i = 0; i < length; i++) {
        printf("%c", word[i]);
    }

    return 0;
}
