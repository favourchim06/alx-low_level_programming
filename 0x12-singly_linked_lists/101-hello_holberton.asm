section .data
    hello db "Hello, Holberton",10 ; Message to print (with newline)
    hello_len equ $ - hello         ; Calculate message length

section .text
    global _asm_start

_asm_start:
    ; Write the message to stdout (file descriptor 1)
    mov rax, 1                     ; syscall: write
    mov rdi, 1                     ; file descriptor: stdout
    mov rsi, hello                 ; pointer to the message
    mov rdx, hello_len             ; message length
    syscall

    ; Exit the program
    mov rax, 60                    ; syscall: exit
    xor rdi, rdi                   ; status: 0
    syscall

