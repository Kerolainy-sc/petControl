#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10

typedef struct {
    int codigo;
    char nome[50];
    char telefone[20];
} Tutor;


typedef struct {
    int codigo;
    char nome[50];
    char especie[30];
    int idade;
    int codigoTutor;
} Animal;

typedef struct {
    int codigoAnimal;
    int servico;
    int quantidade;
    float total;
} Atendimento;

int qntTutores = 0;
int qntAnimais = 0;
int qntAtendimentos = 0;

char servicos[4][30] = {
    "Banho", "Tosa", "Consulta veterinaria", "Vacinacao"
};

// Vetores adicionados para servir como banco de dados do sistema, por isso tava dando erro de "variavel nao declarada" no main.
Tutor tutores[MAX];
Animal animais[MAX];
Atendimento atendimentos[MAX];

float precos[4] = {35.0, 45.0, 80.0, 60.0};

/* Busca um tutor pelo codigo. Retorna a posicao ou -1. */
int buscarTutor(int codigo) {
    int i;
    for (i = 0; i < qntTutores; i++) {
        if (tutores[i].codigo == codigo) {
            return i;
        }
    }
    return -1;
}

/* Busca um animal pelo codigo. Retorna a posicao ou -1. */
int buscarAnimal(int codigo) {
    int i;
    for (i = 0; i < qntAnimais; i++) {
        if (animais[i].codigo == codigo) {
            return i;
        }
    }
    return -1;
}

/* Le uma linha de texto e remove o \n do final. */
void lerTexto(char destino[], int tamanho) {
    fgets(destino, tamanho, stdin);
    destino[strcspn(destino, "\n")] = '\0';
}

/* Le uma linha e converte para inteiro (nao deixa lixo no buffer). */
int lerInt(void) {
    char buf[30];
    fgets(buf, sizeof(buf), stdin);
    return atoi(buf);
}

void cadastrarTutor(void) {
    Tutor novo;

    if (qntTutores == MAX) {
        printf("Limite de tutores atingido.\n");
        return;
    }

    novo.codigo = qntTutores + 1;
    printf("Codigo do tutor (gerado automaticamente): %d\n", novo.codigo);

    printf("Nome completo: ");
    lerTexto(novo.nome, 50);

    printf("Telefone: ");
    lerTexto(novo.telefone, 20);

    tutores[qntTutores] = novo;
    qntTutores++;
    printf("Tutor cadastrado! SEU CODIGO E: %d\n", novo.codigo);
}

void cadastrarAnimal(void) {
    Animal novo;

    if (qntAnimais == MAX) {
        printf("Limite de animais atingido.\n");
        return;
    }

    novo.codigo = qntAnimais + 1;
    printf("Codigo do animal (gerado automaticamente): %d\n", novo.codigo);

    //Claudinho pedio pra trocar por fgets//

    printf("Nome do animal: ");
    lerTexto(novo.nome, 50);

    printf("Especie: ");
    lerTexto(novo.especie, 30);

    printf("Idade: ");
    novo.idade = lerInt();
    if (novo.idade < 0 || novo.idade > 100) {
        printf("Idade invalida. Cadastro cancelado.\n");
        return;
    }

    printf("Codigo do tutor responsavel: ");
    novo.codigoTutor = lerInt();
    if (buscarTutor(novo.codigoTutor) == -1) {
        printf("Tutor nao encontrado. Cadastre o tutor primeiro.\n");
        return;
    }

    animais[qntAnimais] = novo;
    qntAnimais++;
    printf("Animal cadastrado! CODIGO: %d\n", novo.codigo);
}

// Protótipos das funções auxiliares e do menu

void listarCadastros();
void buscarRegistro();
void registrarAtendimento();
void alterarCadastro();
void relatorio();
void mostrarServicos();

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
        opcao = lerInt();

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

// =========================================================================
// CORREÇÃO: Escoramento das funções do menu para o compilador não quebrar.


void listarCadastros() {
    printf("\n------ LISTA DE TUTORES ------\n");
    if (qntTutores == 0) printf("Nenhum tutor cadastrado.\n");
    for (int i = 0; i < qntTutores; i++) {
        printf("Codigo: %d | Nome: %s | Tel: %s\n", tutores[i].codigo, tutores[i].nome, tutores[i].telefone);
    }

    printf("\n------ LISTA DE ANIMAIS ------\n");
    if (qntAnimais == 0) printf("Nenhum animal cadastrado.\n");
    for (int i = 0; i < qntAnimais; i++) {
        printf("Codigo: %d | Nome: %s | Especie: %s | Idade: %d | Dono (ID): %d\n", 
               animais[i].codigo, animais[i].nome, animais[i].especie, animais[i].idade, animais[i].codigoTutor);
    }
}

void buscarRegistro() {
    printf("Funcao de buscar registro em desenvolvimento...\n");
}

void registrarAtendimento() {
    printf("Funcao de registrar atendimento em desenvolvimento...\n");
}

void alterarCadastro() {
    printf("Funcao de alterar cadastro em desenvolvimento...\n");
}

void relatorio() {
    printf("Funcao de relatorio em desenvolvimento...\n");
}

void mostrarServicos() {
    printf("\n------ SERVICOS DISPONIVEIS ------\n");
    for (int i = 0; i < 4; i++) {
        printf("%d - %s: R$ %.2f\n", i + 1, servicos[i], precos[i]);
    }
}

/* =========================================================================
   //CORREÇÃO: Alterado para '/*' para abrir corretamente o bloco isolado
   =========================================================================

void cadastrarTutor() {
    if (totalTutores >= MAX_TUTORES) {
        printf("Limite de tutores atingido.\n");
        return;
    }

    printf(" ------ CADASTRO DE TUTOR ------\n");
    printf("Digite o codigo do tutor (tres primeiros digitos do CPF): ");
    lerTexto(tutores[totalTutores].cpf, 15);
    printf("Digite o nome do tutor: ");
    lerTexto(tutores[totalTutores].nome, 50);
    printf("Digite o telefone do tutor: ");
    lerTexto(tutores[totalTutores].telefone, 15);
    printf("Digite o endereco do tutor: ");
    lerTexto(tutores[totalTutores].endereco, 100);
    printf("Digite o email do tutor: ");
    lerTexto(tutores[totalTutores].email, 50);  
    totalTutores++;

    printf("Tutor cadastrado com sucesso!\n");
}

void cadastrarAnimal() {
    if (totalAnimais >= MAX_ANIMAIS) {
        printf("Limite de animais atingido.\n");
        return;
    }
    printf(" ------ CADASTRO DE ANIMAL ------\n");
    printf("Digite o nome do animal: ");
    lerTexto(animais[totalAnimais].nome, 50);
    printf("Digite a especie do animal: ");
    lerTexto(animais[totalAnimais].especie, 20);
    printf("Digite a raca do animal: ");
    lerTexto(animais[totalAnimais].raca, 20);
    printf("Digite a idade do animal: ");
    scanf("%d", &animais[totalAnimais].idade);
    getchar();   
    printf("Digite o peso do animal: ");
    scanf("%f", &animais[totalAnimais].peso);
    getchar();  
    printf("Digite o CPF do tutor do animal: ");
    lerTexto(animais[totalAnimais].tutorCpf, 15);

    totalAnimais++;

    printf("Animal cadastrado !\n");

}

void listarCadastros() {
    printf(" ------ LISTA DE TUTORES ------\n");
    for (int i = 0; i < totalTutores; i++) {
        printf("Codigo: %s\n", tutores[i].cpf);
        printf("Nome: %s\n", tutores[i].nome);
        printf("Telefone: %s\n", tutores[i].telefone);
        printf("Endereco: %s\n", tutores[i].endereco);
        printf("Email: %s\n", tutores[i].email);
        printf("-----------------------------\n");
    }

    printf(" ------ LISTA DE ANIMAIS ------\n");
    for (int i = 0; i < totalAnimais; i++) {
        printf("Nome: %s\n", animais[i].nome);
        printf("Especie: %s\n", animais[i].especie);
        printf("Raca: %s\n", animais[i].raca);
        printf("Idade: %d\n", animais[i].idade);
        printf("Peso: %.2f\n", animais[i].peso);
        printf("Codigo do tutor: %s\n", animais[i].tutorCpf);
        printf("-----------------------------\n");
    }
}   

void buscarRegistro() {
    char cpf;
    printf("Digite o CPF do tutor a ser buscado: ");
    lerTexto(cpf, 15);

    for (int i = 0; i < totalTutores; i++) {
        if (strcmp(tutores[i].cpf, cpf) == 0) {
            printf(" ------ TUTOR ENCONTRADO ------\n");
            printf("Codigo: %s\n", tutores[i].cpf);
            printf("Nome: %s\n", tutores[i].nome);
            printf("Telefone: %s\n", tutores[i].telefone);
            printf("Endereco: %s\n", tutores[i].endereco);
            printf("Email: %s\n", tutores[i].email);
            printf("-----------------------------\n");
            return;
        }
    }

    printf("Tutor nao encontrado.\n");
}

void registrarAtendimento() {
    if (totalAtendimentos >= MAX_ATENDIMENTOS) {
        printf("Limite de atendimentos atingido.\n");
        return;
    }

    printf(" ------ REGISTRO DE ATENDIMENTO ------\n");
    printf("Digite a hora do atendimento (HH:MM): ");
    lerTexto(atendimentos[totalAtendimentos].hora, 6);
    printf("Digite o servico realizado: ");

}
*/