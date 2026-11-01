˚₊‧꒰ა 𝑃𝑒𝑡 𝐹𝑟𝑖𝑒𝑛𝑑𝑠 — 𝑃𝑒𝑡𝐶𝑜𝑛𝑡𝑟𝑜𝑙 ໒꒱ ‧₊˚

*Projeto acadêmico, sem fins comerciais.*

Sistema de terminal em linguagem C para gerenciar um pet shop e clínica veterinária fictícios. Projeto da avaliação final de Lógica de Programação em C (UCB).

⏔⏔⏔⏔⏔⏔ ꒰ ᧔ෆ᧓ ꒱ ⏔⏔⏔⏔⏔⏔

Sobre o projeto:
O Pet Friends registra tutores e seus bichinhos, organiza os serviços do pet shop, calcula valores dos atendimentos e mostra um relatório da sessão. 
Os dados ficam guardados só enquanto o programa está aberto.

A estética é inspirada no universo de Hello Kitty (Sanrio) e Line Friends (LINE).

 Funcionalidades:   ૮₍ ˃ ⤙ ˂ ₎ა

 -Cadastro de tutores (código gerado automaticamente)
 -Cadastro de animais, ligados a um tutor que já existe
 -Listagem de tutores e animais
 -Catálogo de serviços com preços
 -Busca de tutor ou animal pelo código
 -Registro de atendimento (com cálculo do valor total)
 -Alteração de cadastro usando ponteiro para struct
 -Relatório da sessão (atendimentos, faturamento e total por serviço)
 
 -Serviços e preços:  ૮₍ ´ ꒳ `₎ა
 
🫧 Banho	R$ 35,00
✂️ Tosa	R$ 45,00
🩺 Consulta veterinária	R$ 80,00
💉 Vacinação	R$ 60,00

﹌﹌﹌﹌﹌﹌ 𝜗ৎ  ﹌﹌﹌﹌﹌﹌

Como compilar e rodar
Você precisa ter o compilador GCC instalado.

bash
# entre na pasta do código
cd projeto_petcontrol

# compile
gcc petshop.c -o petshop

# execute (Windows)
.\petshop

# execute (Linux ou Mac)
./petshop

Menu do sistema

===== PETSHOP ;)=====
1 - Cadastrar tutor
2 - Cadastrar animal
3 - Listar cadastros
4 - Buscar tutor ou animal
5 - Registrar atendimento
6 - Alterar tutor
7 - Relatorio
8 - Ver servicos
0 - Sair

Regras do sistema 💡

Cada tutor e cada animal recebe um código único, gerado pelo próprio programa.
Um animal só pode ser cadastrado se o tutor existir.
Um atendimento só pode ser registrado para um animal cadastrado.
Entradas inválidas (idade negativa, código inexistente, opção errada no menu) mostram uma mensagem e o programa continua funcionando.

O que foi usado de C

Structs (typedef struct): Tutor, Animal e Atendimento
Vetores de capacidade fixa para guardar os cadastros
Strings (char[]) lidas com fgets de forma segura
Funções para separar cadastro, busca, cálculo e relatórios
if/else e switch para as regras e o menu
for e do...while para percorrer os dados e manter o menu ativo
Ponteiros para alterar registros pelo endereço (& e ->)

📁 Estrutura
petControl/
├── projeto_petcontrol/
│   └── petshop.c      # código-fonte
├── .gitignore
└── README.md

Integrantes:
Nome Kerolainy Oliveira
Nome Raissa
Nome Gabriela
Nome Thalyta


🎓 Aviso de uso acadêmico

Este projeto foi desenvolvido exclusivamente para fins educacionais, como avaliação final da disciplina de Lógica de Programação em C (UCB). Não tem fins comerciais e não é vendido nem distribuído como produto.

A temática visual é apenas uma inspiração na estética e Hello Kitty (Sanrio) e de Line Friends (LINE). Este projeto não é afiliado, patrocinado nem endossado por essas empresas. Os nomes e marcas citados pertencem aos seus respectivos proprietários, e nenhuma imagem, arte ou personagem oficial é reproduzida neste repositório.


Claude terminou a resposta
