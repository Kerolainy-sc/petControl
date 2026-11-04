# 🐾 PetFriend
### Sistema de gerenciamento para Pet Shop e Clínica Veterinária

<p align="center">
  <img src="https://img.shields.io/badge/Linguagem-C-401923?style=for-the-badge&logo=c&logoColor=ffffff" />
  <img src="https://img.shields.io/badge/Compilador-GCC-8C3E5B?style=for-the-badge&logo=gnu&logoColor=ffffff" />
  <img src="https://img.shields.io/badge/Projeto-Acadêmico-D97197?style=for-the-badge" />
  <img src="https://img.shields.io/badge/Status-Concluído-D96C9F?style=for-the-badge" />
</p>

<p align="center">
  <b>♡ Cuidando dos detalhes, organizando cada atendimento. ♡</b>
</p>

---

## 🌷 Sobre o projeto

O **PetFriend** é um sistema de gerenciamento desenvolvido em linguagem C, com o objetivo de simular o funcionamento de um pet shop integrado a uma clínica veterinária.

O projeto foi desenvolvido como parte da avaliação final da disciplina de **Lógica de Programação em C**, da Universidade Católica de Brasília (UCB).

A aplicação funciona diretamente no terminal e permite organizar informações de tutores e seus animais, consultar serviços disponíveis, registrar atendimentos e acompanhar os valores gerados durante uma sessão de utilização.

Além de atender às necessidades propostas para o projeto acadêmico, o PetFriend foi desenvolvido com foco na aplicação prática dos principais conceitos de lógica de programação e da linguagem C.

<p align="center">
  <b>Projeto acadêmico • Sem fins comerciais</b>
</p>

## 🎯 Objetivos do projeto

- Desenvolver um sistema funcional utilizando a linguagem C.
- Aplicar conceitos de lógica de programação na resolução de problemas.
- Organizar o cadastro de tutores e animais.
- Simular o gerenciamento de serviços de um estabelecimento veterinário.
- Automatizar o cálculo dos valores dos atendimentos.
- Gerar relatórios para acompanhar os serviços realizados.
- Praticar a organização e modularização de códigos.

## ✨ Funcionalidades

### 🐶 1. Gerenciamento de tutores

- Cadastro de novos tutores.
- Geração automática de códigos de identificação.
- Consulta e listagem dos tutores cadastrados.
- Alteração das informações de um tutor.

### 🐱 2. Gerenciamento de animais

- Cadastro de animais vinculados a tutores existentes.
- Registro do nome e da espécie.
- Identificação da raça e do porte.
- Registro da idade em meses para filhotes e anos para os demais animais.
- Geração automática de códigos de identificação.
- Consulta e listagem dos animais cadastrados.

### 🫧 3. Catálogo de serviços

- Consulta dos serviços disponíveis.
- Visualização dos preços.
- Utilização dos valores no registro de atendimentos.

### 🩺 4. Registro de atendimentos

- Seleção de um animal previamente cadastrado.
- Registro dos serviços realizados.
- Cálculo automático do valor do atendimento.
- Associação dos atendimentos aos respectivos animais.

### 📊 5. Relatórios

- Atendimentos realizados durante a sessão.
- Serviços registrados por animal.
- Subtotal dos atendimentos de cada animal.
- Valor total arrecadado durante a sessão.

### 🔎 6. Sistema de consultas

- Busca de tutores pelo código.
- Busca de animais pelo código.
- Verificação da existência dos registros antes de realizar operações.

## 🎀 Catálogo de serviços e preços

| Serviço | Valor |
|:--|--:|
| 🫧 Banho | R$ 35,00 |
| ✂️ Tosa | R$ 45,00 |
| 🩺 Consulta veterinária | R$ 80,00 |
| 💉 Vacinação | R$ 60,00 |

*Os valores são fictícios e utilizados exclusivamente para simulação acadêmica.*

## 💻 Tecnologias e conceitos utilizados

### Tecnologias

| Tecnologia | Aplicação |
|:--|:--|
| Linguagem C | Desenvolvimento da aplicação |
| GCC | Compilação do código-fonte |
| Visual Studio Code | Ambiente de desenvolvimento |
| Git e GitHub | Versionamento e hospedagem |

### Conceitos de programação

- **Structs (`typedef struct`):** organização dos dados de tutores, animais e atendimentos.
- **Vetores:** armazenamento dos registros durante a execução.
- **Strings (`char[]`):** manipulação de nomes, telefones e outras informações.
- **Funções:** divisão do código em operações específicas.
- **Condicionais (`if/else`):** validação de informações e aplicação de regras.
- **Estrutura `switch`:** gerenciamento das opções do menu.
- **Laços (`for` e `do...while`):** repetição de operações e navegação pelo sistema.
- **Biblioteca `string.h`:** manipulação e comparação de strings.
- **Biblioteca `stdio.h`:** entrada e saída de informações.

## 📋 Menu principal

```text
╔════════════════════════════════╗
║           PETFRIEND            ║
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

O menu principal permite acessar as funcionalidades por meio de uma interface simples e interativa no terminal.

## ⚙️ Regras de negócio

1. Cada tutor recebe um código único gerado automaticamente.
2. Cada animal também recebe um código único.
3. Um animal somente pode ser cadastrado quando seu tutor responsável já estiver registrado.
4. Um atendimento somente pode ser realizado para um animal previamente cadastrado.
5. Os valores dos serviços são definidos pelo catálogo do sistema.
6. Os relatórios consideram os atendimentos realizados durante a sessão atual.
7. O sistema possui capacidade máxima de 10 tutores, 10 animais e 10 atendimentos por sessão.
8. Informações inválidas são identificadas e recebem mensagens de orientação ao usuário.

## 🚀 Como executar o projeto

### Pré-requisitos

- GCC instalado.
- Visual Studio Code ou outro editor de código.
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
gcc petshop.c -o petshop
```

### 4. Execute o programa

**Windows:**

```bash
.\petshop.exe
```

**Linux ou macOS:**

```bash
./petshop
```

## 📁 Estrutura do projeto

```text
petControl/
│
├── projeto_petcontrol/
│   └── petshop.c
│
├── .gitignore
│
└── README.md
```

| Arquivo | Descrição |
|:--|:--|
| `petshop.c` | Código-fonte principal do sistema. |
| `.gitignore` | Define arquivos e pastas ignorados pelo Git. |
| `README.md` | Documentação e apresentação do projeto. |

## 📖 Documentação complementar

Para apresentar o funcionamento interno do PetFriend, foi elaborada uma documentação em PDF com explicações detalhadas sobre a implementação do sistema.

### 📄 DocSPetFriend.pdf

[➜ Acessar documentação completa do PetFriend](https://github.com/user-attachments/files/34291221/DocSPetFriend.pdf)

O documento apresenta:

- Visão geral e divisão do código em sete blocos.
- Bibliotecas utilizadas e constante `MAX`.
- Estruturas `Tutor`, `Animal` e `Atendimento`, com explicação de seus campos.
- Variáveis globais, vetores e contadores.
- Funções auxiliares explicadas detalhadamente.
- Utilização de `fgets` e comparação com `scanf`.
- Funcionamento das funções de cadastro e consulta.
- Explicação do menu principal e das opções disponíveis.
- Relação entre tutores, animais e atendimentos.
- Limitações conhecidas da aplicação.

## ⚠️ Limitações conhecidas

Apesar de atender aos objetivos propostos, o sistema possui algumas limitações:

- **Armazenamento temporário:** os dados são mantidos apenas na memória RAM durante a execução. Ao fechar o programa, os registros são perdidos.
- **Capacidade limitada:** o sistema permite até 10 registros de cada tipo, conforme a constante `MAX`.
- **Sem exclusão de registros:** não existe funcionalidade para excluir tutores, animais ou atendimentos.
- **Interface em terminal:** a aplicação não possui interface gráfica ou versão web.
- **Sem banco de dados:** as informações não são integradas a um banco de dados externo.
- **Sem autenticação:** o sistema não possui controle de acesso por usuários e senhas.

## 👩🏻‍💻 Integrantes

Projeto desenvolvido em grupo por:

- Kerolainy Oliveira
- Raissa dos Santos de Oliveira
- Gabriela
- Thalyta

**Instituição:** Universidade Católica de Brasília (UCB)  
**Disciplina:** Lógica de Programação em C  
**Projeto:** PetFriend

## 🎓 Aviso de uso acadêmico

Este projeto foi desenvolvido exclusivamente para fins educacionais, como parte da avaliação final da disciplina de Lógica de Programação em C da Universidade Católica de Brasília (UCB).

O PetFriend não possui finalidade comercial, não é vendido e não representa um produto destinado à utilização profissional.

## 🎀 Créditos e identidade visual

A identidade visual e a temática do projeto foram inspiradas na estética *kawaii*, com referências visuais a Hello Kitty (Sanrio) e Line Friends (LINE).

O projeto não possui vínculo, parceria, patrocínio ou associação oficial com essas empresas. Todos os nomes e marcas mencionados pertencem aos seus respectivos proprietários.

---

<p align="center">
  <img src="https://img.shields.io/badge/401923-Vinho-401923?style=flat-square" />
  <img src="https://img.shields.io/badge/8C3E5B-Rosa%20escuro-8C3E5B?style=flat-square" />
  <img src="https://img.shields.io/badge/D97197-Rosa%20antigo-D97197?style=flat-square" />
  <img src="https://img.shields.io/badge/D96C9F-Rosa%20vibrante-D96C9F?style=flat-square" />
  <img src="https://img.shields.io/badge/F28DC4-Rosa%20pastel-F28DC4?style=flat-square" />
</p>

<p align="center">
  <b>Feito com ♡, dedicação e muito código em C!</b>
</p>

<p align="center">
  <sub>PetFriend © Projeto acadêmico — UCB</sub>
</p>
