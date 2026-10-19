#include <stdio.h>
#include <string.h>
#define MAX_TUTORES 100
#define MAX_ANIMAIS 100
#define MAX_ATENDIMENTOS 100

//STRUCTS = FICHAS DE IDENTIFICAÇÃO//

struct Tutor {
    char nome[50];
    char telefone[15];
    char endereco[100];
    char email[50];
    char cpf[15];
};

struct Animal {
    char nome[50];
    char especie[20];
    char raca[20];
    int idade;
    float peso;
    char tutorCpf[15];
};

    char hora[6];
    char servico[50];
    char tutorCpf[15];
    char animalNome[50];
    float valor;
};

//VARIAVEIS GLOBAIS//

struct Tutor tutores[MAX_TUTORES];
int totalTutores = 0;
struct Animal animais[MAX_ANIMAIS];
int totalAnimais = 0;
struct Atendimento atendimentos[MAX_ATENDIMENTOS];   
int totalAtendimentos = 0;




int main(void) {

    int opcao;

    do {
        printf("\n===== PETSHOP ;)=====\n");
        printf("1 - Cadastrar tutor\n");
        printf("2 - Cadastrar animal\n");
        printf("3 - Listar cadastros\n");
        printf("4 - Buscar tutor ou animal\n");
        printf("5 - Registrar atendimento\n");
        printf("6 - Alterar tutor\n");
        printf("7 - Relatorio\n");
        printf("8 - Ver servicos\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: cadastrarTutor(); break;
            case 2: cadastrarAnimal(); break;
            case 3: listarCadastros(); break;
            case 4: buscarRegistro(); break;
            case 5: registrarAtendimento(); break;
            case 6: alterarCadastro(); break;
            case 7: relatorio(); break;
            case 8: mostrarServicos(); break;
            case 0: printf("Sistema encerrado.\n"); break;
            default: printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0); 

    return 0;
}

// IMPLEMENTAÇÃO DAS FUNÇÕES
void cadastrarTutor(void)       { printf("Cadastrar tutor\n"); }
void cadastrarAnimal(void)      { printf("Cadastrar animal\n"); }
void listarCadastros(void)      { printf("Listar cadastros\n"); }
void buscarRegistro(void)       { printf("Buscar tutor ou animal\n"); }
void registrarAtendimento(void) { printf("Registrar atendimento\n"); }
void alterarCadastro(void)      { printf("Alterar tutor\n"); }
void relatorio(void)            { printf("Relatorio\n"); }
void mostrarServicos(void)      { printf("Ver servicos\n"); }