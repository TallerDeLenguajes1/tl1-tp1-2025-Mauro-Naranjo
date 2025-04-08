[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)

  El archivo .gitignore es un archivo de texto que le dice a Git qué otros archivos y carpetas de un proyecto debe ignorar.
 _¿Por qué es conveniente incluir un archivo .gitignore?_
  Evita subir archivos innecesarios, temporales como .exe o .log; que se sobrescriban archivos de configuración o que contengan información sensible como contraseñas. Mejora la organización del repositorio y lo hace mas liviano, ayudando al entendimiento de otros colaboradores y evitando errores de control de versiones.

 _¿Cuándo se debe hacer?_
  El archivo .gitignore debe crearse al iniciar un repositorio, idealmente justo después de ejecutar git init o antes del primer commit. Esto permite asegurarse de que Git no rastree archivos innecesarios, como archivos de compilación, temporales, de configuración o datos sensibles. Sin embargo, si no se creó desde el inicio, se puede agregar en cualquier momento, aunque será necesario eliminar del seguimiento aquellos archivos que ya hayan sido añadidos por error. Incorporar el .gitignore desde el principio mantiene el repositorio limpio, seguro y más fácil de manejar.

 _¿Cómo configuraría el archivo .gitignore?_
- Abre tu terminal o línea de comandos.
- Navega hasta la raíz de tu repositorio de Git.
- Escribe touch .gitignore y presiona Enter.
- Abre el nuevo archivo .gitignore en tu editor de texto preferido.
- Agrega las rutas de los archivos o directorios que quieres que Git ignore, cada una en una línea nueva.
- Guarda y cierra el archivo.

  _Punto 3 Apartado g_
  El apartado 2 y 3 del punto anterior tienen los mismos resultados ya que el puntero contiene la dirección de memoria de la variable apuntada, es decir el espacio físico donde esta la variable. El apartado 4 muestra la dirección de memoria del puntero, que es el lugar en la memoria donde esta almacenado el puntero, que es distinto a lo que guarda el mismo.