# FetchLight System Info Tool

## Descrição

O **FetchLight System Info Tool** é uma ferramenta simples desenvolvida em C++ para exibir informações essenciais do sistema operacional Linux, como:

- Nome do sistema (Sistema operacional).
- Versão do Kernel.
- Arquitetura do sistema.
- Memória total e memória livre.

A ideia dessa ferramenta é fornecer informações rápidas e essenciais sobre o sistema de uma forma minimalista e fácil de entender.

## Funcionalidades

- Exibe informações do sistema, como nome e versão do kernel.
- Mostra a quantidade de memória total e memória livre disponível.
- Interface limpa e de fácil leitura, usando cores para destaque.

## Pré-requisitos

Antes de começar, você precisará ter o seguinte instalado em seu sistema:

- **g++**: Compilador C++.
- **Sistema Linux**: Este código foi desenvolvido para rodar em sistemas operacionais baseados em Linux.

## Como Usar

### 1. Clonar o Repositório

Clone o repositório para seu ambiente local usando o comando:

```bash
git clone https://github.com/sir-braz/Lightweight-System-Info-Tool.git
```

### 2. Navegar para o Diretório

Acesse o diretório do projeto:

```bash
cd fetchLight-System-Info-Tool
```

### 3. Compilar o Código

Compile o código usando o `g++`:

```bash
g++ FetchLight.cpp -o FetchLight
```

### 4. Executar o Programa

Após a compilação, execute o programa:

```bash
./FetchLight
```

O programa irá exibir informações do sistema no terminal, como o nome do sistema, versão do kernel e a quantidade de memória total e livre.

## Exemplo de Saída

A saída do programa será algo similar a:

```
  L       III   GGGGG  H     H  TTTTT  
  L        I    G      H     H    T    
  L        I    G  GG  HHHHHHH    T    
  L        I    G   G  H     H    T    
  LLLLL   III   GGGG   H     H    T    
              💡 Lightweight System Info Tool

+----------------+-------------------------+
| Sistema        | Linux                   |
| Kernel         | 5.4.0-80-generic        |
| Arquitetura    | x86_64                  |
+----------------+-------------------------+
| Memória Total  | 8192 MB                 |
| Memória Livre  | 2048 MB                 |
+----------------+-------------------------+
```

## Contribuições

Contribuições são bem-vindas! Se você tiver sugestões de melhorias ou quiser adicionar novos recursos, sinta-se à vontade para abrir uma *issue* ou fazer um *pull request*.


