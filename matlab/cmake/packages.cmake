set(CMAKE_FIND_PACKAGE_NO_PACKAGE_REGISTRY ON)
set(CMAKE_FIND_PACKAGE_NO_SYSTEM_PACKAGE_REGISTRY ON)

if(APPLE)
  set(MINIMUM_MATLAB_VERSION 9.2)
  # TODO(jamiesnape): Change from 3.1 to 3.5 when #7323 merges.
  set(MINIMUM_PROTOBUF_VERSION 3.1)
else()
  # TODO(jamiesnape): Change from 9 to 9.2 when support for R2016a and R2016 is
  # no longer needed.
  set(MINIMUM_MATLAB_VERSION 9)
  set(MINIMUM_PROTOBUF_VERSION 2.6.1)
endif()

find_package(drake CONFIG REQUIRED
  NO_CMAKE_SYSTEM_PATH NO_SYSTEM_ENVIRONMENT_PATH
)
find_package(Eigen3 3.3.3 CONFIG REQUIRED
  NO_CMAKE_SYSTEM_PATH NO_SYSTEM_ENVIRONMENT_PATH
)
find_package(Matlab ${MINIMUM_MATLAB_VERSION} MODULE REQUIRED
  COMPONENTS MAIN_PROGRAM MEX_COMPILER MX_LIBRARY
)
find_package(Protobuf ${MINIMUM_PROTOBUF_VERSION} MODULE REQUIRED)
