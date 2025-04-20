# memmove - Copy memory area with overlap handling

`ft_memmove`  sirve para copiar `n` bytes desde `src` (origen) hacia `dest` (destino), con una diferencia clave frente a `memcpy`: maneja **superposición de memoria** de forma segura.

### Paso a paso:

### 1. **Casteo de punteros**

```c
unsigned char *c_dest = (unsigned char *) dest;
unsigned char *c_src = (unsigned char *) src;
```

Se convierte todo a `unsigned char*` para poder copiar byte a byte(es lo más seguro y flexible)

### 2. **Chequeo de punteros**

```c
if (!c_dest && !c_src)
    return (NULL);
```

Si ambos punteros son nulos, no hay **nada que copiar** → retornamos `NULL`.

### 3. **Dirección de copia (¿adelante o atrás?)**

```c
if (c_dest < c_src)
```

- Si `dest` está **antes** de `src`, **no hay riesgo** de pisar datos → copiamos **hacia adelante** (del inicio al final).

```c
else
```

- Si `dest` está **después** de `src`, sí hay **riesgo de solapamiento** → copiamos **hacia atrás** (del final al inicio) para no pisar los datos que aún no copiamos.

### 4. **Copia hacia adelante**

```c
while **(++i < n)**
    c_dest[i] = c_src[i];
```

### 5. **Copia hacia atrás**

```c
i = n;
while **(i > 0)**
{
    **i--;**
    c_dest[i] = c_src[i];
}
```

y finalmente devuelve el puntero al destino return(dest)