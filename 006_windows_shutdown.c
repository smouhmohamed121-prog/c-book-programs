#include <windows.h>
#include <stdio.h>

BOOL EnableShutdownPrivilege() {
    HANDLE hToken;
    TOKEN_PRIVILEGES tkp;

    if (!OpenProcessToken(GetCurrentProcess(), TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, &hToken))
        return FALSE;

    LookupPrivilegeValue(NULL, SE_SHUTDOWN_NAME, &tkp.Privileges[0].Luid);

    tkp.PrivilegeCount = 1;
    tkp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;

    AdjustTokenPrivileges(hToken, FALSE, &tkp, 0, NULL, 0);

    return GetLastError() == ERROR_SUCCESS;
}

int main() {
    // Get system uptime
    ULONGLONG milliseconds = GetTickCount64();
    ULONGLONG seconds = milliseconds / 1000;
    ULONGLONG minutes = seconds / 60;
    ULONGLONG hours = minutes / 60;
    ULONGLONG days = hours / 24;

    seconds = seconds % 60;
    minutes = minutes % 60;
    hours = hours % 24;

    // Create message string
    char message[256];
    snprintf(message, sizeof(message),
             "You have used your PC for:\n%llu days, %llu hours, %llu minutes, %llu seconds.\n\nDo you want to shut down now?",
             days, hours, minutes, seconds);

    // Show message box
    int response = MessageBox(NULL, message, "Uptime Tracker", MB_YESNO | MB_ICONQUESTION);

    if (response == IDYES) {
        if (EnableShutdownPrivilege()) {
            // Shut down the system
            ExitWindowsEx(EWX_SHUTDOWN | EWX_FORCE, SHTDN_REASON_MAJOR_OTHER);
        } else {
            MessageBox(NULL, "Failed to enable shutdown privilege.", "Error", MB_OK | MB_ICONERROR);
        }
    }

    return 0;
}
