# SysQuick - Quick System Info Tool

**SysQuick** é uma ferramenta simples para exibir informações rápidas sobre o sistema, como nome do sistema operacional, versão do kernel, arquitetura e informações de memória.

### Funcionalidades

- Exibe o nome do sistema, versão do kernel e arquitetura.
- Mostra a memória total e livre disponível.
- Visual minimalista com cores personalizáveis.

### Requisitos

- Linux (ou sistema com suporte a `sysinfo.h` e `utsname.h`)
- Compilador C++ (g++ ou equivalente)

### Como usar

#### 1. **Instalar via Snap**

 Se voce deseja instalar o SysQuick rapidamente, você pode usar o **Snap**. Basta rodar o seguinte comando no terminal:

```bash
sudo snap install sysquick
```

#### 2. **Compilar a partir do código-fonte**

Se você preferir compilar a partir do código-fonte:

1. **Clone o repositório:**

   ```bash
   git clone https://github.com/sir-braz/sysquick.git
   cd sysquick
   ```

2. **Compile o código:**

   Se você não tiver um compilador C++ instalado, instale-o primeiro. No caso do Ubuntu, você pode usar o seguinte comando:

   ```bash
   sudo apt update
   sudo apt install g++
   ```

   Depois, compile o programa com o comando:

   ```bash
   g++ -o sysquick sysquick.cpp
   ```

3. **Execute o programa:**

   Após a compilação, execute o programa com:

   ```bash
   ./sysquick
   ```

### Exemplo de Saída

```plaintext
  SSSSS  Y   Y  SSSSS   QQQQQ  U   U  III   CCCCC  K   K
 S        Y Y   S      Q     Q U   U   I    C      K  K 
  SSSSS    Y     SSSSS Q     Q U   U   I    C      KKK  
      S    Y         S Q   Q Q U   U   I    C      K  K 
  SSSSS    Y    SSSSS   QQQQ Q  UUUU   III   CCCCC K   K
              🚀 Quick System Info Tool

+----------------+-------------------------+
| Sistema        | Linux                   |
| Kernel         | 5.4.0-73-generic        |
| Arquitetura    | x86_64                  |
+----------------+-------------------------+
| Memória Total  | 8000 MB                 |
| Memória Livre  | 2048 MB                 |
+----------------+-------------------------+
```

