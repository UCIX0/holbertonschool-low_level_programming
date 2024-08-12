section .data
    hello db 'Hello, World', 0xA  ; The string to print, followed by a newline (0xA)

section .text
    global _start

_start:
    ; write(1, hello, 14)
    mov rax, 1          ; syscall number for write
    mov rdi, 1          ; file descriptor 1 (stdout)
    mov rsi, hello      ; pointer to the string to print
    mov rdx, 14         ; length of the string (including the newline)
    syscall             ; invoke the system call

    ; exit(0)
    mov rax, 60         ; syscall number for exit
    xor rdi, rdi        ; status 0
    syscall             ; invoke the system call
