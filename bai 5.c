#include <stdio.h>
int main(){
    int dai, rong, dtich;
    float cvi;
    printf("Mời nhập vào chiều dài của hình chữ nhật:");
    scanf("%d", dai);
    printf("Mời nhập vào chiều rộng của hình chữ nhật:");
    scanf("%d", rong);
    cvi = (dai+rong)/2;
    dtich = dai*rong;
    printf("Chu vi của hình chữ nhật là: %lf\n", cvi);
    printf("Diện tích của hình chữ nhật là: %d", dtich);
    return 0;
}