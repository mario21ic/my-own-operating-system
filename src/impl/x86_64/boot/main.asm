global start

section .text
bits 32
start:
    ; print `OK`
    ;mov dword [0xb8000], 0x2f4b2f4f
    ;mov dword [0xb8000], 0x2f6b2f4f
    mov dword [0xb8000], 0x2f4b2f6f
    hlt
