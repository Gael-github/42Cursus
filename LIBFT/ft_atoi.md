# Atoi- Conveting into an interger

Yo me rallaba pensando que iba a tener que convertir int en caracteres o algo asi y que era una movida que va esto es sencillísimo. La cosa es ignorar todo lo que no sea int

```c
int	ft_atoi(const char *str)
{
	unsigned int	i;
	int				res;
	int				sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;

	while ((str[i] != '\0') && (str[i] >= '0' && str[i] <= '9'))
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);

```

### 🔍 Lógica paso a paso:

### 1. **Inicialización**

- `i` recorre la cadena.
- `res` guarda el resultado numérico.
- `sign` define si el número será positivo o negativo.

---

### 2.**Ignora espacios y caracteres de control (tab, newline, etc)**

```c

while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
	i++;
```

- Salta cualquier whitespace inicial.
- Caracteres como espacio (`' '`), tabulación (`'\t'`), salto de línea (`'\n'`)...

---

### 3. **Maneja el signo**

- Si ve un -, el resultado será negativo.
- Si ve un `+`, sigue como positivo.
- Avanza el índice para no procesarlo más adelante.

---

### 4. **Procesa los dígitos**

```c

while ((str[i] != '\0') && (str[i] >= '0' && str[i] <= '9'))
{
	res = (res * 10) + (str[i] - '0');
	i++;
}
```

- Mientras haya caracteres y sean números (`'0'` a `'9'`):
    - Multiplica `res` por 10 y suma el valor del dígito actual.
    - `'0'` tiene valor ASCII 48, así que `str[i] - '0'` da el valor numérico real.

---

### . **Devuelve el resultado final**

```c

return (res * sign);
```

- Aplica el signo y devuelve el número entero.

---

### ✅ Ejemplo práctico:

```c
ft_atoi("   -123abc") → -123
ft_atoi("42") → 42
ft_atoi("   +007") → 7
```

---