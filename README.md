<div align="center">

# <img src="https://usagif.com/wp-content/uploads/gify/cinnamoroll-wrapping-ears-cute-usagif.gif" width="30" align="center" /> Hello Cherry Pet <img src="https://usagif.com/wp-content/uploads/gify/cinnamoroll-wrapping-ears-cute-usagif.gif" width="30" align="center" />

### Sistema de gerenciamento para Pet Shop e Clínica Veterinária

</div>

<p align="center">
  <img src="https://img.shields.io/badge/Linguagem-C-ffffff?style=for-the-badge&labelColor=ffd1dc&logo=c&logoColor=49313D&color=ffffff" />
  <img src="https://img.shields.io/badge/Compilador-GCC-ffffff?style=for-the-badge&labelColor=ffd1dc&logo=gnu&logoColor=49313D&color=ffffff" />
  <img src="https://img.shields.io/badge/Projeto-Acadêmico-ffffff?style=for-the-badge&labelColor=ffd1dc&color=ffffff" />
</p>

<p align="center">
  <b>♡ Cuidando dos detalhes, organizando cada atendimento. ♡</b>
</p>

---

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

| Serviço | Valor |
|:--|--:|
| 🫧 Banho | R$ 35,00 |
| ✂️ Tosa | R$ 45,00 |
| 🩺 Consulta veterinária | R$ 80,00 |
| 💉 Vacinação | R$ 60,00 |

*Valores fictícios para simulação acadêmica.*

## 💻 Tecnologias e conceitos utilizados

| Tecnologia | Aplicação |
|:--|:--|
| C | Linguagem de programação |
| GCC | Compilação |
| Visual Studio Code | Ambiente de desenvolvimento |
| Git e GitHub | Versionamento |

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
║        HELLO CHERRY PET        ║
╠════════════════════════════════╣
║  1 - Cadastrar tutor           ║
║  2 - Cadastrar animal          ║
║  3 - Listar cadastros          ║
║  4 - Buscar tutor ou animal    ║
║  5 - Registrar atendimento     ║
║  6 - Alterar tutor             ║
║  7 - Relatório                 ║
║  8 - Ver serviços              ║
║                                ║
║  0 - Sair                      ║
╚════════════════════════════════╝
