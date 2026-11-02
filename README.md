# 🐾 ˚₊‧꒰ა PetFriend ໒꒱ ‧₊˚
### Sistema de gerenciamento para Pet Shop e Clínica Veterinária

<p align="center">
  <img src="https://img.shields.io/badge/Linguagem-C-blue?style=for-the-badge&logo=c" />
  <img src="https://img.shields.io/badge/Compilador-GCC-orange?style=for-the-badge&logo=gnu" />
  <img src="https://img.shields.io/badge/Projeto-Acadêmico-pink?style=for-the-badge" />
  <img src="https://img.shields.io/badge/Status-Concluído-brightgreen?style=for-the-badge" />
</p>

<p align="center">
  <i>Um sistema desenvolvido para facilitar o gerenciamento de tutores, animais e atendimentos veterinários. ♡</i>
</p>

---

## 🌷 Sobre o projeto

O **PetFriend** é um sistema de gerenciamento desenvolvido em linguagem C, com o objetivo de simular o funcionamento de um pet shop integrado a uma clínica veterinária.

O projeto foi desenvolvido como parte da avaliação final da disciplina de **Lógica de Programação em C**, da Universidade Católica de Brasília (UCB).

A aplicação funciona diretamente no terminal e permite organizar informações de tutores e seus animais, consultar serviços disponíveis, registrar atendimentos e acompanhar os valores gerados durante uma sessão de utilização.

Além de atender às necessidades propostas para o projeto acadêmico, o PetFriend foi desenvolvido com foco na aplicação prática dos principais conceitos de lógica de programação e da linguagem C.

> ♡ Projeto acadêmico, desenvolvido exclusivamente para fins educacionais e sem finalidade comercial.

## 🎯 Objetivos do projeto

- Desenvolver um sistema funcional utilizando a linguagem C.
- Aplicar conceitos de lógica de programação na resolução de problemas.
- Organizar o cadastro de tutores e animais.
- Simular o gerenciamento de serviços de um estabelecimento veterinário.
- Automatizar o cálculo dos valores dos atendimentos.
- Gerar relatórios para facilitar o acompanhamento dos serviços realizados.
- Praticar a organização e modularização de códigos por meio de funções e estruturas de dados.

## ✨ Funcionalidades

O PetFriend conta com funcionalidades organizadas para facilitar o gerenciamento das informações.

### 🐶 1. Gerenciamento de tutores
- Cadastro de novos tutores.
- Geração automática de códigos de identificação.
- Consulta de tutores cadastrados.
- Listagem dos registros.
- Alteração das informações de um tutor.

### 🐱 2. Gerenciamento de animais
- Cadastro de animais vinculados a tutores existentes.
- Registro do nome e da espécie do animal.
- Identificação da raça e do porte.
- Registro da idade, considerando meses para filhotes e anos para os demais animais.
- Geração automática de códigos de identificação.
- Consulta e listagem dos animais cadastrados.

### 🫧 3. Catálogo de serviços
O sistema disponibiliza um catálogo de serviços com valores previamente definidos, permitindo consultar os procedimentos oferecidos pelo estabelecimento.

### 🩺 4. Registro de atendimentos
- Seleção de um animal previamente cadastrado.
- Registro dos serviços realizados.
- Cálculo automático do valor do atendimento.
- Associação dos atendimentos aos respectivos animais.

### 📊 5. Relatórios
O sistema disponibiliza um relatório da sessão contendo:
- Atendimentos realizados.
- Serviços registrados por animal.
- Subtotal dos atendimentos de cada animal.
- Valor total arrecadado durante a sessão.

### 🔎 6. Sistema de consultas
- Busca de tutores pelo código de identificação.
- Busca de animais pelo código de identificação.
- Verificação da existência dos registros antes de realizar operações.

## ૮₍ ´ ꒳ `₎ა Catálogo de serviços e preços

O sistema trabalha com os seguintes serviços:

| Serviço | Valor |
|:--|--:|
| 🫧 Banho | R$ 35,00 |
| ✂️ Tosa | R$ 45,00 |
| 🩺 Consulta veterinária | R$ 80,00 |
| 💉 Vacinação | R$ 60,00 |

*Os valores são fictícios e utilizados exclusivamente para simulação acadêmica.*

## 💻 Tecnologias e conceitos utilizados

O projeto foi desenvolvido utilizando:

| Tecnologia / Recurso | Aplicação |
|:--|:--|
| Linguagem C | Desenvolvimento da aplicação |
| GCC | Compilação do código-fonte |
| VS Code | Ambiente de desenvolvimento |
| Git e GitHub | Versionamento e hospedagem do projeto |

### Conceitos de programação aplicados

- **Structs (`typedef struct`):** organização dos dados de tutores, animais e atendimentos.
- **Vetores:** armazenamento dos registros durante a execução.
- **Strings (`char[]`):** manipulação de nomes, telefones e outras informações.
- **Funções:** divisão do código em operações específicas.
- **Condicionais (`if/else`):** validação de informações e aplicação de regras.
- **Estrutura `switch`:** gerenciamento das opções do menu.
- **Laços (`for` e `do...while`):** repetição de operações e navegação pelo sistema.
- **Ponteiros e parâmetros:** passagem e manipulação de dados entre funções.
- **Biblioteca `string.h`:** manipulação e comparação de strings.
- **Biblioteca `stdio.h`:** entrada e saída de informações.

## 📋 Menu principal

Ao executar o programa, o usuário encontra o seguinte menu:

```text
========== PETFRIEND ==========

1 - Cadastrar tutor
2 - Cadastrar animal
3 - Listar cadastros
4 - Buscar tutor ou animal
5 - Registrar atendimento
6 - Alterar tutor
7 - Relatório
8 - Ver serviços

0 - Sair

===============================
```

Cada opção direciona o usuário para uma funcionalidade específica, permitindo utilizar o sistema por meio de uma interface simples e interativa no terminal.

## ⚙️ Regras de negócio

Para garantir a consistência das informações, o sistema possui algumas regras:

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

Antes de executar o PetFriend, é necessário ter:

- GCC instalado.
- Visual Studio Code ou outro editor de código.
- Terminal ou prompt de comando.

### 1. Clone o repositório

```bash
git clone https://github.com/SEU-USUARIO/SEU-REPOSITORIO.git
```

### 2. Entre na pasta do projeto

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

Após a execução, o menu principal será apresentado no terminal.

## 📁 Estrutura do projeto

A organização dos arquivos está estruturada da seguinte maneira:

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
| `.gitignore` | Define arquivos e pastas que não devem ser enviados ao Git. |
| `README.md` | Documentação e apresentação do projeto. |

## 📖 Documentação complementar

Para apresentar o funcionamento interno do PetFriend, foi elaborada uma documentação em PDF com explicações detalhadas sobre a implementação do sistema.

### 📄 DocSPetFriend.pdf

[**➜ Acessar documentação completa do PetFriend**](https://github.com/user-attachments/files/34291221/DocSPetFriend.pdf)

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
- **Sem exclusão de registros:** não existe uma funcionalidade para excluir tutores, animais ou atendimentos.
- **Interface em terminal:** a aplicação não possui interface gráfica ou versão web.
- **Sem banco de dados:** as informações não são integradas a um banco de dados externo.
- **Sem autenticação:** o sistema não possui controle de acesso por usuários e senhas.

## 👩‍💻 Integrantes

Projeto desenvolvido em grupo por:

- Kerolainy 
- Raissa 
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
  Feito com ♡ e muito código em C!
</p>

<p align="center">
  🐾 <b>PetFriend — Cuidando dos detalhes, organizando cada atendimento.</b> 🐾
</p>
