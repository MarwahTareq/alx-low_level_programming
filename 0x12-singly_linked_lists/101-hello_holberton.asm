global    main
extern    printf
main:
call  printf
xor   eax, eax
mov 	eax, 0
mov   edi, format
ret
format: db `Hello, Holberton\n`,0
