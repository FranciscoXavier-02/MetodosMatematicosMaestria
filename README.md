# Métodos Matemáticos – Series en C

Este repositorio contiene un programa en C que calcula sumas parciales de dos series clásicas de análisis matemático:

1. **Serie armónica**  
   \[
   \sum_{n=1}^N \frac{1}{n}
   \]
   (diverge cuando \(N \to \infty\)).

2. **Serie de Basel**  
   \[
   \sum_{n=1}^N \frac{1}{n^2}
   \]
   (converge a \(\pi^2/6\)).

---

## Compilación
Para compilar el programa (requiere `gcc`):

```bash
gcc seriescalc.c -o seriescal -lm

