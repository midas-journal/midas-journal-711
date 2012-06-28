#include <vtkPolyData.h>
#include <vtkSphereSource.h>
#include <vtkSmartPointer.h>

#include "vtkOBJWriter.h"

int main (int argc, char *argv[])
{
  //Verify command line arguments
  if(argc != 2)
    {
    cout << "Required arguments: OutputFilename(obj)" << endl;
    return EXIT_FAILURE;
    }
  
  //Parse command line arguments
  vtkstd::string outputFilename = argv[1];
  
  vtkSmartPointer<vtkSphereSource> sphereSource = 
      vtkSmartPointer<vtkSphereSource>::New();
  
  vtkSmartPointer<vtkOBJWriter> writer = 
      vtkSmartPointer<vtkOBJWriter>::New();
  writer->SetInputConnection(sphereSource->GetOutputPort());
  writer->SetFileName(outputFilename.c_str());
  writer->Update();
  
  return EXIT_SUCCESS;
}
