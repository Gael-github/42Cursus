# ft_substr

Extrae una subcadena de la cadena `s`, **comenzando desde el índice `start`** y con una longitud máxima de `len`.

- Extrae una subcadena con control de límites.
- Usa `malloc` → **liberala con `free()` cuando termines**.
- Si el `start` está fuera del string, devuelve `""`.
- Segura: nunca se pasa de la memoria original.

---

```c
char *ft_substr(char const *s, unsigned int start, size_t len)
```

- `s`: cadena original.
- `start`: posición desde la cual empezar a copiar.
- `len`: cantidad máxima de caracteres a copiar.

---

```c
if (ft_strlen(s) < start)
	return (ft_strdup(""));
```

- Si `start` es mayor que la longitud de `s`, no hay nada que copiar → retornamos un string vacío (`""`).

---

```c
if (len > ft_strlen(s + start))
	len = ft_strlen(s + start);
```

- Si `len` se pasa del final de la cadena desde `start`, se ajusta para **no leer fuera de límites**.

---

```c
buffer = (char *)malloc(sizeof(char) * (len + 1));
```

- Se reserva memoria para la subcadena **+1 para el `\0` final**.

---

```c
if (!buffer)
	return (NULL);
```

- Si `malloc` falla → se retorna `NULL`.

---

```c
ft_strlcpy(buffer, s + start, len + 1);
```

- Copia exactamente `len` caracteres desde `s + start` a `buffer`, asegurando el `\0` al final.

---

```c
return (buffer);
```

- Devuelve el nuevo string que contiene la subcadena.

---

Es clave para cortar strings por palabras o delimitadores.
