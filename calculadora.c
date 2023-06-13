int soma(int num1, int num2){
    int resultado;
    resultado = num1 + num2;
    return resultado;
}

int subtracao(int num1, int num2){
    int resultado;
    resultado = num1 + num2;
    return resultado;
}

int multiplicacao(int num1, int num2){
    int resultado;
    resultado = num1*num2;
    return resultado;
}
int main(){
	int n1;
	int n2;
	char operacao;

	printf("Digite o caractere correspondente a operacao a ser executada: + (soma) - (subtracao) * (multiplicacao) / (divisao)\n");
	scanf("%c", &operacao);

	printf("Digite um numero: \n");
	scanf("%d", &n1);

	printf("Digite outro numero: \n");
	scanf("%d", &n2);

	switch(operacao){
        case '+': printf("O resultado e: %d\n", soma(n1, n2));
        case '-': printf("O resultado e: %d\n", subtracao(n1, n2));
        case '*': printf("O resultado e: %d\n", multiplicacao(n1, n2));
        case '/': printf("O resultado e: %d\n", divisao(n1, n2));
        default: printf("Operacao invalida\n");
	}

    return 0;
}

