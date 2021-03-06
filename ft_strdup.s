section .text
    global _ft_strdup
    extern _ft_strlen
    extern _malloc
    extern _ft_strcpy
    extern ___error

_ft_strdup:
    call _ft_strlen
    inc rax
    push rdi
    mov rdi,rax
    call _malloc
    cmp rax,0
    je _exit
    mov rdi, rax
    pop rsi
    call _ft_strcpy
    ret
_exit:
    push 12       
    call ___error   
    pop qword[rax]
    mov rax, 0
    ret