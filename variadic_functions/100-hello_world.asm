section .data
    hello_msg db 'Hello, World', 10  ; Mensaje con salto de línea
    hello_len equ $ - hello_msg       ; Longitud del mensaje

section .text
    global _start

_start:
    ; Llamada al sistema write (sys_write)
    mov rax, 1              ; Número de syscall para write (1)
    mov rdi, 1              ; File descriptor 1 (stdout)
    mov rsi, hello_msg      ; Dirección del mensaje
    mov rdx, hello_len      ; Longitud del mensaje
    syscall                 ; Invocar la llamada al sistema

    ; Llamada al sistema exit (sys_exit)
    mov rax, 60             ; Número de syscall para exit (60)
    xor rdi, rdi            ; Código de salida 0
    syscall                 ; Invocar la llamada al sistema
