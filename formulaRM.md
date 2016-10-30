6. Push Base Pointer
7. Make current stack pointer the new base pointer
8. Subtract space from stack for esi and edi
9. Store 1 in return register (eax)
10. jump to .L3 for comparison
11.
12.
13.
14. .L2
15. //commented
16. multiply value in paramter by current eax (return value) and store it in return value
17.
18. //commented
19.
20. Move to next line
21. Compare 0 to first parameter
22. if compare is greater zero jump to .L2, otherwise continue
23. .L4
24. leave
25. returns
