# SysQuick System Info Tool

## Descrição

O **SysQuick System Info Tool** é uma ferramenta simples desenvolvida em C++ para exibir informações essenciais do sistema operacional Linux, como:

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
git clone https://github.com/sir-braz/sysquick.git
```

### 2. Navegar para o Diretório

Acesse o diretório do projeto:

```bash
cd sysquick
```

### 3. Compilar o Código

Compile o código usando o `g++`:

```bash
g++ sysquick.cpp -o sysquick
```

### 4. Executar o Programa

Após a compilação, execute o programa:

```bash
./sysquick
```

O programa irá exibir informações do sistema no terminal, como o nome do sistema, versão do kernel e a quantidade de memória total e livre.

## Exemplo de Saída

A saída do programa será algo similar a:

```
  S   Y   S   Q   U   I   C   K  
  --------------------------------
            💡 SysQuick System Info Tool

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

