#include <stdio.h>
#include <stdlib.h> // Para system() e sleep()
#include <windows.h> // Para gotoxy() no Windows

// Função para posicionar o cursor no terminal (para Windows)
void gotoxy(int coluna, int linha) {
    COORD coord;
    coord.X = coluna;
    coord.Y = linha;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    int horas = 0, minutos = 0;

    while (1) { // Loop infinito para simular o relógio
        // Posiciona o cursor na posição desejada
        gotoxy(35, 12); // Coluna 35, linha 12 (centralizado aproximadamente)

        // Exibe o horário no formato HH:MM
        printf("%02d:%02d", horas, minutos);
        fflush(stdout); // Garante que a saída é exibida imediatamente

        // Aguarda 1 segundo antes de atualizar
        Sleep(1000);

        // Incrementa o tempo
        minutos++;
        if (minutos == 60) {
            minutos = 0;
            horas++;
        }
        if (horas == 24) {
            horas = 0;
        }
    }

    return 0;
}