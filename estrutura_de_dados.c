#include <stdio.h>
#include <string.h>


struct Endereco {
    char rua [50];
    int numero;
    char cidade [50];
};

struct Funcionario {
    int matricula;
    char nome [50];
    int idade;
    float salario;
    struct Endereco endereco;
};

int main() {

    struct Funcionario f1;


    printf("=== Cadastro de Funcionario ===\n");
    printf("Digite a matricula: ");
    scanf("%d" , &f1.matricula);

    getchar();

    printf("Digite o nome completo:");
    fgets(f1.nome, 50, stdin);
    f1.nome[strcspn(f1.nome, "\n")] = 0;

    printf("Digite a idade: ");
    scanf("%d", &f1.idade);

    printf("Digite o salario:");
    scanf("%f" , &f1.salario);

getchar();

    printf("Digite a rua: ");
    fgets (f1.endereco.rua, 50, stdin);
    f1.endereco.rua[strcspn(f1.endereco.rua, "\n")] = 0;

    printf("Digite o numero: ");
    scanf("%d", &f1.endereco.numero);

getchar();

    printf("Digite a cidade:");
    fgets(f1.endereco.cidade, 50, stdin);
    f1.endereco.cidade[strcspn(f1.endereco.cidade, "\n")];

    printf("\n=== Dados do Funcionario Cadastrado ===\n");
    printf("Matricula: %d\n", f1.matricula);
    printf("Nome: %s\n", f1.nome);
    printf("Idade: %d\n", f1.idade);
    printf("Salario: %.2f\n", f1.salario);
    printf("Endereco: %s, %d - %s\n", f1.endereco.rua,f1.endereco.numero,f1.endereco.cidade);

return 0;
}