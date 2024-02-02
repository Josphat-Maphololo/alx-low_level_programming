global    main
extern    printf
main:
mov   edi, format
xor   eax, eax
call  print
mov 	eax, 
ret
format: db `Hello, Holberton\n`,0
