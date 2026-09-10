# Sabor Nómada 🌮 — Gestión de un Food Truck

Mini-proyecto integrador de C++ (Bootcamp Programación Cero a POO).
Sistema de consola para administrar el menú diario de un food truck.

## Descripción

**Sabor Nómada** simula el sistema que usaría un food truck para llevar el
control de sus platillos: qué vende, a qué precio, qué tan picante es cada
plato y cuántas unidades se han vendido. Todo se maneja con arreglos
paralelos (sin clases ni estructuras), tal como lo pide el alcance del
mini-proyecto.

## Datos que administra

Cada platillo (hasta 20 registros) guarda:

- **Nombre** del platillo (texto, identificador).
- **Precio** (0.5 a 100.0).
- **Nivel de picante** (1 = suave, 5 = extremo).
- **Unidades vendidas** (se actualiza automáticamente con el combo creativo).

## Funcionalidades del menú

1. **Registrar un platillo** — agrega un nuevo platillo respetando el límite de 20.
2. **Mostrar todos los platillos** — lista el menú completo.
3. **Buscar un platillo** — búsqueda secuencial por nombre (sin distinguir mayúsculas/minúsculas), informa si no existe.
4. **Mostrar reporte general** — calcula precio promedio, ingresos totales estimados (precio × vendidos) y el platillo más vendido.
5. **Combo Sorpresa del Día (componente creativo)** — ver abajo.
6. **Salir** — termina el programa de forma controlada.

## Componente creativo: Combo Sorpresa del Día

El sistema elige **al azar dos platillos distintos** del menú y arma un combo:

- Calcula el precio combinado y le aplica un **10% de descuento**.
- Calcula el **picante promedio** del combo y lo clasifica como *suave*,
  *equilibrado* o *extremo*.
- **Registra la venta real**: incrementa en 1 las unidades vendidas de
  ambos platillos del combo, lo cual se refleja después en el reporte
  general (ingresos y platillo más vendido). No es solo un mensaje: modifica
  los datos almacenados.

Requiere al menos 2 platillos registrados; si no los hay, el sistema lo informa.

## Validaciones y casos borde cubiertos

- La opción del menú siempre se valida en el rango 1–6.
- El precio se valida entre 0.5 y 100.0; el picante entre 1 y 5.
- Se controlan entradas no numéricas (el programa no se cierra, vuelve a pedir el dato).
- No se permite registrar más de 20 platillos.
- Si no hay platillos registrados, listar/buscar/reportar/combo lo informan claramente.
- Si la búsqueda no encuentra coincidencias, se informa sin cerrar el programa.

## Cómo compilar y ejecutar

Requiere un compilador de C++ (g++ recomendado, estándar C++17).

```bash
g++ -std=c++17 -o sabor_nomada main.cpp
./sabor_nomada
```

En Windows (con MinGW):

```bash
g++ -std=c++17 -o sabor_nomada.exe main.cpp
sabor_nomada.exe
```

## Autor

(tu nombre aquí)
