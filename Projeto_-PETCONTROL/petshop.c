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

Tutor tutores[MAX];
Animal animais[MAX];
Atendimento atendimentos[MAX];

int qtdTutores = 0;
int qtdAnimais = 0;
int qtdAtendimentos = 0;

char servicos[4][30] = {
    "Banho",
    "Tosa",
    "Consulta veterinaria",
    "Vacinacao"
};

float precos[4] = {35.0, 45.0, 80.0, 60.0};

void limparEntrada(void) {
    int c;

    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

void lerTexto(char texto[], int tamanho) {
    if (fgets(texto, tamanho, stdin) != NULL) {
        texto[strcspn(texto, "\n")] = '\0';
    }
}

int buscarTutor(int codigo) {
    int i;

    for (i = 0; i < qtdTutores; i++) {
        if (tutores[i].codigo == codigo) {
            return i;
        }
    }

    return -1;
}

int buscarAnimal(int codigo) {
    int i;

    for (i = 0; i < qtdAnimais; i++) {
        if (animais[i].codigo == codigo) {
            return i;
        }
    }

    return -1;
}

void cadastrarTutor(void) {
    Tutor novo;

    if (qtdTutores >= MAX) {
        printf("Limite de tutores atingido.\n");
        return;
    }

    printf("\n--- CADASTRO DE TUTOR ---\n");
    printf("Codigo do tutor: ");

    if (scanf("%d", &novo.codigo) != 1) {
        printf("Codigo invalido.\n");
        limparEntrada();
        return;
    }

    limparEntrada();

    if (novo.codigo <= 0 || buscarTutor(novo.codigo) != -1) {
        printf("Codigo invalido ou ja cadastrado.\n");
        return;
    }

    printf("Nome completo: ");
    lerTexto(novo.nome, sizeof(novo.nome));

    printf("Telefone: ");
    lerTexto(novo.telefone, sizeof(novo.telefone));

    tutores[qtdTutores] = novo;
    qtdTutores++;

    printf("Tutor cadastrado com sucesso!\n");
}

void cadastrarAnimal(void) {
    Animal novo;

    if (qtdAnimais >= MAX) {
        printf("Limite de animais atingido.\n");
        return;
    }

    printf("\n--- CADASTRO DE ANIMAL ---\n");
    printf("Codigo do animal: ");

    if (scanf("%d", &novo.codigo) != 1) {
        printf("Codigo invalido.\n");
        limparEntrada();
        return;
    }

    limparEntrada();

    if (novo.codigo <= 0 || buscarAnimal(novo.codigo) != -1) {
        printf("Codigo invalido ou ja cadastrado.\n");
        return;
    }

    printf("Nome do animal: ");
    lerTexto(novo.nome, sizeof(novo.nome));

    printf("Especie: ");
    lerTexto(novo.especie, sizeof(novo.especie));

    printf("Idade: ");

    if (scanf("%d", &novo.idade) != 1) {
        printf("Idade invalida.\n");
        limparEntrada();
        return;
    }

    limparEntrada();

    if (novo.idade < 0 || novo.idade > 100) {
        printf("Idade invalida.\n");
        return;
    }

    printf("Codigo do tutor responsavel: ");

    if (scanf("%d", &novo.codigoTutor) != 1) {
        printf("Codigo invalido.\n");
        limparEntrada();
        return;
    }

    limparEntrada();

    if (buscarTutor(novo.codigoTutor) == -1) {
        printf("Tutor nao encontrado. Cadastre o tutor primeiro.\n");
        return;
    }

    animais[qtdAnimais] = novo;
    qtdAnimais++;

    printf("Animal cadastrado com sucesso!\n");
}

void listarCadastros(void) {
    int i;

    printf("\n--- TUTORES CADASTRADOS ---\n");

    if (qtdTutores == 0) {
        printf("Nenhum tutor cadastrado.\n");
    }

    for (i = 0; i < qtdTutores; i++) {
        printf("Codigo: %d | Nome: %s | Telefone: %s\n",
               tutores[i].codigo,
               tutores[i].nome,
               tutores[i].telefone);
    }

    printf("\n--- ANIMAIS CADASTRADOS ---\n");

    if (qtdAnimais == 0) {
        printf("Nenhum animal cadastrado.\n");
    }

    for (i = 0; i < qtdAnimais; i++) {
        printf("Codigo: %d | Nome: %s | Especie: %s | Idade: %d | Tutor: %d\n",
               animais[i].codigo,
               animais[i].nome,
               animais[i].especie,
               animais[i].idade,
               animais[i].codigoTutor);
    }
}

void buscarRegistro(void) {
    int tipo, codigo, posicao;

    printf("\n1 - Buscar tutor\n");
    printf("2 - Buscar animal\n");
    printf("Escolha: ");

    if (scanf("%d", &tipo) != 1) {
        printf("Opcao invalida.\n");
        limparEntrada();
        return;
    }

    limparEntrada();

    printf("Digite o codigo: ");

    if (scanf("%d", &codigo) != 1) {
        printf("Codigo invalido.\n");
        limparEntrada();
        return;
    }

    limparEntrada();

    if (tipo == 1) {
        posicao = buscarTutor(codigo);

        if (posicao == -1) {
            printf("Tutor nao encontrado.\n");
        } else {
            printf("Codigo: %d | Nome: %s | Telefone: %s\n",
                   tutores[posicao].codigo,
                   tutores[posicao].nome,
                   tutores[posicao].telefone);
        }
    } else if (tipo == 2) {
        posicao = buscarAnimal(codigo);

        if (posicao == -1) {
            printf("Animal nao encontrado.\n");
        } else {
            printf("Codigo: %d | Nome: %s | Especie: %s | Idade: %d\n",
                   animais[posicao].codigo,
                   animais[posicao].nome,
                   animais[posicao].especie,
                   animais[posicao].idade);
        }
    } else {
        printf("Opcao invalida.\n");
    }
}

void mostrarServicos(void) {
    int i;

    printf("\n--- SERVICOS DISPONIVEIS ---\n");

    for (i = 0; i < 4; i++) {
        printf("%d - %s: R$ %.2f\n",
               i + 1, servicos[i], precos[i]);
    }
}

void registrarAtendimento(void) {
    Atendimento novo;
    int posicao;

    if (qtdAtendimentos >= MAX) {
        printf("Limite de atendimentos atingido.\n");
        return;
    }

    printf("\n--- REGISTRAR ATENDIMENTO ---\n");
    printf("Codigo do animal: ");

    if (scanf("%d", &novo.codigoAnimal) != 1) {
        printf("Codigo invalido.\n");
        limparEntrada();
        return;
    }

    limparEntrada();

    posicao = buscarAnimal(novo.codigoAnimal);

    if (posicao == -1) {
        printf("Animal nao encontrado.\n");
        return;
    }

    mostrarServicos();

    printf("Escolha o servico (1 a 4): ");

    if (scanf("%d", &novo.servico) != 1) {
        printf("Servico invalido.\n");
        limparEntrada();
        return;
    }

    limparEntrada();

    if (novo.servico < 1 || novo.servico > 4) {
        printf("Servico invalido.\n");
        return;
    }

    novo.quantidade = 1;

    if (novo.servico == 1 || novo.servico == 2) {
        printf("Quantidade: ");

        if (scanf("%d", &novo.quantidade) != 1) {
            printf("Quantidade invalida.\n");
            limparEntrada();
            return;
        }

        limparEntrada();

        if (novo.quantidade < 1) {
            printf("Quantidade invalida.\n");
            return;
        }
    }

    novo.total = precos[novo.servico - 1] * novo.quantidade;

    atendimentos[qtdAtendimentos] = novo;
    qtdAtendimentos++;

    printf("Atendimento registrado para %s.\n",
           animais[posicao].nome);

    printf("Total: R$ %.2f\n", novo.total);
}

void alterarTutor(Tutor *tutor) {
    printf("Novo nome: ");
    lerTexto(tutor->nome, sizeof(tutor->nome));

    printf("Novo telefone: ");
    lerTexto(tutor->telefone, sizeof(tutor->telefone));

    printf("Cadastro alterado com sucesso!\n");
}

void alterarCadastro(void) {
    int codigo, posicao;

    printf("Codigo do tutor que deseja alterar: ");

    if (scanf("%d", &codigo) != 1) {
        printf("Codigo invalido.\n");
        limparEntrada();
        return;
    }

    limparEntrada();

    posicao = buscarTutor(codigo);

    if (posicao == -1) {
        printf("Tutor nao encontrado.\n");
    } else {
        alterarTutor(&tutores[posicao]);
    }
}

void relatorio(void) {
    int i;
    int servico;
    int maisUsado = 0;
    int quantidade[4] = {0, 0, 0, 0};
    float faturamento = 0.0;

    for (i = 0; i < qtdAtendimentos; i++) {
        servico = atendimentos[i].servico - 1;

        quantidade[servico]++;
        faturamento += atendimentos[i].total;
    }

    printf("\n--- RELATORIO DA SESSAO ---\n");
    printf("Atendimentos registrados: %d\n", qtdAtendimentos);
    printf("Faturamento total: R$ %.2f\n", faturamento);

    if (qtdAtendimentos == 0) {
        printf("Nenhum atendimento registrado ainda.\n");
        return;
    }

    for (i = 1; i < 4; i++) {
        if (quantidade[i] > quantidade[maisUsado]) {
            maisUsado = i;
        }
    }

    printf("Servico mais utilizado: %s\n",
           servicos[maisUsado]);
}

int main(void) {
    int opcao;

    do {
        printf("\n===== PETCONTROL =====\n");
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

        if (scanf("%d", &opcao) != 1) {
            printf("Digite uma opcao numerica.\n");
            limparEntrada();
            opcao = -1;
            continue;
        }

        limparEntrada();

        switch (opcao) {
            case 1:
                cadastrarTutor();
                break;

            case 2:
                cadastrarAnimal();
                break;

            case 3:
                listarCadastros();
                break;

            case 4:
                buscarRegistro();
                break;

            case 5:
                registrarAtendimento();
                break;

            case 6:
                alterarCadastro();
                break;

            case 7:
                relatorio();
                break;

            case 8:
                mostrarServicos();
                break;

            case 0:
                printf("Sistema encerrado.\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
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
