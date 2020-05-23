unset(source_files)

set(srcdirs
	./
  )

foreach(srcdir ${srcdirs})
  include_directories(${srcdir})
  aux_source_directory(${srcdir} source_files)
endforeach()

add_executable(sampleFactory ${source_files})
