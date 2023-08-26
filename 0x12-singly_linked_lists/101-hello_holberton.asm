section .data
    hello_message db "Hello, Holberton", 10, 0

section .text
    global main
    extern printf

main:
   push rbp	; Save the base pointer
   mov rdi, hello_message
   call printf

   pop rbp	; REstore the base pointer

   mov rax, 60	; syscall number for exit
   xor rdi, rdi	; Exit status 0
   syscall

section .bss
    resb 128	; Reserve space for printf buffer
