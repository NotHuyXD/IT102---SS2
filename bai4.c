#include <stdio.h>
int main(){
    int canh, cvi, dtich;
    printf("Mời nhập vào độ dài của cạnh hình vuông:");
    scanf("%d", canh);
    cvi = canh * 4;
    dtich = canh*canh;
    printf("Chu vi của hình vuông là: %d\n", cvi);
    printf("Diện tích của hình vuông là: %d\n", dtich);
    return 0;
}