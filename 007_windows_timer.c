#include <windows.h>

int main() {
    while (1) {
        MessageBeep(MB_OK);  // Simple system beep
        MessageBox(NULL, "20 minutes have passed!", "Ding", MB_OK | MB_ICONINFORMATION);
        Sleep(20* 60 * 1000); // Sleep for 20 minutes (in milliseconds)
    }
    return 0;
}
