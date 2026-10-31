#include <stdio.h>
#include <windows.h>
int main (void){
MessageBeep(MB_ICONWARNING);
// MessageBeep (MB_ICONQUESTION);
// MessageBeep(MB_ICONEXCLAMATION);
int resulte = 0;
resulte = MessageBox(
    NULL,
    "20 minutes have passed!\nWAKE UP!\nWORK MOTHERFOKER",
    "Reminder",
    MB_OK  | MB_ICONWARNING
);
// if (resulte == IDOK) printf ("ok");
MessageBox(NULL, "Save changes?", "Warning", MB_YESNOCANCEL | MB_ICONWARNING | MB_DEFBUTTON3);

return 0;}