# Proyecto Propio: Calculadora de Áreas en C

**Institución:** ESCOM - IPN  
**Materia:** Internet de las Cosas / Embedded Systems  
**Estudiante:** Sanchez De Jesus Arlet Berenice

## Descripción
Este proyecto consiste en una herramienta sencilla desarrollada en lenguaje C para el cálculo de áreas de triángulos. El objetivo principal es demostrar el dominio en la creación de **Makefiles desde cero**, configurando un entorno de compilación modular y automatizado en Windows.

## Características de la Automatización
A diferencia del ejercicio de ejemplo, este `Makefile` ha sido diseñado para ser ligero y eficiente, enfocándose en las buenas prácticas de compilación para sistemas embebidos:

* **Compilación Modular:** Separa la generación de archivos objeto (`.o`) del enlace final del ejecutable.
* **Compatibilidad con Windows:** Utiliza comandos nativos como `del` para la limpieza de archivos, evitando errores de entorno.
* **Flags de Compilación:** Incluye `-Wall` para detectar todas las advertencias y asegurar un código limpio.

## Estructura del Proyecto
* `main.c`: Código fuente con la lógica de cálculo.
* `Makefile`: Script de automatización con reglas personalizadas (`all`, `run`, `clean`).
* `.gitignore`: Configuración para mantener el repositorio limpio de binarios y archivos temporales.

## Instrucciones de Uso

Para gestionar este proyecto, utiliza los siguientes comandos en la terminal (PowerShell):

1. **Compilar el programa:**
   ```powershell
   mingw32-make