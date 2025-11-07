section .data
    msg db "Hello, World!",0Ah   ; message with newline
    len equ $ - msg              ; length of message

section .text
    global _start

_start:
    ; write(msg)
    mov eax, 4       ; syscall: write
    mov ebx, 1       ; file descriptor: stdout
    mov ecx, msg     ; message address
    mov edx, len     ; message length
    int 0x80         ; call kernel

    ; exit(0)
    mov eax, 1       ; syscall: exit
    xor ebx, ebx     ; return 0
    int 0x80
