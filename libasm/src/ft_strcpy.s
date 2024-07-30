section .text
    global ft_strcpy

ft_strcpy:
    mov rbx, rdi    ; cpy dst to holder

    copy:
        cmp byte [rsi], 0   ; comp byte pointed by src with 0
        je end              ; if last cmp is true, jump to return_count
        mov al, byte [rsi]  ; cpy src pointed byte into tmp
        mov byte [rdi], al  ; cpy tmp into dst pointed byte
        inc rdi             ; dst++
        inc rsi             ; src++
        jmp copy            ; restart loop

    end:
        mov byte [rdi], 0   ; secure ending NULL char
        mov rax, rbx        ; cpy holder to return registery
        ret