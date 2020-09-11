# Solution for Chapter1 Exercies

## 8 Not the same signature

```c
int abc(int a, int b, int c);
float abc(int a, int b, int c);
```

The number and class of formal signature decide the signature of a function. Not the class of this function.

## 9 abc function

1 will call `int abc(int a, int b, int c)`.
2 will call `float abc(float a, float b, float c)`.
3 will crash.
4 will call `float abc(float a, float b, float c)`.
