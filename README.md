# Libft

A **libft** é uma biblioteca utilitária escrita em C, que implementa funções comuns para manipulação de strings, alocação de memória, conversões e operações com listas encadeadas. O objetivo principal do projeto é proporcionar uma base de funções reutilizáveis para outros projetos.

## Descrição

O projeto **libft** contém uma coleção de funções que ajudam na manipulação de dados e operações comuns em C, como cálculo de comprimento de strings, conversão de tipos de dados, manipulação de listas encadeadas e muito mais. Essas funções são implementadas do zero, sem utilizar as funções equivalentes da biblioteca padrão C.

### Algumas Funcionalidades

- **Manipulação de Strings**: Funções como `ft_strlen` (para obter o comprimento de uma string), `ft_strdup` (para duplicar uma string) e `ft_strcmp` (para comparar duas strings).
- **Conversões**: Como `ft_atoi` (converte uma string para inteiro) e `ft_itoa` (converte um inteiro para string).
- **Alocação de Memória**: Funções como `ft_memset`, `ft_memcpy`, e `ft_memmove` que lidam com alocação e cópia de blocos de memória.
- **Listas Encadeadas**: Funções para manipulação de listas, como `ft_lstnew`, `ft_lstadd_front`, e `ft_lstsize`.

## Instalação

### Pré-requisitos

- GCC ou outro compilador C.
- Make (para compilar o projeto).

### Compilação

Clone o repositório e compile o projeto com os seguintes comandos:

```bash
git clone https://github.com/usuario/libft.git
cd libft
make
