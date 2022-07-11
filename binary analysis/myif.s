/*
    C言語の場合

    EAX = 0x5
    if (EAX == 0x3){
        EAX = 0x1
    } else {
        EAX = 0x0
    }
*/

global main

main:
mov eax, 0x5 // EAX = 0x5

cmp eax, 0x3 // if(EAX == 0x3)
jz equal
jmp neq

equal:
    mov eax, 0x1
    jmp exit
neq:
    mov eax, 0x0

exit:
