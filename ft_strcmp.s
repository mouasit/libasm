section .text
    global _ft_strcmp
_ft_strcmp:
    mov rax,0
    mov al,[rdi]
    mov bl,[rsi]
    cmp al,0
    je _exit
    cmp bl,0
    je _exit
    inc rdi
    inc rsi
    cmp al,bl
    jne _exit
    je _ft_strcmp
_exit:
    sub rax,rbx
    ret