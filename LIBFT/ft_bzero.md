# Bzero

```c
void    ft_bzero(void *str, size_t n) 
{
size_t  i;

i = 0;

while (i < n)

{

((char *)str)[i] = '\0';

i++;

}
```

## Entendiendo ft_bzero

No me mola hacer cosas sin saber por qué, así que os pongo en contexto.

### ¿Para qué sirve esta función?

1. **Inicializar buffers:** preparando todo a 0 para que las cosas no exploten
2. **Evitar basura:** así no tenemos cosas aleatorias sueltas por el código, sino que está todo a 0
3. **Seguridad:** si manejamos datos sensibles, estamos limpiando la memoria antes de liberarla

⚠️ *Nota importante:* bzero está obsoleta y memset es más flexible, pudiendo meter más valores que 0, pero en 42 necesitamos aprenderla igualmente.

### Implementación

**Paso 1:** Casteando (convirtiendo tipos)

El `((char*))` es nuestro casteo - convertimos el puntero void a un puntero que señala a caracteres (char).

**Paso 2:** En el bucle while, mientras *i* no supere la longitud del string, vamos llenando todo de 0s.

### ¿Por qué usar char?

En C, un **char** ocupa exactamente *1 byte*. bzero está diseñada para poner a cero cada byte individual de un bloque de memoria.

Por lo tanto, al castear a `char *`, podemos recorrer la memoria byte a byte y establecer cada uno a 0.