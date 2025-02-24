#ifndef AMSI_ETW_SC_LDR_H
#define AMSI_ETW_SC_LDR_H

#include <windows.h>
#include "Macros.h"

SECTION(B) PVOID LdrModulePeb(_In_ ULONG moduleHash);
SECTION(B) PVOID LdrFunction(_In_ PVOID module, _In_ ULONG functionHash);
SECTION(B) VOID ZeroMem(PVOID ptr, SIZE_T cnt);

#endif //AMSI_ETW_SC_LDR_H
