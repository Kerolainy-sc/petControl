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
    int tipo, codigo, pos;

    printf("1 - Buscar tutor\n");
    printf("2 - Buscar animal\n");
    printf("Escolha: ");
    tipo = lerInt();

    printf("Digite o codigo: ");
    codigo = lerInt();

    if (tipo == 1) {
        pos = buscarTutor(codigo);

        if (pos == -1) {
            printf("Tutor nao encontrado.\n");
        } else {
            printf("Codigo: %d\n", tutores[pos].codigo);
            printf("Nome: %s\n", tutores[pos].nome);
            printf("Telefone: %s\n", tutores[pos].telefone);
        }
    } else if (tipo == 2) {
        pos = buscarAnimal(codigo);

        if (pos == -1) {
            printf("Animal nao encontrado.\n");
        } else {
            printf("Codigo: %d\n", animais[pos].codigo);
            printf("Nome: %s\n", animais[pos].nome);
            printf("Especie: %s\n", animais[pos].especie);
            printf("Idade: %d\n", animais[pos].idade);
            printf("Codigo do tutor: %d\n", animais[pos].codigoTutor);
        }
    } else {
        printf("Opcao invalida.\n");
    }
}

void registrarAtendimento() {
    Atendimento novo;
    int pos;

    if (qntAtendimentos == MAX) {
        printf("Limite de atendimentos atingido.\n");
        return;
    }

    printf("Codigo do animal: ");
    novo.codigoAnimal = lerInt();

    pos = buscarAnimal(novo.codigoAnimal);
    if (pos == -1) {
        printf("Animal nao encontrado.\n");
        return;
    }

    mostrarServicos();
    printf("Escolha o servico (1 a 4): ");
    novo.servico = lerInt();

    if (novo.servico < 1 || novo.servico > 4) {
        printf("Servico invalido.\n");
        return;
    }

    printf("Quantidade: ");
    novo.quantidade = lerInt();

    if (novo.quantidade <= 0) {
        printf("Quantidade invalida.\n");
        return;
    }

    novo.total = precos[novo.servico - 1] * novo.quantidade;

    atendimentos[qntAtendimentos] = novo;
    qntAtendimentos++;

    printf("Atendimento registrado! Total: R$ %.2f\n", novo.total);
}

void alterarCadastro() {
    int codigo, pos;

    printf("Codigo do tutor que deseja alterar: ");
    codigo = lerInt();

    pos = buscarTutor(codigo);
    if (pos == -1) {
        printf("Tutor nao encontrado.\n");
        return;
    }

    printf("Nome atual: %s\n", tutores[pos].nome);
    printf("Novo nome: ");
    lerTexto(tutores[pos].nome, 50);

    printf("Telefone atual: %s\n", tutores[pos].telefone);
    printf("Novo telefone: ");
    lerTexto(tutores[pos].telefone, 20);

    printf("Tutor alterado com sucesso!\n");
}

void relatorio() {
    float soma = 0;
    int pos;

    printf("\n------ RELATORIO ------\n");
    printf("Tutores cadastrados: %d\n", qntTutores);
    printf("Animais cadastrados: %d\n", qntAnimais);
    printf("Atendimentos realizados: %d\n", qntAtendimentos);

    if (qntAtendimentos == 0) {
        printf("Nenhum atendimento registrado.\n");
        return;
    }

    printf("\n--- ATENDIMENTOS ---\n");
    for (int i = 0; i < qntAtendimentos; i++) {
        pos = buscarAnimal(atendimentos[i].codigoAnimal);

        printf("%d) Animal: %s | Servico: %s | Qtd: %d | Total: R$ %.2f\n",
               i + 1,
               animais[pos].nome,
               servicos[atendimentos[i].servico - 1],
               atendimentos[i].quantidade,
               atendimentos[i].total);

        soma = soma + atendimentos[i].total;
    }

    printf("\nTOTAL ARRECADADO: R$ %.2f\n", soma);
}

void mostrarServicos() {
    printf("\n------ SERVICOS DISPONIVEIS ------\n");
    for (int i = 0; i < 4; i++) {
        printf("%d - %s: R$ %.2f\n", i + 1, servicos[i], precos[i]);
    }
}