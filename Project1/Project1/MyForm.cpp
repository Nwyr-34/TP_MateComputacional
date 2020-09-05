#include "MyForm.h"
using namespace System::Windows::Forms;
using namespace Project1;
int main()
{
	MyForm^nuevo = gcnew MyForm();
	Application::EnableVisualStyles();
	Application::Run(nuevo);

	return 0;
}
