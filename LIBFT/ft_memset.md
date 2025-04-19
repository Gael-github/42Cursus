# memset - Fill memory with a constant byte

R**ellena un bloque de memoria con un valor específico**.

⚠️ No rellena variables. Rellena memoria bruta byte a byte.

```c
void	*ft_memset(void *dest, int c, size_t len)
{
	size_t			i;
	unsigned char	*buffer;

	i = 0;
	buffer = (unsigned char *)dest;
	while (i < len)
	{
		buffer[i] = (unsigned char)c;
		i++;
	}
	return (dest);
}
```

### Parámetros:

- `dest`: puntero al bloque de memoria.
- `c`: valor que manipulas
- `len`: cantidad de **bytes** que vas a llenar.

---

## Lógica

- Se **castea dest a unsigned char *** para poder recorrerlo **byte a byte.**
- Va escribiendo el **valor c** en cada byte de memoria,
- Retorna el puntero original para que puedas seguir trabajando con él.

---

## CUIDADO

- Si usas `memset` con enteros, **no rellena con "ceros lógicos" de int**, sino con **bytes**.

---

## ¿Cuándo se usa?

- Inicializar estructuras a 0.
- Resetear buffers.
- Preparar memoria antes de usarla.
- Implementar cosas como `calloc`