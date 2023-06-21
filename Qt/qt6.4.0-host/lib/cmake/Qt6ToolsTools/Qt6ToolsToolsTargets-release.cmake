#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Qt6::qhelpgenerator" for configuration "Release"
set_property(TARGET Qt6::qhelpgenerator APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Qt6::qhelpgenerator PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/./libexec/qhelpgenerator"
  )

list(APPEND _IMPORT_CHECK_TARGETS Qt6::qhelpgenerator )
list(APPEND _IMPORT_CHECK_FILES_FOR_Qt6::qhelpgenerator "${_IMPORT_PREFIX}/./libexec/qhelpgenerator" )

# Import target "Qt6::qtattributionsscanner" for configuration "Release"
set_property(TARGET Qt6::qtattributionsscanner APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Qt6::qtattributionsscanner PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/./libexec/qtattributionsscanner"
  )

list(APPEND _IMPORT_CHECK_TARGETS Qt6::qtattributionsscanner )
list(APPEND _IMPORT_CHECK_FILES_FOR_Qt6::qtattributionsscanner "${_IMPORT_PREFIX}/./libexec/qtattributionsscanner" )

# Import target "Qt6::qdoc" for configuration "Release"
set_property(TARGET Qt6::qdoc APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Qt6::qdoc PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/qdoc"
  )

list(APPEND _IMPORT_CHECK_TARGETS Qt6::qdoc )
list(APPEND _IMPORT_CHECK_FILES_FOR_Qt6::qdoc "${_IMPORT_PREFIX}/bin/qdoc" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)