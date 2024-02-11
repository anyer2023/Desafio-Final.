#include <cmath>
#include <ctime>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    srand(Time(0));
    int numero[20], primo[20], contador = 0;

    std::cout << "Generación de 20 números de forma aleatoria" << std::endl;
    for (int i = 0; i < 20; i++) {
        numero[i] = rand() % 100;
    }

    for (int n : numero) {
        if (isPrime(n)) {
            primo[contador] = n;
            contador++;
        }
    }

    std::cout << "Números generados:" << std::endl;
    for (int n : numero) {
        std::cout << n << " ";
    }

    std::cout << std::endl << "Números primos:" << std::endl;
    for (int n : primo) {
        std::cout << n << " ";
    }

    std::cout << std::endl << "Números primos:" << std::endl;
    for (int i = 0; i < contador; i++) {
        std::cout << primo[i] << " ";
    }

    return 0;
}
