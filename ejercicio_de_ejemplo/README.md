# Ejercicio de Ejemplo: Conjunto de Julia con Makefile

**Institución:** ESCOM - IPN  
**Materia:** Internet de las Cosas / Embedded Systems  
**Estudiante:** Sanchez De Jesus Arlet Yasmín  

## Descripción
Este proyecto es una demostración de la potencia de los **Makefiles** para automatizar flujos de trabajo complejos. No solo se encarga de compilar código fuente en C++, sino que también gestiona la ejecución de lógica matemática y la generación de representaciones visuales automáticas.

El programa calcula un fractal del Conjunto de Julia, exporta los datos crudos y utiliza un script de Gnuplot para generar una imagen final.

## Requisitos del Sistema
Para ejecutar este proyecto de forma automatizada, se requiere:
* **Compilador:** `g++` (MinGW en Windows).
* **Herramienta de automatización:** `make` (o `mingw32-make` en Windows).
* **Herramienta de graficación:** `Gnuplot` (debe estar en el PATH del sistema).

## Estructura del Proyecto
* `main.cpp`: Código fuente en C++ que realiza el cálculo de los puntos del fractal.
* `Makefile`: Archivo de configuración que contiene las reglas de compilación y limpieza.
* `julia_set.gp`: Script de Gnuplot para la generación de la imagen `.png`.
* `.gitignore`: Configuración para evitar subir archivos temporales (`.o`, `.txt`, `.exe`) al repositorio.

## Instrucciones de Uso

### 1. Generar el proyecto completo
Para compilar, generar los datos y crear la imagen fractal en un solo paso, ejecuta:
```bash
mingw32-make plot