section .text
    global _ft_strlen
_ft_strlen:
    mov rax, 0
    call _len
_len:
    cmp BYTE[rdi + rax],0
    je _exit
    inc rax
    jne _len
_exit :
    ret