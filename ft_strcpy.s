section .text
    global _ft_strcpy
_ft_strcpy:
    mov rax,rdi
    mov rcx,0
    call _add
_add:
    cmp BYTE[rsi + rcx],0
    je _exit
    mov dl,BYTE[rsi + rcx]
    mov BYTE[rdi + rcx],dl
    inc rcx
    jne _add
_exit:
    mov BYTE[rdi + rcx],0
    ret