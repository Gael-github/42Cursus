# memcpy - Copy memory area

Su trabajo es **copiar `n` bytes desde `src` hacia `dest`**, de forma directa, **sin preocuparse por solapamientos**.

---

### Paso a paso:

```c
size_t i = 0;
char *source = (char *)src;
char *dst = (char *)dest;

```

- Se castea los punteros como `char *` para copiar **byte a byte**.

```c
if (!source && !dst)
	return (0);
```

- Si **ambos** punteros son **`NULL`** → devuelve `0`.

---

### Bucle de copia:

```c
while (i < n)
{
	dst[i] = source[i];
	i++;
}
```

- Se copian `n` bytes de `source` a `dst`, uno por uno.

---

- No es segura si hay **solapamiento** entre `src` y `dest`. Ahí deberías usar `memmove`.

---