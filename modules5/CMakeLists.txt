cmake_minimum_required(VERSION 3.0.0)


set(VAR YES)


if(VAR)
	message("if block executed")
else()
	message("Else block executed")
endif()

#======================================================

set(VAR "")


if(VAR)
	message("if block executed")
else()
	message("Else block executed")
endif()

#===================================================

set(VAR OFF)
set(VAR2 VAR)

if(VAR2)
	message("if block executed")
else()
	message("Else block executed")
endif()

if(${VAR2})
	message("if block executed")
else()
	message("Else block executed")
endif()
