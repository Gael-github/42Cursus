# Calloc - Allocate and zero memory

```c
void	*ft_calloc(size_t count, size_t size)
{
	void	*buffer;

	buffer = (void *)malloc(size * count);
	if (!buffer)
		return (0);
	ft_bzero(buffer, size * count);
	return (buffer);
}
```

### ¿Qué hace ft_calloc?

```c

void	*ft_calloc(size_t count, size_t size)
```

- **`count`**: cuántos elementos quieres.
- **`size`**: tamaño de cada elemento (en bytes).
- Retorna: un puntero a la memoria reservada, ya inicializada a cero.

---

### El código

```c

void *buffer;
```

- Se declara un puntero  para guardar la dirección del bloque que se va a reservar.

---

```c

buffer = (void *)malloc(size * count)
```

- Se pide memoria para `count` elementos de `size` bytes cada uno.
- **Multiplicación** `size * count` da el total de bytes necesarios.
- Se hace cast a `(void *)` para dejar claro que el retorno es genérico.

---

```c

if (!buffer)
    return (0);
```

- Si `malloc` falla, devuelve `NULL`. Se chequea eso y se retorna `0` (o `NULL`, que es lo mismo en este contexto).

---

```c

ft_bzero(buffer, size * count);
```

- Aquí es donde se inicializa: se llena toda la memoria con ceros (`0`).
- Esto **evita basura** en la memoria

---

```c

return (buffer);
```

- Retorna el puntero a la memoria lista para usarse.

---

### ✅ ¿Cuándo usar `calloc`?

- Cuando necesitas memoria limpia (por ejemplo, arrays, estructuras, strings).
- Es más **seguro** que `malloc` en algunos casos porque ya viene inicializada.

---