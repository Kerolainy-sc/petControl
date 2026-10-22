#include <stdio.h>
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

float precos[4] = {35.0, 45.0, 80.0, 60.0};

/* Busca um tutor pelo codigo. Retorna a posicao ou -1. */
int buscarTutor(int codigo) {
    int i;
    for (i = 0; i < qtdTutores; i++) {
        if (tutores[i].codigo == codigo) {
            return i;
        }
    }
    return -1;
}

/* Busca um animal pelo codigo. Retorna a posicao ou -1. */
int buscarAnimal(int codigo) {
    int i;
    for (i = 0; i < qtdAnimais; i++) {
        if (animais[i].codigo == codigo) {
            return i;
        }
    }
    return -1;
}

void cadastrarTutor(void){
    Tutor novo;

    if (qtdTutores == MAX) {
        printf("Limite de tutores atingido.\n");
        return;
    }

    printf("Codigo do tutor: ");
    scanf("%d", &novo.codigo);

    if (novo.codigo <= 0 || buscarTutor(novo.codigo) != -1) {
        printf("Codigo invalido ou ja cadastrado.\n");
        return;
    }

    printf("Nome completo: ");
    fgets(novo.nome,50,stdin);
    novo.nome[strcspn(novo.nome, "\n")] = '\0';

    printf("Telefone: ");
    fgets(novo.telefone,50,stdin);
    novo.telefone[strcspn(novo.telefone, "\n")] = '\0';
    
    tutores[qtdTutores] = novo;
    qtdTutores++;
    printf("Tutor cadastrado!\n");
}

void cadastrarAnimal(void){
    Animal novo;

    if (qtdAnimais == MAX) {
        printf("Limite de animais atingido.\n");
        return;
    }

    printf("Codigo do animal: ");
    scanf("%d", &novo.codigo);

    if (novo.codigo <= 0 || buscarAnimal(novo.codigo) != -1) {
        printf("Codigo invalido ou ja cadastrado.\n");
        return;
    }

    printf("Nome do animal: ");
    scanf(" %49[^\n]", novo.nome);

    printf("Especie: ");
    scanf(" %29[^\n]", novo.especie);

    printf("Idade: ");
    scanf("%d", &novo.idade);

    if (novo.idade < 0 || novo.idade > 100) {
        printf("Idade invalida. Cadastro cancelado.\n");
        return;
    }

    printf("Codigo do tutor responsavel: ");
    scanf("%d", &novo.codigoTutor);

    if (buscarTutor(novo.codigoTutor) == -1) {
        printf("Tutor nao encontrado. Cadastre o tutor primeiro.\n");
        return;
    }

    animais[qtdAnimais] = novo;
    qtdAnimais++;
    printf("Animal cadastrado!\n");
}

void listarCadastros();
void buscarRegistro();
void registrarAtendimento();
void alterarCadastro();
void relatorio();
void mostrarServicos();
void lerTexto(char destino[], int tamanho);

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
    getchar();   

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

/*void cadastrarTutor() {
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

    printf("Animal cadastrado com sucesso!\n");
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
    char cpf[15];
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
    lerTexto(atendimentos[totalAtendimentos].servico, 50);
    printf("Digite o CPF do tutor: ");
    lerTexto(atendimentos[totalAtendimentos].tutorCpf, 15);
    printf("Digite o nome do animal: ");
    lerTexto(atendimentos[totalAtendimentos].animalNome, 50);
    printf("Digite o valor do atendimento: ");
    scanf("%f", &atendimentos[totalAtendimentos].valor);
    getchar();

    totalAtendimentos++;

    printf("Atendimento registrado com sucesso!\n");
}

void alterarCadastro() {
    char cpf[15];
    printf("Digite o CPF do tutor a ser alterado: ");
    lerTexto(cpf, 15);

    for (int i = 0; i < totalTutores; i++) {
        if (strcmp(tutores[i].cpf, cpf) == 0) {
            printf(" ------ ALTERAR CADASTRO DE TUTOR ------\n");
            printf("Digite o novo nome do tutor: ");
            lerTexto(tutores[i].nome, 50);
            printf("Digite o novo telefone do tutor: ");
            lerTexto(tutores[i].telefone, 15);
            printf("Digite o novo endereco do tutor: ");
            lerTexto(tutores[i].endereco, 100);
            printf("Digite o novo email do tutor: ");
            lerTexto(tutores[i].email, 50);

            printf("Cadastro alterado com sucesso!\n");
            return;
        }
    }

    printf("Tutor nao encontrado.\n");
}

void relatorio() {
    printf(" ------ RELATORIO DE ATENDIMENTOS ------\n");
    for (int i = 0; i < totalAtendimentos; i++) {
        printf("Hora: %s\n", atendimentos[i].hora);
        printf("Servico: %s\n", atendimentos[i].servico);
        printf("Codigo do tutor: %s\n", atendimentos[i].tutorCpf);
        printf("Nome do animal: %s\n", atendimentos[i].animalNome);
        printf("Valor: %.2f\n", atendimentos[i].valor);
        printf("-----------------------------\n");
    }
}

void mostrarServicos() {
    printf(" ------ SERVICOS DISPONIVEIS ------\n");
    printf("1 - Banho\n");
    printf("2 - Tosa\n");
    printf("3 - Veterinario\n");
    printf("4 - Vacina\n");
    printf("5 - plano de saude\n");
    printf("6 - Consulta\n");
    printf("7 - Produtos higienicos\n");
    printf("8 - Produtos alimenticios\n");
    printf("9 - creche\n");
    printf("10 - plano adestramento\n");
    printf("11 - taxi dog\n");
    printf("-----------------------------\n");
 // ME MATEI PRA ENTENDER E FAZER ESSA BOMBAAAAAAAAAAAAAAAA, MAS NAO SEI S ETA CERTINHO MESMO, MAS TA FUNCIONANDO, SE DER MERDA, ME MATA
 //Vamos usar as funções la encima para não dar erro, já que elas foi chamadas no switch!

}*/
