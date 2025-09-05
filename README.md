# parallel-distributed-computing-fundamentals

Este repositorio reúne materiales, ejemplos y ejercicios destinados al aprendizaje de los fundamentos de la computación paralela y distribuida. El enfoque es práctico y progresivo, abarcando desde los conceptos básicos del lenguaje C hasta modelos de programación con OpenMP, MPI, CUDA y Spark.

---

## Estructura del repositorio

```

parallel-distributed-computing-fundamentals/
│── LICENSE
│── README.md
│── docs/                  # Documentación y notas teóricas
│── session1-c-basic/      # Introducción al lenguaje C
│── session2-c-exercises/  # Ejercicios prácticos en C
│── session3-openmp/       # Programación paralela con OpenMP
│── session4-mpi/          # Programación distribuida con MPI
│── session5-cuda/         # Computación en GPU con CUDA
│── session6-spark/        # Procesamiento distribuido con Apache Spark

```

---

## Nomenclatura para ejercicios en C

Con el fin de mantener un orden claro y uniforme, los archivos de ejercicios siguen la convención:

**Formato general:**
```

<tema>*<numero>*<descripcion>.c

```

### 1. Tema
Prefijo corto que identifica la categoría:
- `cb` → C básico  
- `ce` → C ejercicios intermedios  
- `omp` → OpenMP  
- `mpi` → MPI  
- `cuda` → CUDA  
- `spk` → Spark (aunque los ejemplos sean usualmente en Python o Scala)

### 2. Número
Dos dígitos para mantener orden:
```

01, 02, 03, …

```

### 3. Descripción
Breve, en inglés.  
Palabras separadas por guion bajo `_`.  
No más de 3–4 palabras.

**Ejemplos:**
```

cb\_01\_hello\_world.c
cb\_02\_sum\_array.c
ce\_03\_matrix\_multiplication.c
omp\_01\_vector\_sum.c
mpi\_02\_matrix\_scatter\_gather.c
cuda\_01\_vector\_add.c

````

---

## Compilación y ejecución

La forma de compilar y ejecutar depende de la tecnología:

### C básico / ejercicios
```bash
gcc cb_01_hello_world.c -o cb_01_hello_world.exe
./cb_01_hello_world.exe
````

### OpenMP

```bash
gcc -fopenmp omp_01_vector_sum.c -o omp_01_vector_sum.exe
./omp_01_vector_sum.exe
```

### MPI (Windows + MS-MPI)

```powershell
mpicc mpi_01_hello_world.c -o mpi_01_hello_world.exe
mpiexec -n 4 mpi_01_hello_world.exe
```

### CUDA

```bash
nvcc cuda_01_vector_add.cu -o cuda_01_vector_add
./cuda_01_vector_add
```

### Spark

```bash
spark-submit spk_01_wordcount.py
```

---

## Objetivo académico

Este repositorio busca servir como guía práctica y de referencia para estudiantes universitarios que se inician en la programación paralela y distribuida. El propósito es:

* Reforzar el dominio del lenguaje C como base.
* Introducir modelos de paralelismo en CPU con OpenMP.
* Presentar la programación distribuida con MPI.
* Explorar el potencial de las GPU mediante CUDA.
* Familiarizarse con el procesamiento distribuido de grandes volúmenes de datos usando Spark.

El nivel de dificultad corresponde a un curso de octavo semestre en ciencias de la computación o ingeniería de sistemas.