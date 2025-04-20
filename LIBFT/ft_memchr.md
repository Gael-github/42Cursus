# memchr - Scan memory for a character

Busca el **primer byte** que coincida con un valor dado **`c`** dentro de los **primeros `n` bytes** del bloque de memoria apuntado por `s`.

```c
size_t i = 0;
char *str = (char *)s;

```

- Se inicializa un índice.
- Se castea `s` a `char *` para comparar byte a byte.

```c
while (i < n)
{
    if (str[i] == (char)c)
        return (&str[i]);
    i++;
}
```

- Recorremos
- Si encontramos que el byte actual es igual a `c`, devolvemos un puntero a esa posición de memoria.

```c
return (NULL);
```

- Si **no** se encuentra `c` en los primeros `n` bytes, devuelve `NULL`.

---

### En resumen:

- Devuelve un **puntero al primer byte** que coincide con `c`.
- Devuelve `NULL` si no encuentra ese byte en los primeros `n`.
- Útil para buscar caracteres específicos en un bloque de memoria, sin importar si hay `\\0` o no.

---

### Ejemplo:

```c
char data[] = { 'a', 'b', 'c', 'd' };
char *found = ft_memchr(data, 'c', 4);
// found ahora apunta a data[2]

```
