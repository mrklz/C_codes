
## C Programming Collection
Репозиторий содержит коллекцию программ на языке C, включающую в себя упражнения из классического учебника Брайана Кернигана и Денниса Ритчи (K&R), а также решения олимпиадных задач с платформ Codeforces и Timus Online Judge.
## Структура проекта

C_codes/<br>
├── kr_exercises/ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;# Упражнения из книги Кернигана и Ритчи<br>
│ &nbsp;&nbsp;├── ch01/ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;# Глава 1 (упражнения 1_3.c, 1_10.c и др.)<br>
│ &nbsp;&nbsp;└── ch02/ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;# Глава 2 (упражнения 2_1.c, 2_2.c)<br>
├── codeforces/ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;# Решения задач с платформы Codeforces<br>
│ &nbsp;&nbsp;├── Beautiful_matrix.c<br>
│ &nbsp;&nbsp;├── watermelon.c<br>
│ &nbsp;&nbsp;└── ...<br>
└── timus/ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;# Решения задач с Timus Online Judge<br>
&nbsp;&nbsp;&nbsp;&nbsp;├── ania.c<br>
&nbsp;&nbsp;&nbsp;&nbsp;├── back_sqrt.c &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;# Задача №1001. Обратный корень<br>
&nbsp;&nbsp;&nbsp;&nbsp;└── bandit2.c



## Описание папок

* kr_exercises/ — Упражнения из книги "Язык программирования C" (Керниган, Ритчи), разбитые по главам.
* codeforces/ — Решения задач с платформы Codeforces (Watermelon, Way Too Long Words, Beautiful Matrix и др.).
* timus/ — Решения задач с платформы Timus Online Judge.

## Как запустить
Для компиляции и запуска программ вам понадобится компилятор GCC или Clang.

   1. Склонируйте репозиторий:
   git clone github.com
   2. Перейдите в папку с нужным файлом:
   cd C_codes/timus
   3. Скомпилируйте код:
   gcc back_sqrt.c -o back_sqrt -lm
   4. Запустите исполняемый файл:
   ./back_sqrt

## Требования

* Компилятор GCC (версии 9.0 и выше) или Clang
* Утилита Make (опционально, для сборки)

------------------------------

Когда опубликуете изменения, хотите ли вы разобраться, как компилировать сразу несколько файлов с помощью одной команды, или перейдем к наведению порядка в коде?

