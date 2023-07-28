section .data
fmt: db "Hello, Holberton\n",0

section .text
extern printf
global main

main:

mov edi,fmt
mov eax, 0
call printf

mov eax, 0
ret

