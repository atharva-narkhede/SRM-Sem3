DATA SEGMENT
    ARR DB 12H, 23H, 34H, 45H, 56H, 67H, 78H, 89H
    LEN equ ($ - ARR)
DATA ENDS

CODE SEGMENT
START:
    MOV AX, @DATA   ; Initialize DS
    MOV DS, AX

    MOV BX, 0       ; Initialize index to 0
    MOV AL, ARR[BX]  ; Load first element into AL
    MOV CX, LEN     ; Set counter to array length

LOOP1:
    CMP CX, 1       ; Check if we've reached the last element
    JE END_LOOP

    INC BX          ; Move to next element
    MOV DL, ARR[BX]  ; Load current element into DL
    CMP DL, AL       ; Compare current element with current largest
    JBE LOOP1       ; If not larger, continue looping
    MOV AL, DL       ; Otherwise, update largest

    LOOP LOOP1      ; Continue looping

END_LOOP:
    MOV AH, 4CH     ; Return to DOS
    INT 21H

CODE ENDS
END START
