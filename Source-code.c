#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//du klauen Kode isch hauen dir in fresee 
int main() {
    int chose;
    int nes;
    int snes;
    int emu;

    printf("1. NES Roms\n2. SNES Roms\n3. Emulators\n\nChose Something: ");
    scanf("%d", &chose);

    switch (chose) {
    case 1:
        printf("\n1. Super Mario Bros\n");
        printf("2. Super Mario Bros 2\n");
        printf("3. Super Mario Bros 3\n\n");
        printf("4. The Legend Of Zelda\n");
        printf("5. Zelda The Adventure Of Link\n\n");
        printf("Chose Game: ");
        scanf("%d", &nes);
        break;
    case 2:
        printf("1. Super Mario World\n\nChose Game: ");
        scanf("%d", &snes);
        break;
    case 3:
        printf("1. Fceux (NES)\n2. Snes9x (SNES)\n\nChose Emulator: ");
        scanf("%d", &emu);
    }
    switch (nes) {
    case 1:
        system("start https://is.gd/TO1QA9");
        break;
    case 2:
        system("start https://is.gd/91QtWX");
        break;
    case 3:
        system("start https://is.gd/VniIZh");
        break;
    case 4:
        system("start https://is.gd/FbuQ7B");
        break;
    case 5:
        system("start https://is.gd/FbuQ7B");
        break;
    }
    switch (snes) {
    case 1:
        system("start https://idk.com");
    }
    switch (emu) {
    case 1:
        system("start https://is.gd/o9TK4D");
        break;
    case 2:
        system("start https://is.gd/NmFFtW");
        break;
    
    }
    getchar();
    getchar();
    return 0;
}
