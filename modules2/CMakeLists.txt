cmake_minimum_required(VERSION 3.0.0)
project(calculator_project VERSION 1.0.0)

add_library(my_math
	add.c
	div.c)

add_library(my_print
		print.c)

add_executable(calculator
	main.c
	)

add_executable(duplicate_calculator
	main.c
	)

target_link_libraries(calculator
	PRIVATE	my_math
		my_print)

target_link_libraries(duplicate_calculator
	PRIVATE my_math
	my_print)

#order of .c file is not required
