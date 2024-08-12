section .data
    msg db 'Hello, World'fasd  ; El mensaje a imprimir seguido de una nueva línea
    len equ $ - msg              ; Calcula la longitud del mensaje

section .text
    global _start

_start:
    ; Escribir el mensaje en stdout (file descriptor 1)
    mov rax, 1          ; syscall number for write
    mov rdi, 1          ; file descriptor 1 (stdout)
    mov rsi, msg        ; dirección del mensaje a escribir
    mov rdx, len        ; longitud del mensaje
    syscall             ; llamada al sistema

    ; Salir del programa
    mov rax, 60         ; syscall number for exit
    xor rdi, rdi        ; estado de salida 0
    syscall             ; llamada al sistema
nasm -f elf64 100-hello_world.asm && ld -s -o hello 100-hello_world.o
nasm -f elf64 100-hello_world.asm && ld -s -o 100-hello_world hello.o