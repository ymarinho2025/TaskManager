# 🖥️ Gerenciador de Tarefas em C

Este projeto é um programa simples desenvolvido em linguagem C que permite interagir com o sistema operacional Windows através de comandos de terminal.

---

## 📌 Objetivo do Projeto

O objetivo principal é praticar:

- Manipulação de strings em C  
- Uso de funções da biblioteca padrão  
- Execução de comandos do sistema operacional  
- Entrada e saída de dados pelo terminal  

Além disso, o projeto simula um pequeno gerenciador de tarefas, permitindo listar, encerrar e iniciar processos.

---

## ⚙️ Funcionalidades

O programa oferece um menu com as seguintes opções:

1. Listar processos ativos (`tasklist`)  
2. Encerrar um processo (`taskkill`)  
3. Abrir um programa (`start`)  

---

## 🧠 Funcionamento

O programa utiliza a função `system()` para executar comandos diretamente no terminal do Windows.

### 🔄 Fluxo básico:

1. Usuário acessa o menu  
2. Seleciona uma opção  
3. O programa monta o comando em uma string  
4. O comando é executado via `system()`  
5. O programa aguarda interação antes de encerrar  

---

## 🔧 Funções Utilizadas

### 🔹 `system()`

Executa comandos diretamente no sistema operacional.

```c
system("tasklist");

// system("cls");
// cls é um comando do CMD (Command Prompt)
// Ele apaga todo o conteúdo exibido na tela
// Usado para manter a interface limpa

getch(); // da lib (include <conio.h>)
// Captura uma tecla pressionada pelo usuário sem necessidade de pressionar ENTER.
// getchar() → precisa pressionar ENTER
// getch() → captura instantaneamente

strcpy()
// Copia uma string para outra.

strcat()
// Concatena (junta) duas strings.

// do System(""):
// start:
// Inicia um programa.

// taskkill:
// Encerra um processo pelo nome.

// tasklist:
// Lista todos os processos em execução.

// cls:
// Limpa a tela do terminal.
