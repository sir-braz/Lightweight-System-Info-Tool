#include <iostream>
#include <iomanip>
#include <sys/utsname.h>
#include <sys/sysinfo.h>
#include <string>

using namespace std;

// Definições de cores ANSI para um visual minimalista
#define RESET   "\033[0m"
#define FG_YELLOW "\033[33m"
#define FG_GREEN "\033[32m"

// Função para limpar a tela
void setMinimalistBackground() {
    cout << "\033[2J\033[H"; // Limpa a tela e move o cursor para o topo
}

// Função para exibir o banner com as letras "L", "I", "G", "H" e "T" estilizadas
void showBanner() {
    cout << FG_YELLOW;
    cout << "  L       III   GGGGG  H     H  TTTTT  " << endl;
    cout << "  L        I    G      H     H    T    " << endl;
    cout << "  L        I    G  GG  HHHHHHH    T    " << endl;
    cout << "  L        I    G   G  H     H    T    " << endl;
    cout << "  LLLLL   III   GGGG   H     H    T    " << endl;
    cout << "              💡 Lightweight System Info Tool\n\n" << RESET;
}

// Função para exibir informações do sistema
void showSystemInfo() {
    struct utsname systemInfo;
    struct sysinfo memInfo;

    uname(&systemInfo);
    sysinfo(&memInfo);

    cout << FG_GREEN;
    cout << "+----------------+-------------------------+\n";
    cout << "| Sistema        | " << systemInfo.sysname << " |\n";
    cout << "| Kernel        | " << systemInfo.release << " |\n";
    cout << "| Arquitetura   | " << systemInfo.machine << " |\n";
    cout << "+----------------+-------------------------+\n";
    cout << "| Memória Total | " << memInfo.totalram / 1024 / 1024 << " MB |\n";
    cout << "| Memória Livre | " << memInfo.freeram / 1024 / 1024 << " MB |\n";
    cout << "+----------------+-------------------------+\n";
    cout << RESET;
}

int main() {
    setMinimalistBackground();
    showBanner();
    showSystemInfo();
    return 0;
}
