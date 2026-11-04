# 🍒 Hello Cherry Pet

### Sistema de gerenciamento para Pet Shop e Clínica Veterinária

\<p align="center">
&#x20; \<img src="[https://img.shields.io/badge/Linguagem-C-BDF2D4?style=for-the-badge&logo=c&logoColor=49313D](https://img.shields.io/badge/Linguagem-C-BDF2D4?style=for-the-badge\&logo=c\&logoColor=49313D)" />
&#x20; \<img src="[https://img.shields.io/badge/Compilador-GCC-E94B78?style=for-the-badge&logo=gnu&logoColor=ffffff](https://img.shields.io/badge/Compilador-GCC-E94B78?style=for-the-badge\&logo=gnu\&logoColor=ffffff)" />
&#x20; \<img src="[https://img.shields.io/badge/Projeto-Acadêmico-F7A8C4?style=for-the-badge](https://img.shields.io/badge/Projeto-Acadêmico-F7A8C4?style=for-the-badge)" />
\</p>

\<p align="center">
&#x20; \<b>♡ Cuidando dos detalhes, organizando cada atendimento. ♡\</b>
\</p>

## 🌷 Sobre o projeto

O **Hello Cherry Pet** é um sistema de gerenciamento desenvolvido em linguagem C, com o objetivo de simular o funcionamento de um pet shop integrado a uma clínica veterinária.

O projeto foi desenvolvido como parte da avaliação final da disciplina de **Lógica de Programação em C**, da Universidade Católica de Brasília (UCB).

A aplicação funciona diretamente no terminal e permite organizar informações de tutores e seus animais, consultar serviços disponíveis, registrar atendimentos e acompanhar os valores gerados durante uma sessão de utilização.

## 🍓 Objetivos do projeto

- Desenvolver um sistema funcional utilizando a linguagem C.
- Aplicar conceitos de lógica de programação.
- Organizar o cadastro de tutores e animais.
- Simular o gerenciamento de serviços veterinários.
- Automatizar o cálculo dos valores dos atendimentos.
- Gerar relatórios dos serviços realizados.

## 🐾 Funcionalidades

### 🎀 Gerenciamento de tutores

- Cadastro de tutores.
- Geração automática de códigos.
- Consulta e listagem.
- Alteração de informações.

### 🐱 Gerenciamento de animais

- Cadastro vinculado a tutores existentes.
- Registro de nome, espécie, raça e porte.
- Registro da idade.
- Geração automática de códigos.
- Consulta e listagem.

### 🫧 Catálogo de serviços

- Consulta dos serviços disponíveis.
- Visualização dos preços.

### 🩷 Registro de atendimentos

- Seleção de animais cadastrados.
- Registro dos serviços realizados.
- Cálculo automático do valor.

### 🍒 Relatórios

- Atendimentos realizados na sessão.
- Serviços por animal.
- Subtotais e valor total arrecadado.

## 🎂 Catálogo de serviços e preços

| Serviço                 |    Valor |
| :---------------------- | -------: |
| 🫧 Banho                | R$ 35,00 |
| ✂️ Tosa                 | R$ 45,00 |
| 🩺 Consulta veterinária | R$ 80,00 |
| 💉 Vacinação            | R$ 60,00 |

*Valores fictícios para simulação acadêmica.*

## 💻 Tecnologias e conceitos utilizados

| Tecnologia         | Aplicação                   |
| :----------------- | :-------------------------- |
| C                  | Linguagem de programação    |
| GCC                | Compilação                  |
| Visual Studio Code | Ambiente de desenvolvimento |
| Git e GitHub       | Versionamento               |

**Conceitos aplicados:**

- `typedef struct`
- Vetores e strings.
- Funções.
- `if/else` e `switch`.
- Laços `for` e `do...while`.
- Bibliotecas `stdio.h` e `string.h`.

## 🍰 Menu principal

```text
╔════════════════════════════════╗
║       HELLO CHERRY PET         ║
╠════════════════════════════════╣
║  1 - Cadastrar tutor           ║
║  2 - Cadastrar animal          ║
║  3 - Listar cadastros           ║
║  4 - Buscar tutor ou animal    ║
║  5 - Registrar atendimento     ║
║  6 - Alterar tutor             ║
║  7 - Relatório                 ║
║  8 - Ver serviços              ║
║                                ║
║  0 - Sair                      ║
╚════════════════════════════════╝
```

## ⚙️ Regras de negócio

1. Cada tutor recebe um código único.
2. Cada animal recebe um código único.
3. Um animal só pode ser cadastrado se seu tutor já existir.
4. Um atendimento só pode ser realizado para um animal cadastrado.
5. Os preços são definidos pelo catálogo.
6. Os relatórios consideram os atendimentos da sessão atual.
7. A capacidade máxima é de 10 tutores, 10 animais e 10 atendimentos por sessão.
8. Informações inválidas recebem mensagens de orientação.

## 🚀 Como executar o projeto

### Pré-requisitos

- GCC instalado.
- Visual Studio Code ou outro editor.
- Terminal ou prompt de comando.

### 1. Clone o repositório

```bash
git clone https://github.com/SEU-USUARIO/SEU-REPOSITORIO.git
```

### 2. Acesse a pasta do código

```bash
cd petControl/projeto_petcontrol
```

### 3. Compile o programa

```bash
gcc petshop.c -o hello_cherry_pet
```

### 4. Execute o programa

**Windows:**

```bash
.\hello_cherry_pet.exe
```

**Linux ou macOS:**

```bash
./hello_cherry_pet
```

## 📁 Estrutura do projeto

```text
hello-cherry-pet/
│
├── projeto_petcontrol/
│   └── petshop.c
│
├── .gitignore
│
└── README.md
```

## 📖 Documentação complementar

A documentação apresenta explicações sobre a implementação e o funcionamento do sistema.

[🍓 Acessar documentação completa do projeto (PDF)](https://github.com/user-attachments/files/34291221/DocSPetFriend.pdf)

## ⚠️ Limitações conhecidas

- Os dados ficam armazenados somente na memória RAM durante a execução.
- Os registros são perdidos ao fechar o programa.
- A capacidade é limitada a 10 registros de cada tipo.
- Não existe funcionalidade para excluir registros.
- A aplicação funciona somente no terminal.
- Não utiliza banco de dados externo.
- Não possui autenticação de usuários.

## 👩🏻‍💻 Integrantes

- Kerolainy Oliveira
- Raissa dos Santos de Oliveira
- Gabriela
- Thalyta

**Instituição:** Universidade Católica de Brasília (UCB)
**Disciplina:** Lógica de Programação em C

## 🎀 Identidade visual

A identidade visual do Hello Cherry Pet foi inspirada no universo Hello Kitty & Friends.

A proposta combina delicadeza, criatividade e fofura, com uma paleta de verde menta, rosa, cereja e branco.

### Paleta de cores

\<p align="center">
&#x20; \<img src="[https://img.shields.io/badge/BDF2D4-Menta-BDF2D4?style=flat-square](https://img.shields.io/badge/BDF2D4-Menta-BDF2D4?style=flat-square)" />
&#x20; \<img src="[https://img.shields.io/badge/E94B78-Cereja-E94B78?style=flat-square](https://img.shields.io/badge/E94B78-Cereja-E94B78?style=flat-square)" />
&#x20; \<img src="[https://img.shields.io/badge/F7A8C4-Rosa-F7A8C4?style=flat-square](https://img.shields.io/badge/F7A8C4-Rosa-F7A8C4?style=flat-square)" />
&#x20; \<img src="[https://img.shields.io/badge/FFF0F5-Rosa%20claro-FFF0F5?style=flat-square](https://img.shields.io/badge/FFF0F5-Rosa%20claro-FFF0F5?style=flat-square)" />
&#x20; \<img src="[https://img.shields.io/badge/D96C9F-Pink-D96C9F?style=flat-square](https://img.shields.io/badge/D96C9F-Pink-D96C9F?style=flat-square)" />
\</p>

\<p align="center">
&#x20; \<sub>#BDF2D4 • #E94B78 • #F7A8C4 • #FFF0F5 • #D96C9F\</sub>
\</p>

## 🎓 Aviso de uso acadêmico

Este projeto foi desenvolvido exclusivamente para fins educacionais, como parte da avaliação final da disciplina de Lógica de Programação em C da Universidade Católica de Brasília (UCB).

Os personagens e as marcas mencionados pertencem aos seus respectivos proprietários. O projeto não possui vínculo, parceria, patrocínio ou associação oficial com a Sanrio.

---

\<p align="center">
&#x20; \<img src="[https://img.shields.io/badge/🍒\_HELLO_CHERRY_PET-E94B78?style=for-the-badge](https://img.shields.io/badge/🍒_HELLO_CHERRY_PET-E94B78?style=for-the-badge)" />
\</p>

\<p align="center">
&#x20; \<b>Feito com ♡, dedicação e muito código em C!\</b>
\</p>

\<p align="center">
&#x20; 🎀 Hello Cherry Pet 🍓
\</p>
