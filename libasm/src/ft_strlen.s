section .text
    global ft_strlen

ft_strlen:
    xor rcx, rcx    ; counter = 0

    count:
        cmp byte [rdi], 0   ; comp byte pointed by rbx with 0
        je end              ; if last cmp is true, jump to return_count
        inc rdi             ; rbx++, moving to next byte
        inc rcx             ; rcx++, incrementing counter
        jmp count           ; restart loop

    end:
        mov rax, rcx        ; cpy counter to rax (return registery)
        ret                 ; return rax