add_executable (HBT_unittest.e
  HBT_unittest.cc
  ../src/arsenal.cpp
  ../src/ParameterReader.cpp
  ../src/particleSamples.cpp
  ../src/HBT_correlation.cpp
  ../src/particle_decay.cpp
  )
target_link_libraries (HBT_unittest.e ${LIBS} ${ZLIB_LIBRARIES}
                       gtest gtest_main)
install(TARGETS HBT_unittest.e
        DESTINATION ${CMAKE_HOME_DIRECTORY}/unit_tests/)

add_executable (particleSamples_unittest.e
  particleSamples_unittest.cc
  ../src/arsenal.cpp
  ../src/ParameterReader.cpp
  ../src/particleSamples.cpp
  ../src/particle_decay.cpp
  )
target_link_libraries (particleSamples_unittest.e ${LIBS} ${ZLIB_LIBRARIES}
                       gtest gtest_main)
install(TARGETS particleSamples_unittest.e
        DESTINATION ${CMAKE_HOME_DIRECTORY}/unit_tests/)
