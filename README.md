
# ˚₊‧꒰ა 𝑃𝑒𝑡𝐹𝑟𝑖𝑒𝑛𝑑 ໒꒱ ‧₊˚
---

*Projeto acadêmico, sem fins comerciais.*

Sistema de terminal em linguagem C para gerenciar um pet shop e clínica veterinária fictícios. Este é o projeto da avaliação final da disciplina de Lógica de Programação em C (UCB).

## 🐾 Sobre o projeto

O Pet Friends registra tutores e seus bichinhos, organiza os serviços do pet shop, calcula o valor dos atendimentos e exibe um relatório da sessão. Os dados ficam armazenados apenas enquanto o programa está aberto.

---

### ╰┈➤ Funcionalidades

```
- Cadastro de tutores, com código gerado automaticamente
- Cadastro de animais, vinculados a um tutor já existente
- Registro de porte (pequeno, médio ou grande) e de idade, em meses para filhotes e em anos para os demais
- Listagem de tutores e animais
- Catálogo de serviços com preços
- Busca de tutor ou animal pelo código
- Registro de atendimento, com cálculo automático do valor total
- Alteração de cadastro de tutor
- Relatório da sessão, com atendimentos agrupados por animal, subtotal de cada um e total arrecadado
  ```
---

## ૮₍ ´ ꒳ `₎ა Serviços e preços


| Serviço | Preço |
|---|---|
| 🫧 Banho | R$ 35,00 |
| ✂️ Tosa | R$ 45,00 |
| 🩺 Consulta veterinária | R$ 80,00 |
| 💉 Vacinação | R$ 60,00 |


## 💻 Como compilar e executar

É necessário ter o compilador GCC instalado.

```bash
# entre na pasta do código
cd projeto_petcontrol

# compile
gcc petshop.c -o petshop

# execute (Windows)
.\petshop

# execute (Linux ou macOS)
./petshop
```

## 📋 Menu do sistema

````
===== PETFRIEND =====
1 - Cadastrar tutor
2 - Cadastrar animal
3 - Listar cadastros
4 - Buscar tutor ou animal
5 - Registrar atendimento
6 - Alterar tutor
7 - Relatorio
8 - Ver servicos
0 - Sair
````

## 💡 Regras do sistema


- Cada tutor e cada animal recebe um código único, gerado pelo próprio programa.
- Um animal só pode ser cadastrado se o tutor responsável existir.
- Um atendimento só pode ser registrado para um animal cadastrado.
- O sistema comporta até 10 tutores, 10 animais e 10 atendimentos por sessão.
- Entradas inválidas (idade fora do limite, código inexistente, opção errada no menu) exibem uma mensagem, e o programa continua funcionando.


--- 

## ᯓ Conceitos de C utilizados
````
- **Structs** (`typedef struct`): `Tutor`, `Animal` e `Atendimento`
- **Vetores** de capacidade fixa para armazenar os cadastros
- **Strings** (`char[]`) lidas com `fgets` de forma segura
- **Funções** para separar cadastro, busca, cálculo e relatórios
- **Estruturas condicionais** (`if/else` e `switch`) para as regras e o menu
- **Laços de repetição** (`for` e `do...while`) para percorrer os dados e manter o menu ativo
````
---

## 📁 Estrutura


petControl/
├── projeto_petcontrol/
│   └── petshop.c      # código-fonte
├── .gitignore
└── README.md


## ⊙⊝⊜ Integrantes
````
- Kerolainy Oliveira
- Raissa
- Gabriela
- Thalyta
````  
---

## 🎓 Aviso de uso acadêmico

*Este projeto foi desenvolvido exclusivamente para fins educacionais, como avaliação final da disciplina de Lógica de Programação em C (UCB). Não tem fins comerciais e não é vendido nem distribuído como produto.*


## ⋮ ⌗ ┆ Documentação

A documentação completa do sistema está disponível em PDF, com a explicação do código bloco a bloco, tabelas de apoio e exemplos:

### ⤷ [DocSPetFriend.pdf](https://github.com/user-attachments/files/34291221/DocSPetFriend.pdf) ˎˊ˗


### O que você encontra nela ? 

```
- **Visão geral** do sistema e da divisão do código em 7 blocos
- **Bibliotecas e constante `MAX`**, com a função de cada biblioteca
- **Structs** `Tutor`, `Animal` e `Atendimento`, campo por campo
- **Variáveis globais**: contadores, vetores, serviços, portes e preços
- **Funções auxiliares** explicadas linha por linha: `lerTexto`, `lerInt`, `buscarTutor` e `buscarAnimal`
- **Por que usamos `fgets` em vez de `scanf`**, com tabelas mostrando o problema do Enter na fila do teclado
- **Funções de cadastro**, **menu principal (`main`)** e **funções das opções do menu**
- **Como as partes se conectam** (Tutor → Animal → Atendimento)
- **Limitações conhecidas** do sistema
  ```

### Limitações conhecidas

```
- Os dados não são salvos em arquivo; ao fechar o programa, tudo é perdido.
- Limite de 10 registros de cada tipo (alterável em `MAX`).
- Não há exclusão de tutores, animais ou atendimentos.
- Digitar uma letra onde se espera um número faz o `lerInt` devolver 0, que é tratado como entrada inválida (no menu principal, significa "Sair").
```
  
*A temática visual é apenas uma inspiração na estética de Hello Kitty (Sanrio) e de Line Friends (LINE). Este projeto não é afiliado, patrocinado nem endossado por essas empresas. Os nomes e marcas citados pertencem aos seus respectivos proprietários, e nenhuma imagem, arte ou personagem oficial é reproduzida neste repositório.*
