
int main() {
    int n, i, num;
    int pares = 0, impares = 0;

    printf("Ingresa la cantidad de números a verificar:\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Ingresa el número %d: ", i + 1);
        scanf("%d", &num);

        if (num % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Cantidad de números pares: %d\n", pares);
    printf("Cantidad de números impares: %d\n", impares);

    return 0;
}
