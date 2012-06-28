CMAKE_MINIMUM_REQUIRED(VERSION 2.4.5)

PROJECT(vtkOBJWriter)
ENABLE_TESTING()

FIND_PACKAGE(VTK REQUIRED)
INCLUDE(${VTK_USE_FILE})

ADD_EXECUTABLE(vtkOBJWriterExample vtkOBJWriterExample.cxx vtkOBJWriter.cxx)
TARGET_LINK_LIBRARIES(vtkOBJWriterExample vtkHybrid)


ADD_EXECUTABLE(vtkOBJWriterTest vtkOBJWriterTest.cxx vtkOBJWriter.cxx)
TARGET_LINK_LIBRARIES(vtkOBJWriterTest vtkHybrid)
ADD_TEST(vtkOBJWriterTest vtkOBJWriterTest)
