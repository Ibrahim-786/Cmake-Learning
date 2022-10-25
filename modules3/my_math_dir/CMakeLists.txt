add_library(my_math
src/add.c
src/div.c)

target_include_directories(my_math PUBLIC inc)
