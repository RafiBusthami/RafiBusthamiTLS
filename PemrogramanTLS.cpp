#include <cstdio>  
#include <cmath>  

int main() {
    float num1, num2, result = 0;
    char operation;
    bool valid = true;

    
    std::printf("Masukkan angka pertama: ");
    std::scanf("%f", &num1);

    std::printf("Masukkan operator (+, -, *, /, ^): ");
    std::scanf(" %c", &operation);

    std::printf("Masukkan angka kedua: ");
    std::scanf("%f", &num2);

    
    if (operation == '+' || operation == '-' || operation == '*' || (operation == '/' && num2 != 0) || operation == '^') {
        result = (operation == '+') ? num1 + num2 :
                 (operation == '-') ? num1 - num2 :
                 (operation == '*') ? num1 * num2 :
                 (operation == '/') ? num1 / num2 :
                 std::pow(num1, num2);
    } else {
        valid = false;  
    }

    
    if (valid) {
        std::printf("Hasil: %.2f\n", result);
    } else {
        std::printf("Error: Operator tidak valid atau pembagian dengan nol.\n");
    }

    return 0;
}
