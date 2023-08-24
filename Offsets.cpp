/*
Game    = Farlight 84 (steam)
===================================
[>] Base    = 0x7FF66E3F0000      =
[>] Gname   = 0x7FF674A35540      =
[>] Gworld  = 0x7FF674BA5040      =
[>] GOBJECT = 0x7FF674A4DDB0      =
===================================
*/
uintptr_t OFFSET_Gname   = 0x6645540
uintptr_t OFFSET_Gworld  = 0x67B5040
uintptr_t OFFSET_GOBJECT = 0x665DDB0
uintptr_t OFFSET_GetBoneMatrix = 0x3c193f5;
uintptr_t OFFSET_World2Screen = 0x392beb0;
uintptr_t OFFSET_GetObjectName = 0x39beb80;

/*
Gname   = 48 8D 0D ? ? ? ? E8 AA 8D FF ?? 48 8B D0 C6 05 50 A1 ? ? ?
"\x48\x8D\x0D\x00\x00\x00\x00\xE8\xAA\x8D\xFF\x00\x48\x8B\xD0\xC6\x05\x50\xA1\x00\x00\x00" "xxx????xxxx?xxxxxxx???"
Gworld  = 48 89 05 ? ? A4 02 49 8B B4 24 88 00 00 00 F6 86 B3 01 00 00 40
"\x48\x89\x05\x00\x00\xA4\x02\x49\x8B\xB4\x24\x88\x00\x00\x00\xF6\x86\xB3\x01\x00\x00\x40" "xxx??xxxxxxxxxxxxxxxxx"
GOBJECT = 48 8B 05 ? ? ? ? 48 8B 0C C8 48 8D 04 D1 EB 06
"\x48\x8B\x05\x00\x00\x00\x00\x48\x8B\x0C\xC8\x48\x8D\x04\xD1\xEB\x06" "xxx????xxxxxxxxxx"

*/
