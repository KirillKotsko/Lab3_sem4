# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\SortCompare_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\SortCompare_autogen.dir\\ParseCache.txt"
  "SortCompare_autogen"
  )
endif()
